#!/usr/bin/python
import re
import sys

struct = ""
length = 0
letter = 0
words = 0
f1 = open("argstypes2")
f2 = open("out", 'w') 
line1 = f1.readline()
length = len(line1)
while line1:
	for i in range(length):
		if line1[i] == ' ':
			words =words +1
	words = words + 1
	line1 = line1[0:-1]
	for i in line1.split(" "):
		if i == "GLvoid":#void
			struct = struct + "void_"
		elif i == "GLvoid*":#char
			struct = struct + "v_"
		elif i == "GLvoid**":#char
			struct = struct + "q_"
		elif i == "GLchar":#char
			struct = struct + "i_"
		elif i == "GLenum":#unsigned int
			struct = struct + "i_"
		elif i == "GLboolean":#unsigned char 
			struct = struct + "i_"
		elif i == "GLbitfield":#unsigned int
			struct = struct + "i_"
		elif i == "GLbyte":#khronos_int8_t
			struct = struct + "i_"
		elif i == "GLshort":#short
			struct = struct + "i_"	
		elif i == "GLint":#int
			struct = struct + "i_"
		elif i == "GLsizei":#int
			struct = struct + "i_"
		elif i == "GLubyte":#khronos_uint8_t
			struct = struct + "i_"
		elif i == "GLushort":#unsigned short
			struct = struct + "i_"		
		elif i == "GLuint":#unsigned int
			struct = struct + "i_"		
		elif i == "GLfloat":#khronos_float_t
			struct = struct + "i_"
		elif i == "GLclampf":#khronos_float_t
			struct = struct + "i_"		
		elif i == "GLfixed": #khronos_int32_t
			struct = struct + "i_"
		elif i == "GLintptr": #khronos_intptr_t ???
			struct = struct + "i_"
		elif i == "GLsizeiptr": # khronos_ssize_t ???
			struct = struct + "i_"
		elif i == "GLhalf":   #unsigned short
			struct = struct + "i_"
		elif i == "GLint64":  #khronos_int64_t
			struct = struct + "l_"
		elif i == "GLuint64": #khronos_uint64_
			struct = struct + "l_"		
		elif i == "GLsync": #struct __GLsync *
			struct = struct + "s_"
		elif i == "GLeglImageOES": #void*
			struct = struct + "g_"
		elif i == "void*": #void*
			struct = struct + "v_"
		elif i == "EGLBoolean":#typedef unsigned int
			struct = struct + "i_"
		elif i == "EGLenum":#typedef unsigned int
			struct = struct + "i_"
		elif i == "EGLConfig":#typedef void *
			struct = struct + "g_"
		elif i == "EGLContext":#typedef void *
			struct = struct + "g_"
		elif i == "EGLDisplay":#typedef void *
			struct = struct + "g_"
		elif i == "EGLSurface":#typedef void *
			struct = struct + "g_"
		elif i == "EGLClientBuffer":#typedef void *
			struct = struct + "g_"
		elif i == "EGLNativeFileDescriptorKHR":#typedef int
			struct = struct + "i_"
		elif i == "EGLsizeiANDROID":#typedef khronos_ssize_t
			struct = struct + "i_"
		elif i == "EGLImageKHR":#typedef void *
			struct = struct + "g_"		
		elif i == "EGLSyncKHR":#typedef void *
			struct = struct + "g_"
		elif i == "EGLTimeKHR":#typedef khronos_utime_nanoseconds_t
			struct = struct + "l_"
		elif i == "EGLSyncNV":#typedef void *
			struct = struct + "g_"
		elif i == "EGLTimeNV":#typedef khronos_utime_nanoseconds_t
			struct = struct + "l_"
		elif i == "EGLuint64NV":#typedef khronos_utime_nanoseconds_t
			struct = struct + "l_"
		elif i == "EGLStreamKHR":#typedef void *
			struct = struct + "g_"
		elif i == "EGLuint64KHR":#typedef khronos_utime_nanoseconds_t
			struct = struct + "l_"
		elif i == "EGLNativeWindowType":#typedef void *
			struct = struct + "g_"
		elif i == "EGLNativeDisplayType":#typedef void *
			struct = struct + "g_"
		elif i == "EGLNativePixmapType":#typedef struct egl_native_pixmap_t* *
			struct = struct + "g_"	
		elif i == "EGLnsecsANDROID":#typedef khronos_utime_nanoseconds_t
			struct = struct + "l_"
		elif i == "EGLClientPixmapHI":
			struct = struct + "g_"
		elif i == "EGLSetBlobFuncANDROID":
			struct = struct + "g_"
		elif i == "EGLGetBlobFuncANDROID":
			struct = struct + "g_"
		elif i == "EGLint":
			struct = struct + "i_"

#typedef khronos_int64_t        khronos_stime_nanoseconds_t;
		else :
			if "*" in i:
				struct = struct + "b_"
			else :
				struct = struct + "@_" + i + "_"
				 
#/*
# * Types that differ between LLP64 and LP64 architectures - in LLP64, 
# * pointers are 64 bits, but 'long' is still 32 bits. Win64 appears
# * to be the only LLP64 architecture in current use.
# */
#ifdef _WIN64
#typedef signed   long long int khronos_intptr_t;
#typedef unsigned long long int khronos_uintptr_t;
#typedef signed   long long int khronos_ssize_t;
#typedef unsigned long long int khronos_usize_t;
#else
#typedef signed   long  int     khronos_intptr_t;
#typedef unsigned long  int     khronos_uintptr_t;
#typedef signed   long  int     khronos_ssize_t;
#typedef unsigned long  int     khronos_usize_t;
#endif
	line2 = str(words) + ":"+struct +":" + line1+"\n"
	f2.write(line2)
	line1 = f1.readline()
	length = len(line1)
	words = 0
	letter = 0
	struct = ""
f1.close()
f2.close()


