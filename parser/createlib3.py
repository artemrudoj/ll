#!/usr/bin/python
import re


def initstr(num,fname):
	num = num + 2
	str_init = \
	"	int rc;\n" + \
	"	DataStr" + str(num) + "p data;\n" + \
	"	data.callInfo.result = VINF_SUCCESS;\n" + \
	"	data.callInfo.u32ClientID = gClientID;\n" + \
	"	data.callInfo.u32Function = REDIRECT_" + fname.upper() + ";\n" + \
	"	data.callInfo.cParms = " + str(num) +";\n"  
	return str_init

def initarg(num, name, argtype):
	str_arg =""	
	if argtype == "i":
		str_arg = \
		"	data.par" + str(num) + ".type"+ " = VMMDevHGCMParmType_32bit;\n" + \
		"	data.par" + str(num) + ".u.value32 = " + name + ";\n" 
	elif argtype == "l":
		str_arg = \
		"	data.par" + str(num) + ".type"+ " = VMMDevHGCMParmType_64bit;\n" + \
		"	data.par" + str(num) + ".u.value64 = " + name + ";\n" 
	elif argtype == "b":
		name = name[1:]
		str_arg = \
		"	data.par" + str(num) + ".type"+ " = VMMDevHGCMParmType_LinAddr;\n" + \
		"	data.par" + str(num) + ".u.Pointer.size = 0x10000;\n" + \
		"	data.par" + str(num) + ".u.Pointer.u.linearAddr = (uintptr_t)" + name + ";\n" #(uint32_t*)
	elif argtype == "v":
		name = name[1:]
		str_arg = \
		"	data.par" + str(num) + ".type"+ " = VMMDevHGCMParmType_LinAddr;\n" + \
		"	data.par" + str(num) + ".u.Pointer.size = 0x10000;\n" + \
		"	data.par" + str(num) + ".u.Pointer.u.linearAddr = (uintptr_t)"+ name + ";\n" #(uint32_t*)
	elif argtype == "q":
		name = name[2:]
		str_arg = \
		"	data.par" + str(num) + ".type"+ " = VMMDevHGCMParmType_LinAddr;\n" + \
		"	data.par" + str(num) + ".u.Pointer.size = 0x10000;\n" + \
		"	data.par" + str(num) + ".u.Pointer.u.linearAddr = (uintptr_t)"+ name + ";\n"#(uint32_t**)
	elif argtype == "s":
		str_arg = \
		"	data.par" + str(num) + ".type"+ " = VMMDevHGCMParmType_LinAddr;\n" + \
		"	data.par" + str(num) + ".u.Pointer.size = 0x10000;\n" + \
		"	data.par" + str(num) + ".u.Pointer.u.linearAddr = (uintptr_t)"+ name + ";\n"#(uint32_t*)
	elif argtype == "g":
		str_arg = \
		"	data.par" + str(num) + ".type"+ " = VMMDevHGCMParmType_LinAddr;\n" + \
		"	data.par" + str(num) + ".u.Pointer.size = 0x10000;\n" + \
		"	data.par" + str(num) + ".u.Pointer.u.linearAddr = (uintptr_t)"+ name + ";\n"#(uint32_t*)
	return str_arg

def mkargs( line, name):
	if name == "glGetUniformIndices" or name == "glShaderSource" or name == "glTransformFeedbackVaryings" or name == "eglCreatePixmapSurfaceHI":
		flag = 1
	else : flag = 0
	line = line[0:-1]
	num = 1
	args = ""
	semaphor = 2
	for i in line.split(" "):
		if semaphor != 2:
			semaphor = semaphor + 1
			continue
		if flag == 1 and num == 3:
			if name == "eglCreatePixmapSurfaceHI":
				args = args + "struct EGLClientPixmapHI *par3, "
				return args
			args = args + "const GLchar* const* par3, "
			num = num + 1
			semaphor = 0
			continue
		if i == "void)" :
			return "void  "
		if i == "const":
			args = args + "const "
			continue
		j = i.find("*") 
		if j != -1:
			args = args + i[0:j] + " " + i[j:] + "par" + str(num) + ", "                           #all *
		else :
			args = args + i + " par" + str(num) + ", " 
		num = num + 1
	return args

def initprintinfile(num, line):
	num = num + 2
	end2 =  "	ALOGI(\"@artem " + line + "\");\n"
	end0 =  "	pid_t pid;\n	pid = getpid();\n" 
	end1 = 	"	data.par" + str(num) + ".type"+ " = VMMDevHGCMParmType_32bit;\n" + \
		"	data.par" + str(num) + ".u.value32 = pid;\n" 
	end0 = end2 + end0 + end1 + "	ALOGI(\"" + line + ", gClientID = %d, drv_fd = %d, deb_fd = %d\", gClientID, drv_fd, deb_fd);\n" + "	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);\n" +\
				"	if ( rc != 0 )\n	{\n		ALOGI(\"@artem error " + line + " rc = %d\", rc);\n	}\n"
	return  end0

def getreturntype(line):
	line = line[0:-1]
	j = 0
	string = ""
	for i in line.split(" "):
		if i[0] == "g" or i[0] == "e": # all strings before gl... and egl...
			break
		string = string  + i +" "
	return string 

def initretpar(line, num):
	num = num + 1
	if line == "GLint " or line == "GLbyte " or line == "GLboolean " or line == "GLshort " or  line == "GLsizei "\
		or line == "GLubyte " or line == "GLfloat " or line == "GLenum " or line == "GLuint " or line == "EGLBoolean " \
		or line == "EGLenum " or line == "EGLNativeFileDescriptorKHR " or line == "EGLsizeiANDROID " or line == "EGLint ":
		ret = 	"	data.par" + str(num) + ".type"+ " = VMMDevHGCMParmType_32bit;\n" +\
			"	data.par" + str(num) + ".u.value32 = -555;\n" 
		return ret
	elif line == "GLint64 " or line == "EGLnsecsANDROID " or line == "EGLuint64KHR " or line == "EGLuint64NV " \
		or line == "EGLTimeNV " or line == "EGLTimeKHR ":
		ret = 	"	data.par" + str(num) + ".type"+ " =VMMDevHGCMParmType_64bit;\n" +\
			"	data.par" + str(num) + ".u.value32 = -555;\n" 
		return ret
	elif line == "void " or line == "const GLubyte* " or line == "GLvoid* " or line == "GLsync " or line == "void* "\
		or line == "const char * " or line == "EGLSurface " or line == "EGLContext " or line == "EGLDisplay "\
		or line == "__eglMustCastToProperFunctionPointerType " or line == "EGLImageKHR " \
		or line == "EGLSyncKHR " or line == "EGLSyncNV " or line == "EGLStreamKHR " :
		ret = 	"	data.par" + str(num) + ".type"+ " = VMMDevHGCMParmType_LinAddr;\n" +\
			"	data.par" + str(num) + ".u.Pointer.size = 0x10000;\n" + \
			"	data.par" + str(num) + ".u.Pointer.u.linearAddr = (uintptr_t) NULL;\n" 
		return ret
	else:
		return "	@NULL;\n"



def getreturn(line, num):
	num = num + 1
	if line == "GLint ":
		return "	return ( GLint)data.par" + str(num) + ".u.value32;\n"
	elif line == "GLboolean ":
		return "	return ( GLboolean)data.par" + str(num) + ".u.value32;\n"
	elif  line == "GLbyte " :
		return "	return ( GLbyte)data.par" + str(num) + ".u.value32;\n"
	elif line == "GLshort " :
		return "	return ( GLshort)data.par" + str(num) + ".u.value32;\n"
	elif line == "GLsizei ":
		return "	return ( GLsizei)data.par" + str(num) + ".u.value32;\n"
	elif line == "GLubyte ":
		return "	return ( GLubyte)data.par" + str(num) + ".u.value32;\n"
	elif line == "GLfloat ":
		return "	return ( GLfloat)data.par" + str(num) + ".u.value32;\n"
	elif line == "GLint64 ":
		return "	return ( GLint64)data.par" + str(num) + ".u.value64;\n"
	elif line == "GLuint64 ":
		return "	return ( GLuint64)data.par" + str(num) + ".u.value64;\n"
	elif  line == "GLenum ":
		return "	return ( GLenum)data.par" + str(num) + ".u.value32;\n"
	elif line == "void ":
		return "	return ;\n"
	elif line == "GLuint ":
		return "	return ( GLuint)data.par" + str(num) + ".u.value32;\n"
	elif line == "const GLubyte* ":
		return "	return ( GLubyte*)data.par" + str(num) + ".u.Pointer.u.linearAddr;\n"
	elif line == "GLvoid* ":
		return "	return ( GLvoid*)data.par" + str(num) + ".u.Pointer.u.linearAddr;\n"
	elif line == "GLsync ":
		return "	return ( GLsync)data.par" + str(num) + ".u.Pointer.u.linearAddr;\n"
	elif line == "void* ":
		return "	return ( void*)data.par" + str(num) + ".u.Pointer.u.linearAddr;\n"
	elif line == "EGLint ":
		return "	return ( EGLint)data.par" + str(num) + ".u.value32;\n"
	elif line == "EGLDisplay ":
		return "	return ( EGLDisplay)data.par" + str(num) + ".u.Pointer.u.linearAddr;\n"
	elif line == "EGLBoolean ":
		return "	return ( EGLBoolean)data.par" + str(num) + ".u.value32;\n"
	elif line == "const char * ":
		return "	return ( char*)data.par" + str(num) + ".u.Pointer.u.linearAddr;\n"
	elif line == "EGLSurface ":
		return "	return ( EGLSurface)data.par" + str(num) + ".u.Pointer.u.linearAddr;\n"
	elif line == "EGLContext ":
		return "	return ( EGLContext)data.par" + str(num) + ".u.Pointer.u.linearAddr;\n"
	elif line == "EGLenum ":
		return "	return ( EGLenum)data.par" + str(num) + ".u.value32;\n"
	elif line == "__eglMustCastToProperFunctionPointerType ":
		return "	return ( __eglMustCastToProperFunctionPointerType)data.par" + str(num) + ".u.Pointer.u.linearAddr;\n"
	elif line == "EGLImageKHR ":
		return "	return ( EGLImageKHR)data.par" + str(num) + ".u.Pointer.u.linearAddr;\n"
	elif line == "EGLSyncNV ":
		return "	return ( EGLSyncNV)data.par" + str(num) + ".u.Pointer.u.linearAddr;\n"
	elif line == "EGLint ":
		return "	return ( EGLint)data.par" + str(num) + ".u.value32;\n"
	elif line == "EGLuint64NV ":
		return "	return ( EGLuint64NV)data.par" + str(num) + ".u.value64;\n"
	elif line == "EGLStreamKHR ":
		return "	return ( EGLStreamKHR)data.par" + str(num) + ".u.Pointer.u.linearAddr;\n"
	elif line == "EGLNativeFileDescriptorKHR ":
		return "	return ( EGLNativeFileDescriptorKHR)data.par" + str(num) + ".u.value32;\n"
	elif line == "EGLSyncKHR ":
		return "	return ( EGLSyncKHR)data.par" + str(num) + ".u.Pointer.u.linearAddr;\n"
	else:
		return "	return @NULL;\n"



		
def main():
	f1 = open("argstypes")
	f2 = open("name")
	f3 = open("out")
	f4 = open("libGLES_artem.cpp", 'w')
	f5 = open("number.h", 'w')
	f6 = open("prot")
	line1 = f1.readline()  #argstype
	line2 = f2.readline()  #funcname
	line3 = f3.readline()  #info about structure
	line6 = f6.readline()
	q = 0
	f5.write("typedef enum\n{\n")
	f4.write("#include <number.h>\n\n\n")
	while line1:
		line2 = line2[0:-1]
		f5.write("	REDIRECT_"+  line2.upper() + "	=	"+str(q)+ "	,\n") # for enum
		q = q + 1
		tmp = line2
		mkarg = mkargs(line1, line2)
		mkarg = mkarg[0:-2] + ")"           # must add ;\n
		num = line3[0]                      # countity of args
		if num == "1":
			if line3[1] != ":":
				num = num + line3[1]
				line3 = line3[1:]
		if mkarg == "void)":
			num = 0	
		struct1 = initstr(int(num),line2)
		line = getreturntype( line6)	
		returned = getreturn(line, int(num))
		tmp = line + tmp +"("+ mkarg + "\n" + "{\n" + struct1
		j = 1
		a = 0
		for i in range(1, int(num) + 1):
			if mkarg == "void)":
				num = 0
				break
			if mkarg.split(" ")[j] == "char":
				if mkarg.split(" ")[j-1] == "const":
					j = j + 1
			if mkarg.split(" ")[j] == "GLchar*":
				j = j + 1
				if mkarg.split(" ")[j] == "const*":
					j = j + 1
					a = 1		
			if mkarg.split(" ")[j][0] == "G" or mkarg.split(" ")[j][0] == "v" or mkarg.split(" ")[j][0] == "E"  :
				j = j + 1
			argtype = line3[2*i]
			if a == 1:
				argum = "**par3 "
			else : argum = mkarg.split(" ")[j]
			arg = initarg(i, argum[0:-1] , argtype)
			tmp = tmp + arg
			j = j + 2
			a = 0
		retpar = initretpar(line, int(num))
		tmp = tmp + retpar
		retpar = initprintinfile( int(num), line2)
		tmp = tmp + retpar + returned+"}\n" + "\n" +"\n"		
		f4.write(tmp)		
		line1 = f1.readline()
		line2 = f2.readline()
		line3 = f3.readline()
		line6 = f6.readline()
	f1.close()
	f2.close()
	f3.close()
	f4.close()

if __name__ == '__main__':
	main()
