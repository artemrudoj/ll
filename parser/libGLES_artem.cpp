#include <number.h>


void glActiveTexture(GLenum par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLACTIVETEXTURE;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glActiveTexture");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glActiveTexture, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glActiveTexture rc = %d", rc);
	}
	return ;
}


void glAttachShader(GLuint par1, GLuint par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLATTACHSHADER;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glAttachShader");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glAttachShader, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glAttachShader rc = %d", rc);
	}
	return ;
}


void glBindAttribLocation(GLuint par1, GLuint par2, const GLchar *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBINDATTRIBLOCATION;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBindAttribLocation");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glBindAttribLocation, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBindAttribLocation rc = %d", rc);
	}
	return ;
}


void glBindBuffer(GLenum par1, GLuint par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBINDBUFFER;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBindBuffer");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glBindBuffer, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBindBuffer rc = %d", rc);
	}
	return ;
}


void glBindFramebuffer(GLenum par1, GLuint par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBINDFRAMEBUFFER;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBindFramebuffer");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glBindFramebuffer, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBindFramebuffer rc = %d", rc);
	}
	return ;
}


void glBindRenderbuffer(GLenum par1, GLuint par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBINDRENDERBUFFER;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBindRenderbuffer");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glBindRenderbuffer, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBindRenderbuffer rc = %d", rc);
	}
	return ;
}


void glBindTexture(GLenum par1, GLuint par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBINDTEXTURE;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBindTexture");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glBindTexture, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBindTexture rc = %d", rc);
	}
	return ;
}


void glBlendColor(GLfloat par1, GLfloat par2, GLfloat par3, GLfloat par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBLENDCOLOR;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBlendColor");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glBlendColor, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBlendColor rc = %d", rc);
	}
	return ;
}


void glBlendEquation(GLenum par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBLENDEQUATION;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBlendEquation");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glBlendEquation, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBlendEquation rc = %d", rc);
	}
	return ;
}


void glBlendEquationSeparate(GLenum par1, GLenum par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBLENDEQUATIONSEPARATE;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBlendEquationSeparate");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glBlendEquationSeparate, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBlendEquationSeparate rc = %d", rc);
	}
	return ;
}


void glBlendFunc(GLenum par1, GLenum par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBLENDFUNC;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBlendFunc");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glBlendFunc, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBlendFunc rc = %d", rc);
	}
	return ;
}


void glBlendFuncSeparate(GLenum par1, GLenum par2, GLenum par3, GLenum par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBLENDFUNCSEPARATE;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBlendFuncSeparate");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glBlendFuncSeparate, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBlendFuncSeparate rc = %d", rc);
	}
	return ;
}


void glBufferData(GLenum par1, GLsizeiptr par2, const GLvoid *par3, GLenum par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBUFFERDATA;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBufferData");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glBufferData, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBufferData rc = %d", rc);
	}
	return ;
}


void glBufferSubData(GLenum par1, GLintptr par2, GLsizeiptr par3, const GLvoid *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBUFFERSUBDATA;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBufferSubData");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glBufferSubData, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBufferSubData rc = %d", rc);
	}
	return ;
}


GLenum glCheckFramebufferStatus(GLenum par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCHECKFRAMEBUFFERSTATUS;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glCheckFramebufferStatus");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glCheckFramebufferStatus, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glCheckFramebufferStatus rc = %d", rc);
	}
	return ( GLenum)data.par2.u.value32;
}


void glClear(GLbitfield par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCLEAR;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glClear");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glClear, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glClear rc = %d", rc);
	}
	return ;
}


void glClearColor(GLfloat par1, GLfloat par2, GLfloat par3, GLfloat par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCLEARCOLOR;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glClearColor");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glClearColor, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glClearColor rc = %d", rc);
	}
	return ;
}


void glClearDepthf(GLfloat par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCLEARDEPTHF;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glClearDepthf");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glClearDepthf, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glClearDepthf rc = %d", rc);
	}
	return ;
}


void glClearStencil(GLint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCLEARSTENCIL;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glClearStencil");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glClearStencil, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glClearStencil rc = %d", rc);
	}
	return ;
}


void glColorMask(GLboolean par1, GLboolean par2, GLboolean par3, GLboolean par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCOLORMASK;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glColorMask");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glColorMask, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glColorMask rc = %d", rc);
	}
	return ;
}


void glCompileShader(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCOMPILESHADER;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glCompileShader");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glCompileShader, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glCompileShader rc = %d", rc);
	}
	return ;
}


void glCompressedTexImage2D(GLenum par1, GLint par2, GLenum par3, GLsizei par4, GLsizei par5, GLint par6, GLsizei par7, const GLvoid *par8)
{
	int rc;
	DataStr10p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCOMPRESSEDTEXIMAGE2D;
	data.callInfo.cParms = 10;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_LinAddr;
	data.par8.u.Pointer.size = 0x10000;
	data.par8.u.Pointer.u.linearAddr = (uintptr_t)par8;
	data.par9.type = VMMDevHGCMParmType_LinAddr;
	data.par9.u.Pointer.size = 0x10000;
	data.par9.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glCompressedTexImage2D");
	pid_t pid;
	pid = getpid();
	data.par10.type = VMMDevHGCMParmType_32bit;
	data.par10.u.value32 = pid;
	ALOGI("glCompressedTexImage2D, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glCompressedTexImage2D rc = %d", rc);
	}
	return ;
}


void glCompressedTexSubImage2D(GLenum par1, GLint par2, GLint par3, GLint par4, GLsizei par5, GLsizei par6, GLenum par7, GLsizei par8, const GLvoid *par9)
{
	int rc;
	DataStr11p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCOMPRESSEDTEXSUBIMAGE2D;
	data.callInfo.cParms = 11;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = par8;
	data.par9.type = VMMDevHGCMParmType_LinAddr;
	data.par9.u.Pointer.size = 0x10000;
	data.par9.u.Pointer.u.linearAddr = (uintptr_t)par9;
	data.par10.type = VMMDevHGCMParmType_LinAddr;
	data.par10.u.Pointer.size = 0x10000;
	data.par10.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glCompressedTexSubImage2D");
	pid_t pid;
	pid = getpid();
	data.par11.type = VMMDevHGCMParmType_32bit;
	data.par11.u.value32 = pid;
	ALOGI("glCompressedTexSubImage2D, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glCompressedTexSubImage2D rc = %d", rc);
	}
	return ;
}


void glCopyTexImage2D(GLenum par1, GLint par2, GLenum par3, GLint par4, GLint par5, GLsizei par6, GLsizei par7, GLint par8)
{
	int rc;
	DataStr10p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCOPYTEXIMAGE2D;
	data.callInfo.cParms = 10;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = par8;
	data.par9.type = VMMDevHGCMParmType_LinAddr;
	data.par9.u.Pointer.size = 0x10000;
	data.par9.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glCopyTexImage2D");
	pid_t pid;
	pid = getpid();
	data.par10.type = VMMDevHGCMParmType_32bit;
	data.par10.u.value32 = pid;
	ALOGI("glCopyTexImage2D, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glCopyTexImage2D rc = %d", rc);
	}
	return ;
}


void glCopyTexSubImage2D(GLenum par1, GLint par2, GLint par3, GLint par4, GLint par5, GLint par6, GLsizei par7, GLsizei par8)
{
	int rc;
	DataStr10p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCOPYTEXSUBIMAGE2D;
	data.callInfo.cParms = 10;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = par8;
	data.par9.type = VMMDevHGCMParmType_LinAddr;
	data.par9.u.Pointer.size = 0x10000;
	data.par9.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glCopyTexSubImage2D");
	pid_t pid;
	pid = getpid();
	data.par10.type = VMMDevHGCMParmType_32bit;
	data.par10.u.value32 = pid;
	ALOGI("glCopyTexSubImage2D, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glCopyTexSubImage2D rc = %d", rc);
	}
	return ;
}


GLuint glCreateProgram(void)
{
	int rc;
	DataStr2p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCREATEPROGRAM;
	data.callInfo.cParms = 2;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = -555;
	ALOGI("@artem glCreateProgram");
	pid_t pid;
	pid = getpid();
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = pid;
	ALOGI("glCreateProgram, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glCreateProgram rc = %d", rc);
	}
	return ( GLuint)data.par1.u.value32;
}


GLuint glCreateShader(GLenum par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCREATESHADER;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glCreateShader");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glCreateShader, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glCreateShader rc = %d", rc);
	}
	return ( GLuint)data.par2.u.value32;
}


void glCullFace(GLenum par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCULLFACE;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glCullFace");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glCullFace, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glCullFace rc = %d", rc);
	}
	return ;
}


void glDeleteBuffers(GLsizei par1, const GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDELETEBUFFERS;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDeleteBuffers");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glDeleteBuffers, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDeleteBuffers rc = %d", rc);
	}
	return ;
}


void glDeleteFramebuffers(GLsizei par1, const GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDELETEFRAMEBUFFERS;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDeleteFramebuffers");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glDeleteFramebuffers, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDeleteFramebuffers rc = %d", rc);
	}
	return ;
}


void glDeleteProgram(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDELETEPROGRAM;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDeleteProgram");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glDeleteProgram, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDeleteProgram rc = %d", rc);
	}
	return ;
}


void glDeleteRenderbuffers(GLsizei par1, const GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDELETERENDERBUFFERS;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDeleteRenderbuffers");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glDeleteRenderbuffers, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDeleteRenderbuffers rc = %d", rc);
	}
	return ;
}


void glDeleteShader(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDELETESHADER;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDeleteShader");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glDeleteShader, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDeleteShader rc = %d", rc);
	}
	return ;
}


void glDeleteTextures(GLsizei par1, const GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDELETETEXTURES;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDeleteTextures");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glDeleteTextures, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDeleteTextures rc = %d", rc);
	}
	return ;
}


void glDepthFunc(GLenum par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDEPTHFUNC;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDepthFunc");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glDepthFunc, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDepthFunc rc = %d", rc);
	}
	return ;
}


void glDepthMask(GLboolean par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDEPTHMASK;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDepthMask");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glDepthMask, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDepthMask rc = %d", rc);
	}
	return ;
}


void glDepthRangef(GLfloat par1, GLfloat par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDEPTHRANGEF;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDepthRangef");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glDepthRangef, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDepthRangef rc = %d", rc);
	}
	return ;
}


void glDetachShader(GLuint par1, GLuint par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDETACHSHADER;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDetachShader");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glDetachShader, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDetachShader rc = %d", rc);
	}
	return ;
}


void glDisable(GLenum par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDISABLE;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDisable");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glDisable, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDisable rc = %d", rc);
	}
	return ;
}


void glDisableVertexAttribArray(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDISABLEVERTEXATTRIBARRAY;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDisableVertexAttribArray");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glDisableVertexAttribArray, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDisableVertexAttribArray rc = %d", rc);
	}
	return ;
}


void glDrawArrays(GLenum par1, GLint par2, GLsizei par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDRAWARRAYS;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDrawArrays");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glDrawArrays, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDrawArrays rc = %d", rc);
	}
	return ;
}


void glDrawElements(GLenum par1, GLsizei par2, GLenum par3, const GLvoid *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDRAWELEMENTS;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDrawElements");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glDrawElements, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDrawElements rc = %d", rc);
	}
	return ;
}


void glEnable(GLenum par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLENABLE;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glEnable");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glEnable, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glEnable rc = %d", rc);
	}
	return ;
}


void glEnableVertexAttribArray(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLENABLEVERTEXATTRIBARRAY;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glEnableVertexAttribArray");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glEnableVertexAttribArray, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glEnableVertexAttribArray rc = %d", rc);
	}
	return ;
}


void glFinish(void)
{
	int rc;
	DataStr2p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLFINISH;
	data.callInfo.cParms = 2;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glFinish");
	pid_t pid;
	pid = getpid();
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = pid;
	ALOGI("glFinish, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glFinish rc = %d", rc);
	}
	return ;
}


void glFlush(void)
{
	int rc;
	DataStr2p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLFLUSH;
	data.callInfo.cParms = 2;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glFlush");
	pid_t pid;
	pid = getpid();
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = pid;
	ALOGI("glFlush, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glFlush rc = %d", rc);
	}
	return ;
}


void glFramebufferRenderbuffer(GLenum par1, GLenum par2, GLenum par3, GLuint par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLFRAMEBUFFERRENDERBUFFER;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glFramebufferRenderbuffer");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glFramebufferRenderbuffer, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glFramebufferRenderbuffer rc = %d", rc);
	}
	return ;
}


void glFramebufferTexture2D(GLenum par1, GLenum par2, GLenum par3, GLuint par4, GLint par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLFRAMEBUFFERTEXTURE2D;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glFramebufferTexture2D");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glFramebufferTexture2D, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glFramebufferTexture2D rc = %d", rc);
	}
	return ;
}


void glFrontFace(GLenum par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLFRONTFACE;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glFrontFace");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glFrontFace, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glFrontFace rc = %d", rc);
	}
	return ;
}


void glGenBuffers(GLsizei par1, GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGENBUFFERS;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGenBuffers");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGenBuffers, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGenBuffers rc = %d", rc);
	}
	return ;
}


void glGenerateMipmap(GLenum par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGENERATEMIPMAP;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGenerateMipmap");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glGenerateMipmap, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGenerateMipmap rc = %d", rc);
	}
	return ;
}


void glGenFramebuffers(GLsizei par1, GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGENFRAMEBUFFERS;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGenFramebuffers");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGenFramebuffers, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGenFramebuffers rc = %d", rc);
	}
	return ;
}


void glGenRenderbuffers(GLsizei par1, GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGENRENDERBUFFERS;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGenRenderbuffers");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGenRenderbuffers, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGenRenderbuffers rc = %d", rc);
	}
	return ;
}


void glGenTextures(GLsizei par1, GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGENTEXTURES;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGenTextures");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGenTextures, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGenTextures rc = %d", rc);
	}
	return ;
}


void glGetActiveAttrib(GLuint par1, GLuint par2, GLsizei par3, GLsizei *par4, GLint *par5, GLenum *par6, GLchar *par7)
{
	int rc;
	DataStr9p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETACTIVEATTRIB;
	data.callInfo.cParms = 9;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t)par6;
	data.par7.type = VMMDevHGCMParmType_LinAddr;
	data.par7.u.Pointer.size = 0x10000;
	data.par7.u.Pointer.u.linearAddr = (uintptr_t)par7;
	data.par8.type = VMMDevHGCMParmType_LinAddr;
	data.par8.u.Pointer.size = 0x10000;
	data.par8.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetActiveAttrib");
	pid_t pid;
	pid = getpid();
	data.par9.type = VMMDevHGCMParmType_32bit;
	data.par9.u.value32 = pid;
	ALOGI("glGetActiveAttrib, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetActiveAttrib rc = %d", rc);
	}
	return ;
}


void glGetActiveUniform(GLuint par1, GLuint par2, GLsizei par3, GLsizei *par4, GLint *par5, GLenum *par6, GLchar *par7)
{
	int rc;
	DataStr9p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETACTIVEUNIFORM;
	data.callInfo.cParms = 9;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t)par6;
	data.par7.type = VMMDevHGCMParmType_LinAddr;
	data.par7.u.Pointer.size = 0x10000;
	data.par7.u.Pointer.u.linearAddr = (uintptr_t)par7;
	data.par8.type = VMMDevHGCMParmType_LinAddr;
	data.par8.u.Pointer.size = 0x10000;
	data.par8.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetActiveUniform");
	pid_t pid;
	pid = getpid();
	data.par9.type = VMMDevHGCMParmType_32bit;
	data.par9.u.value32 = pid;
	ALOGI("glGetActiveUniform, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetActiveUniform rc = %d", rc);
	}
	return ;
}


void glGetAttachedShaders(GLuint par1, GLsizei par2, GLsizei *par3, GLuint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETATTACHEDSHADERS;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetAttachedShaders");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glGetAttachedShaders, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetAttachedShaders rc = %d", rc);
	}
	return ;
}


GLint glGetAttribLocation(GLuint par1, const GLchar *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETATTRIBLOCATION;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = -555;
	ALOGI("@artem glGetAttribLocation");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGetAttribLocation, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetAttribLocation rc = %d", rc);
	}
	return ( GLint)data.par3.u.value32;
}


void glGetBooleanv(GLenum par1, GLboolean *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETBOOLEANV;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetBooleanv");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGetBooleanv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetBooleanv rc = %d", rc);
	}
	return ;
}


void glGetBufferParameteriv(GLenum par1, GLenum par2, GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETBUFFERPARAMETERIV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetBufferParameteriv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetBufferParameteriv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetBufferParameteriv rc = %d", rc);
	}
	return ;
}


GLenum glGetError(void)
{
	int rc;
	DataStr2p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETERROR;
	data.callInfo.cParms = 2;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = -555;
	ALOGI("@artem glGetError");
	pid_t pid;
	pid = getpid();
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = pid;
	ALOGI("glGetError, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetError rc = %d", rc);
	}
	return ( GLenum)data.par1.u.value32;
}


void glGetFloatv(GLenum par1, GLfloat *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETFLOATV;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetFloatv");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGetFloatv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetFloatv rc = %d", rc);
	}
	return ;
}


void glGetFramebufferAttachmentParameteriv(GLenum par1, GLenum par2, GLenum par3, GLint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETFRAMEBUFFERATTACHMENTPARAMETERIV;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetFramebufferAttachmentParameteriv");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glGetFramebufferAttachmentParameteriv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetFramebufferAttachmentParameteriv rc = %d", rc);
	}
	return ;
}


void glGetIntegerv(GLenum par1, GLint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETINTEGERV;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetIntegerv");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGetIntegerv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetIntegerv rc = %d", rc);
	}
	return ;
}


void glGetProgramiv(GLuint par1, GLenum par2, GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETPROGRAMIV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetProgramiv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetProgramiv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetProgramiv rc = %d", rc);
	}
	return ;
}


void glGetProgramInfoLog(GLuint par1, GLsizei par2, GLsizei *par3, GLchar *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETPROGRAMINFOLOG;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetProgramInfoLog");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glGetProgramInfoLog, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetProgramInfoLog rc = %d", rc);
	}
	return ;
}


void glGetRenderbufferParameteriv(GLenum par1, GLenum par2, GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETRENDERBUFFERPARAMETERIV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetRenderbufferParameteriv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetRenderbufferParameteriv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetRenderbufferParameteriv rc = %d", rc);
	}
	return ;
}


void glGetShaderiv(GLuint par1, GLenum par2, GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETSHADERIV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetShaderiv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetShaderiv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetShaderiv rc = %d", rc);
	}
	return ;
}


void glGetShaderInfoLog(GLuint par1, GLsizei par2, GLsizei *par3, GLchar *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETSHADERINFOLOG;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetShaderInfoLog");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glGetShaderInfoLog, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetShaderInfoLog rc = %d", rc);
	}
	return ;
}


void glGetShaderPrecisionFormat(GLenum par1, GLenum par2, GLint *par3, GLint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETSHADERPRECISIONFORMAT;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetShaderPrecisionFormat");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glGetShaderPrecisionFormat, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetShaderPrecisionFormat rc = %d", rc);
	}
	return ;
}


void glGetShaderSource(GLuint par1, GLsizei par2, GLsizei *par3, GLchar *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETSHADERSOURCE;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetShaderSource");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glGetShaderSource, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetShaderSource rc = %d", rc);
	}
	return ;
}


const GLubyte* glGetString(GLenum par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETSTRING;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetString");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glGetString, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetString rc = %d", rc);
	}
	return ( GLubyte*)data.par2.u.Pointer.u.linearAddr;
}


void glGetTexParameterfv(GLenum par1, GLenum par2, GLfloat *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETTEXPARAMETERFV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetTexParameterfv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetTexParameterfv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetTexParameterfv rc = %d", rc);
	}
	return ;
}


void glGetTexParameteriv(GLenum par1, GLenum par2, GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETTEXPARAMETERIV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetTexParameteriv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetTexParameteriv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetTexParameteriv rc = %d", rc);
	}
	return ;
}


void glGetUniformfv(GLuint par1, GLint par2, GLfloat *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETUNIFORMFV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetUniformfv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetUniformfv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetUniformfv rc = %d", rc);
	}
	return ;
}


void glGetUniformiv(GLuint par1, GLint par2, GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETUNIFORMIV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetUniformiv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetUniformiv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetUniformiv rc = %d", rc);
	}
	return ;
}


GLint glGetUniformLocation(GLuint par1, const GLchar *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETUNIFORMLOCATION;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = -555;
	ALOGI("@artem glGetUniformLocation");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGetUniformLocation, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetUniformLocation rc = %d", rc);
	}
	return ( GLint)data.par3.u.value32;
}


void glGetVertexAttribfv(GLuint par1, GLenum par2, GLfloat *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETVERTEXATTRIBFV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetVertexAttribfv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetVertexAttribfv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetVertexAttribfv rc = %d", rc);
	}
	return ;
}


void glGetVertexAttribiv(GLuint par1, GLenum par2, GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETVERTEXATTRIBIV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetVertexAttribiv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetVertexAttribiv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetVertexAttribiv rc = %d", rc);
	}
	return ;
}


void glGetVertexAttribPointerv(GLuint par1, GLenum par2, GLvoid **par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETVERTEXATTRIBPOINTERV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetVertexAttribPointerv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetVertexAttribPointerv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetVertexAttribPointerv rc = %d", rc);
	}
	return ;
}


void glHint(GLenum par1, GLenum par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLHINT;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glHint");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glHint, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glHint rc = %d", rc);
	}
	return ;
}


GLboolean glIsBuffer(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLISBUFFER;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glIsBuffer");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glIsBuffer, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glIsBuffer rc = %d", rc);
	}
	return ( GLboolean)data.par2.u.value32;
}


GLboolean glIsEnabled(GLenum par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLISENABLED;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glIsEnabled");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glIsEnabled, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glIsEnabled rc = %d", rc);
	}
	return ( GLboolean)data.par2.u.value32;
}


GLboolean glIsFramebuffer(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLISFRAMEBUFFER;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glIsFramebuffer");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glIsFramebuffer, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glIsFramebuffer rc = %d", rc);
	}
	return ( GLboolean)data.par2.u.value32;
}


GLboolean glIsProgram(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLISPROGRAM;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glIsProgram");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glIsProgram, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glIsProgram rc = %d", rc);
	}
	return ( GLboolean)data.par2.u.value32;
}


GLboolean glIsRenderbuffer(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLISRENDERBUFFER;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glIsRenderbuffer");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glIsRenderbuffer, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glIsRenderbuffer rc = %d", rc);
	}
	return ( GLboolean)data.par2.u.value32;
}


GLboolean glIsShader(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLISSHADER;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glIsShader");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glIsShader, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glIsShader rc = %d", rc);
	}
	return ( GLboolean)data.par2.u.value32;
}


GLboolean glIsTexture(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLISTEXTURE;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glIsTexture");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glIsTexture, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glIsTexture rc = %d", rc);
	}
	return ( GLboolean)data.par2.u.value32;
}


void glLineWidth(GLfloat par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLLINEWIDTH;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glLineWidth");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glLineWidth, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glLineWidth rc = %d", rc);
	}
	return ;
}


void glLinkProgram(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLLINKPROGRAM;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glLinkProgram");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glLinkProgram, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glLinkProgram rc = %d", rc);
	}
	return ;
}


void glPixelStorei(GLenum par1, GLint par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPIXELSTOREI;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glPixelStorei");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glPixelStorei, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glPixelStorei rc = %d", rc);
	}
	return ;
}


void glPolygonOffset(GLfloat par1, GLfloat par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPOLYGONOFFSET;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glPolygonOffset");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glPolygonOffset, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glPolygonOffset rc = %d", rc);
	}
	return ;
}


void glReadPixels(GLint par1, GLint par2, GLsizei par3, GLsizei par4, GLenum par5, GLenum par6, GLvoid *par7)
{
	int rc;
	DataStr9p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLREADPIXELS;
	data.callInfo.cParms = 9;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_LinAddr;
	data.par7.u.Pointer.size = 0x10000;
	data.par7.u.Pointer.u.linearAddr = (uintptr_t)par7;
	data.par8.type = VMMDevHGCMParmType_LinAddr;
	data.par8.u.Pointer.size = 0x10000;
	data.par8.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glReadPixels");
	pid_t pid;
	pid = getpid();
	data.par9.type = VMMDevHGCMParmType_32bit;
	data.par9.u.value32 = pid;
	ALOGI("glReadPixels, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glReadPixels rc = %d", rc);
	}
	return ;
}


void glReleaseShaderCompiler(void)
{
	int rc;
	DataStr2p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLRELEASESHADERCOMPILER;
	data.callInfo.cParms = 2;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glReleaseShaderCompiler");
	pid_t pid;
	pid = getpid();
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = pid;
	ALOGI("glReleaseShaderCompiler, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glReleaseShaderCompiler rc = %d", rc);
	}
	return ;
}


void glRenderbufferStorage(GLenum par1, GLenum par2, GLsizei par3, GLsizei par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLRENDERBUFFERSTORAGE;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glRenderbufferStorage");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glRenderbufferStorage, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glRenderbufferStorage rc = %d", rc);
	}
	return ;
}


void glSampleCoverage(GLfloat par1, GLboolean par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLSAMPLECOVERAGE;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glSampleCoverage");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glSampleCoverage, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glSampleCoverage rc = %d", rc);
	}
	return ;
}


void glScissor(GLint par1, GLint par2, GLsizei par3, GLsizei par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLSCISSOR;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glScissor");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glScissor, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glScissor rc = %d", rc);
	}
	return ;
}


void glShaderBinary(GLsizei par1, const GLuint *par2, GLenum par3, const GLvoid *par4, GLsizei par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLSHADERBINARY;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glShaderBinary");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glShaderBinary, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glShaderBinary rc = %d", rc);
	}
	return ;
}


void glShaderSource(GLuint par1, GLsizei par2, const GLchar* const* par3, const GLint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLSHADERSOURCE;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)*par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glShaderSource");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glShaderSource, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glShaderSource rc = %d", rc);
	}
	return ;
}


void glStencilFunc(GLenum par1, GLint par2, GLuint par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLSTENCILFUNC;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glStencilFunc");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glStencilFunc, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glStencilFunc rc = %d", rc);
	}
	return ;
}


void glStencilFuncSeparate(GLenum par1, GLenum par2, GLint par3, GLuint par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLSTENCILFUNCSEPARATE;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glStencilFuncSeparate");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glStencilFuncSeparate, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glStencilFuncSeparate rc = %d", rc);
	}
	return ;
}


void glStencilMask(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLSTENCILMASK;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glStencilMask");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glStencilMask, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glStencilMask rc = %d", rc);
	}
	return ;
}


void glStencilMaskSeparate(GLenum par1, GLuint par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLSTENCILMASKSEPARATE;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glStencilMaskSeparate");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glStencilMaskSeparate, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glStencilMaskSeparate rc = %d", rc);
	}
	return ;
}


void glStencilOp(GLenum par1, GLenum par2, GLenum par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLSTENCILOP;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glStencilOp");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glStencilOp, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glStencilOp rc = %d", rc);
	}
	return ;
}


void glStencilOpSeparate(GLenum par1, GLenum par2, GLenum par3, GLenum par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLSTENCILOPSEPARATE;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glStencilOpSeparate");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glStencilOpSeparate, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glStencilOpSeparate rc = %d", rc);
	}
	return ;
}


void glTexImage2D(GLenum par1, GLint par2, GLint par3, GLsizei par4, GLsizei par5, GLint par6, GLenum par7, GLenum par8, const GLvoid *par9)
{
	int rc;
	DataStr11p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLTEXIMAGE2D;
	data.callInfo.cParms = 11;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = par8;
	data.par9.type = VMMDevHGCMParmType_LinAddr;
	data.par9.u.Pointer.size = 0x10000;
	data.par9.u.Pointer.u.linearAddr = (uintptr_t)par9;
	data.par10.type = VMMDevHGCMParmType_LinAddr;
	data.par10.u.Pointer.size = 0x10000;
	data.par10.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glTexImage2D");
	pid_t pid;
	pid = getpid();
	data.par11.type = VMMDevHGCMParmType_32bit;
	data.par11.u.value32 = pid;
	ALOGI("glTexImage2D, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glTexImage2D rc = %d", rc);
	}
	return ;
}


void glTexParameterf(GLenum par1, GLenum par2, GLfloat par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLTEXPARAMETERF;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glTexParameterf");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glTexParameterf, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glTexParameterf rc = %d", rc);
	}
	return ;
}


void glTexParameterfv(GLenum par1, GLenum par2, const GLfloat *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLTEXPARAMETERFV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glTexParameterfv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glTexParameterfv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glTexParameterfv rc = %d", rc);
	}
	return ;
}


void glTexParameteri(GLenum par1, GLenum par2, GLint par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLTEXPARAMETERI;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glTexParameteri");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glTexParameteri, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glTexParameteri rc = %d", rc);
	}
	return ;
}


void glTexParameteriv(GLenum par1, GLenum par2, const GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLTEXPARAMETERIV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glTexParameteriv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glTexParameteriv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glTexParameteriv rc = %d", rc);
	}
	return ;
}


void glTexSubImage2D(GLenum par1, GLint par2, GLint par3, GLint par4, GLsizei par5, GLsizei par6, GLenum par7, GLenum par8, const GLvoid *par9)
{
	int rc;
	DataStr11p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLTEXSUBIMAGE2D;
	data.callInfo.cParms = 11;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = par8;
	data.par9.type = VMMDevHGCMParmType_LinAddr;
	data.par9.u.Pointer.size = 0x10000;
	data.par9.u.Pointer.u.linearAddr = (uintptr_t)par9;
	data.par10.type = VMMDevHGCMParmType_LinAddr;
	data.par10.u.Pointer.size = 0x10000;
	data.par10.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glTexSubImage2D");
	pid_t pid;
	pid = getpid();
	data.par11.type = VMMDevHGCMParmType_32bit;
	data.par11.u.value32 = pid;
	ALOGI("glTexSubImage2D, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glTexSubImage2D rc = %d", rc);
	}
	return ;
}


void glUniform1f(GLint par1, GLfloat par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM1F;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform1f");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glUniform1f, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform1f rc = %d", rc);
	}
	return ;
}


void glUniform1fv(GLint par1, GLsizei par2, const GLfloat *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM1FV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform1fv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glUniform1fv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform1fv rc = %d", rc);
	}
	return ;
}


void glUniform1i(GLint par1, GLint par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM1I;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform1i");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glUniform1i, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform1i rc = %d", rc);
	}
	return ;
}


void glUniform1iv(GLint par1, GLsizei par2, const GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM1IV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform1iv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glUniform1iv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform1iv rc = %d", rc);
	}
	return ;
}


void glUniform2f(GLint par1, GLfloat par2, GLfloat par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM2F;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform2f");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glUniform2f, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform2f rc = %d", rc);
	}
	return ;
}


void glUniform2fv(GLint par1, GLsizei par2, const GLfloat *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM2FV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform2fv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glUniform2fv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform2fv rc = %d", rc);
	}
	return ;
}


void glUniform2i(GLint par1, GLint par2, GLint par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM2I;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform2i");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glUniform2i, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform2i rc = %d", rc);
	}
	return ;
}


void glUniform2iv(GLint par1, GLsizei par2, const GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM2IV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform2iv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glUniform2iv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform2iv rc = %d", rc);
	}
	return ;
}


void glUniform3f(GLint par1, GLfloat par2, GLfloat par3, GLfloat par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM3F;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform3f");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glUniform3f, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform3f rc = %d", rc);
	}
	return ;
}


void glUniform3fv(GLint par1, GLsizei par2, const GLfloat *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM3FV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform3fv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glUniform3fv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform3fv rc = %d", rc);
	}
	return ;
}


void glUniform3i(GLint par1, GLint par2, GLint par3, GLint par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM3I;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform3i");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glUniform3i, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform3i rc = %d", rc);
	}
	return ;
}


void glUniform3iv(GLint par1, GLsizei par2, const GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM3IV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform3iv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glUniform3iv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform3iv rc = %d", rc);
	}
	return ;
}


void glUniform4f(GLint par1, GLfloat par2, GLfloat par3, GLfloat par4, GLfloat par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM4F;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform4f");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glUniform4f, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform4f rc = %d", rc);
	}
	return ;
}


void glUniform4fv(GLint par1, GLsizei par2, const GLfloat *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM4FV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform4fv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glUniform4fv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform4fv rc = %d", rc);
	}
	return ;
}


void glUniform4i(GLint par1, GLint par2, GLint par3, GLint par4, GLint par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM4I;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform4i");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glUniform4i, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform4i rc = %d", rc);
	}
	return ;
}


void glUniform4iv(GLint par1, GLsizei par2, const GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM4IV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform4iv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glUniform4iv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform4iv rc = %d", rc);
	}
	return ;
}


void glUniformMatrix2fv(GLint par1, GLsizei par2, GLboolean par3, const GLfloat *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORMMATRIX2FV;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniformMatrix2fv");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glUniformMatrix2fv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniformMatrix2fv rc = %d", rc);
	}
	return ;
}


void glUniformMatrix3fv(GLint par1, GLsizei par2, GLboolean par3, const GLfloat *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORMMATRIX3FV;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniformMatrix3fv");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glUniformMatrix3fv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniformMatrix3fv rc = %d", rc);
	}
	return ;
}


void glUniformMatrix4fv(GLint par1, GLsizei par2, GLboolean par3, const GLfloat *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORMMATRIX4FV;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniformMatrix4fv");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glUniformMatrix4fv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniformMatrix4fv rc = %d", rc);
	}
	return ;
}


void glUseProgram(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUSEPROGRAM;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUseProgram");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glUseProgram, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUseProgram rc = %d", rc);
	}
	return ;
}


void glValidateProgram(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLVALIDATEPROGRAM;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glValidateProgram");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glValidateProgram, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glValidateProgram rc = %d", rc);
	}
	return ;
}


void glVertexAttrib1f(GLuint par1, GLfloat par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLVERTEXATTRIB1F;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glVertexAttrib1f");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glVertexAttrib1f, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glVertexAttrib1f rc = %d", rc);
	}
	return ;
}


void glVertexAttrib1fv(GLuint par1, const GLfloat *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLVERTEXATTRIB1FV;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glVertexAttrib1fv");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glVertexAttrib1fv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glVertexAttrib1fv rc = %d", rc);
	}
	return ;
}


void glVertexAttrib2f(GLuint par1, GLfloat par2, GLfloat par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLVERTEXATTRIB2F;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glVertexAttrib2f");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glVertexAttrib2f, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glVertexAttrib2f rc = %d", rc);
	}
	return ;
}


void glVertexAttrib2fv(GLuint par1, const GLfloat *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLVERTEXATTRIB2FV;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glVertexAttrib2fv");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glVertexAttrib2fv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glVertexAttrib2fv rc = %d", rc);
	}
	return ;
}


void glVertexAttrib3f(GLuint par1, GLfloat par2, GLfloat par3, GLfloat par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLVERTEXATTRIB3F;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glVertexAttrib3f");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glVertexAttrib3f, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glVertexAttrib3f rc = %d", rc);
	}
	return ;
}


void glVertexAttrib3fv(GLuint par1, const GLfloat *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLVERTEXATTRIB3FV;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glVertexAttrib3fv");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glVertexAttrib3fv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glVertexAttrib3fv rc = %d", rc);
	}
	return ;
}


void glVertexAttrib4f(GLuint par1, GLfloat par2, GLfloat par3, GLfloat par4, GLfloat par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLVERTEXATTRIB4F;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glVertexAttrib4f");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glVertexAttrib4f, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glVertexAttrib4f rc = %d", rc);
	}
	return ;
}


void glVertexAttrib4fv(GLuint par1, const GLfloat *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLVERTEXATTRIB4FV;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glVertexAttrib4fv");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glVertexAttrib4fv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glVertexAttrib4fv rc = %d", rc);
	}
	return ;
}


void glVertexAttribPointer(GLuint par1, GLint par2, GLenum par3, GLboolean par4, GLsizei par5, const GLvoid *par6)
{
	int rc;
	DataStr8p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLVERTEXATTRIBPOINTER;
	data.callInfo.cParms = 8;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t)par6;
	data.par7.type = VMMDevHGCMParmType_LinAddr;
	data.par7.u.Pointer.size = 0x10000;
	data.par7.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glVertexAttribPointer");
	pid_t pid;
	pid = getpid();
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = pid;
	ALOGI("glVertexAttribPointer, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glVertexAttribPointer rc = %d", rc);
	}
	return ;
}


void glViewport(GLint par1, GLint par2, GLsizei par3, GLsizei par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLVIEWPORT;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glViewport");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glViewport, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glViewport rc = %d", rc);
	}
	return ;
}


void glReadBuffer(GLenum par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLREADBUFFER;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glReadBuffer");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glReadBuffer, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glReadBuffer rc = %d", rc);
	}
	return ;
}


void glDrawRangeElements(GLenum par1, GLuint par2, GLuint par3, GLsizei par4, GLenum par5, const GLvoid *par6)
{
	int rc;
	DataStr8p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDRAWRANGEELEMENTS;
	data.callInfo.cParms = 8;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t)par6;
	data.par7.type = VMMDevHGCMParmType_LinAddr;
	data.par7.u.Pointer.size = 0x10000;
	data.par7.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDrawRangeElements");
	pid_t pid;
	pid = getpid();
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = pid;
	ALOGI("glDrawRangeElements, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDrawRangeElements rc = %d", rc);
	}
	return ;
}


void glTexImage3D(GLenum par1, GLint par2, GLint par3, GLsizei par4, GLsizei par5, GLsizei par6, GLint par7, GLenum par8, GLenum par9, const GLvoid *par10)
{
	int rc;
	DataStr12p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLTEXIMAGE3D;
	data.callInfo.cParms = 12;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = par8;
	data.par9.type = VMMDevHGCMParmType_32bit;
	data.par9.u.value32 = par9;
	data.par10.type = VMMDevHGCMParmType_LinAddr;
	data.par10.u.Pointer.size = 0x10000;
	data.par10.u.Pointer.u.linearAddr = (uintptr_t)par10;
	data.par11.type = VMMDevHGCMParmType_LinAddr;
	data.par11.u.Pointer.size = 0x10000;
	data.par11.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glTexImage3D");
	pid_t pid;
	pid = getpid();
	data.par12.type = VMMDevHGCMParmType_32bit;
	data.par12.u.value32 = pid;
	ALOGI("glTexImage3D, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glTexImage3D rc = %d", rc);
	}
	return ;
}


void glTexSubImage3D(GLenum par1, GLint par2, GLint par3, GLint par4, GLint par5, GLsizei par6, GLsizei par7, GLsizei par8, GLenum par9, GLenum par10, const GLvoid *par11)
{
	int rc;
	DataStr13p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLTEXSUBIMAGE3D;
	data.callInfo.cParms = 13;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = par8;
	data.par9.type = VMMDevHGCMParmType_32bit;
	data.par9.u.value32 = par9;
	data.par10.type = VMMDevHGCMParmType_32bit;
	data.par10.u.value32 = par10;
	data.par11.type = VMMDevHGCMParmType_LinAddr;
	data.par11.u.Pointer.size = 0x10000;
	data.par11.u.Pointer.u.linearAddr = (uintptr_t)par11;
	data.par12.type = VMMDevHGCMParmType_LinAddr;
	data.par12.u.Pointer.size = 0x10000;
	data.par12.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glTexSubImage3D");
	pid_t pid;
	pid = getpid();
	data.par13.type = VMMDevHGCMParmType_32bit;
	data.par13.u.value32 = pid;
	ALOGI("glTexSubImage3D, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glTexSubImage3D rc = %d", rc);
	}
	return ;
}


void glCopyTexSubImage3D(GLenum par1, GLint par2, GLint par3, GLint par4, GLint par5, GLint par6, GLint par7, GLsizei par8, GLsizei par9)
{
	int rc;
	DataStr11p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCOPYTEXSUBIMAGE3D;
	data.callInfo.cParms = 11;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = par8;
	data.par9.type = VMMDevHGCMParmType_32bit;
	data.par9.u.value32 = par9;
	data.par10.type = VMMDevHGCMParmType_LinAddr;
	data.par10.u.Pointer.size = 0x10000;
	data.par10.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glCopyTexSubImage3D");
	pid_t pid;
	pid = getpid();
	data.par11.type = VMMDevHGCMParmType_32bit;
	data.par11.u.value32 = pid;
	ALOGI("glCopyTexSubImage3D, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glCopyTexSubImage3D rc = %d", rc);
	}
	return ;
}


void glCompressedTexImage3D(GLenum par1, GLint par2, GLenum par3, GLsizei par4, GLsizei par5, GLsizei par6, GLint par7, GLsizei par8, const GLvoid *par9)
{
	int rc;
	DataStr11p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCOMPRESSEDTEXIMAGE3D;
	data.callInfo.cParms = 11;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = par8;
	data.par9.type = VMMDevHGCMParmType_LinAddr;
	data.par9.u.Pointer.size = 0x10000;
	data.par9.u.Pointer.u.linearAddr = (uintptr_t)par9;
	data.par10.type = VMMDevHGCMParmType_LinAddr;
	data.par10.u.Pointer.size = 0x10000;
	data.par10.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glCompressedTexImage3D");
	pid_t pid;
	pid = getpid();
	data.par11.type = VMMDevHGCMParmType_32bit;
	data.par11.u.value32 = pid;
	ALOGI("glCompressedTexImage3D, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glCompressedTexImage3D rc = %d", rc);
	}
	return ;
}


void glCompressedTexSubImage3D(GLenum par1, GLint par2, GLint par3, GLint par4, GLint par5, GLsizei par6, GLsizei par7, GLsizei par8, GLenum par9, GLsizei par10, const GLvoid *par11)
{
	int rc;
	DataStr13p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCOMPRESSEDTEXSUBIMAGE3D;
	data.callInfo.cParms = 13;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = par8;
	data.par9.type = VMMDevHGCMParmType_32bit;
	data.par9.u.value32 = par9;
	data.par10.type = VMMDevHGCMParmType_32bit;
	data.par10.u.value32 = par10;
	data.par11.type = VMMDevHGCMParmType_LinAddr;
	data.par11.u.Pointer.size = 0x10000;
	data.par11.u.Pointer.u.linearAddr = (uintptr_t)par11;
	data.par12.type = VMMDevHGCMParmType_LinAddr;
	data.par12.u.Pointer.size = 0x10000;
	data.par12.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glCompressedTexSubImage3D");
	pid_t pid;
	pid = getpid();
	data.par13.type = VMMDevHGCMParmType_32bit;
	data.par13.u.value32 = pid;
	ALOGI("glCompressedTexSubImage3D, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glCompressedTexSubImage3D rc = %d", rc);
	}
	return ;
}


void glGenQueries(GLsizei par1, GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGENQUERIES;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGenQueries");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGenQueries, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGenQueries rc = %d", rc);
	}
	return ;
}


void glDeleteQueries(GLsizei par1, const GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDELETEQUERIES;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDeleteQueries");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glDeleteQueries, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDeleteQueries rc = %d", rc);
	}
	return ;
}


GLboolean glIsQuery(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLISQUERY;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glIsQuery");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glIsQuery, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glIsQuery rc = %d", rc);
	}
	return ( GLboolean)data.par2.u.value32;
}


void glBeginQuery(GLenum par1, GLuint par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBEGINQUERY;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBeginQuery");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glBeginQuery, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBeginQuery rc = %d", rc);
	}
	return ;
}


void glEndQuery(GLenum par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLENDQUERY;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glEndQuery");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glEndQuery, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glEndQuery rc = %d", rc);
	}
	return ;
}


void glGetQueryiv(GLenum par1, GLenum par2, GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETQUERYIV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetQueryiv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetQueryiv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetQueryiv rc = %d", rc);
	}
	return ;
}


void glGetQueryObjectuiv(GLuint par1, GLenum par2, GLuint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETQUERYOBJECTUIV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetQueryObjectuiv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetQueryObjectuiv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetQueryObjectuiv rc = %d", rc);
	}
	return ;
}


GLboolean glUnmapBuffer(GLenum par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNMAPBUFFER;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glUnmapBuffer");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glUnmapBuffer, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUnmapBuffer rc = %d", rc);
	}
	return ( GLboolean)data.par2.u.value32;
}


void glGetBufferPointerv(GLenum par1, GLenum par2, GLvoid **par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETBUFFERPOINTERV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetBufferPointerv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetBufferPointerv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetBufferPointerv rc = %d", rc);
	}
	return ;
}


void glDrawBuffers(GLsizei par1, const GLenum *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDRAWBUFFERS;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDrawBuffers");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glDrawBuffers, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDrawBuffers rc = %d", rc);
	}
	return ;
}


void glUniformMatrix2x3fv(GLint par1, GLsizei par2, GLboolean par3, const GLfloat *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORMMATRIX2X3FV;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniformMatrix2x3fv");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glUniformMatrix2x3fv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniformMatrix2x3fv rc = %d", rc);
	}
	return ;
}


void glUniformMatrix3x2fv(GLint par1, GLsizei par2, GLboolean par3, const GLfloat *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORMMATRIX3X2FV;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniformMatrix3x2fv");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glUniformMatrix3x2fv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniformMatrix3x2fv rc = %d", rc);
	}
	return ;
}


void glUniformMatrix2x4fv(GLint par1, GLsizei par2, GLboolean par3, const GLfloat *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORMMATRIX2X4FV;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniformMatrix2x4fv");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glUniformMatrix2x4fv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniformMatrix2x4fv rc = %d", rc);
	}
	return ;
}


void glUniformMatrix4x2fv(GLint par1, GLsizei par2, GLboolean par3, const GLfloat *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORMMATRIX4X2FV;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniformMatrix4x2fv");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glUniformMatrix4x2fv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniformMatrix4x2fv rc = %d", rc);
	}
	return ;
}


void glUniformMatrix3x4fv(GLint par1, GLsizei par2, GLboolean par3, const GLfloat *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORMMATRIX3X4FV;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniformMatrix3x4fv");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glUniformMatrix3x4fv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniformMatrix3x4fv rc = %d", rc);
	}
	return ;
}


void glUniformMatrix4x3fv(GLint par1, GLsizei par2, GLboolean par3, const GLfloat *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORMMATRIX4X3FV;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniformMatrix4x3fv");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glUniformMatrix4x3fv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniformMatrix4x3fv rc = %d", rc);
	}
	return ;
}


void glBlitFramebuffer(GLint par1, GLint par2, GLint par3, GLint par4, GLint par5, GLint par6, GLint par7, GLint par8, GLbitfield par9, GLenum par10)
{
	int rc;
	DataStr12p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBLITFRAMEBUFFER;
	data.callInfo.cParms = 12;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = par8;
	data.par9.type = VMMDevHGCMParmType_32bit;
	data.par9.u.value32 = par9;
	data.par10.type = VMMDevHGCMParmType_32bit;
	data.par10.u.value32 = par10;
	data.par11.type = VMMDevHGCMParmType_LinAddr;
	data.par11.u.Pointer.size = 0x10000;
	data.par11.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBlitFramebuffer");
	pid_t pid;
	pid = getpid();
	data.par12.type = VMMDevHGCMParmType_32bit;
	data.par12.u.value32 = pid;
	ALOGI("glBlitFramebuffer, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBlitFramebuffer rc = %d", rc);
	}
	return ;
}


void glRenderbufferStorageMultisample(GLenum par1, GLsizei par2, GLenum par3, GLsizei par4, GLsizei par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLRENDERBUFFERSTORAGEMULTISAMPLE;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glRenderbufferStorageMultisample");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glRenderbufferStorageMultisample, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glRenderbufferStorageMultisample rc = %d", rc);
	}
	return ;
}


void glFramebufferTextureLayer(GLenum par1, GLenum par2, GLuint par3, GLint par4, GLint par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLFRAMEBUFFERTEXTURELAYER;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glFramebufferTextureLayer");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glFramebufferTextureLayer, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glFramebufferTextureLayer rc = %d", rc);
	}
	return ;
}


GLvoid* glMapBufferRange(GLenum par1, GLintptr par2, GLsizeiptr par3, GLbitfield par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLMAPBUFFERRANGE;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glMapBufferRange");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glMapBufferRange, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glMapBufferRange rc = %d", rc);
	}
	return ( GLvoid*)data.par5.u.Pointer.u.linearAddr;
}


void glFlushMappedBufferRange(GLenum par1, GLintptr par2, GLsizeiptr par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLFLUSHMAPPEDBUFFERRANGE;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glFlushMappedBufferRange");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glFlushMappedBufferRange, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glFlushMappedBufferRange rc = %d", rc);
	}
	return ;
}


void glBindVertexArray(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBINDVERTEXARRAY;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBindVertexArray");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glBindVertexArray, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBindVertexArray rc = %d", rc);
	}
	return ;
}


void glDeleteVertexArrays(GLsizei par1, const GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDELETEVERTEXARRAYS;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDeleteVertexArrays");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glDeleteVertexArrays, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDeleteVertexArrays rc = %d", rc);
	}
	return ;
}


void glGenVertexArrays(GLsizei par1, GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGENVERTEXARRAYS;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGenVertexArrays");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGenVertexArrays, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGenVertexArrays rc = %d", rc);
	}
	return ;
}


GLboolean glIsVertexArray(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLISVERTEXARRAY;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glIsVertexArray");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glIsVertexArray, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glIsVertexArray rc = %d", rc);
	}
	return ( GLboolean)data.par2.u.value32;
}


void glGetIntegeri_v(GLenum par1, GLuint par2, GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETINTEGERI_V;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetIntegeri_v");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetIntegeri_v, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetIntegeri_v rc = %d", rc);
	}
	return ;
}


void glBeginTransformFeedback(GLenum par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBEGINTRANSFORMFEEDBACK;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBeginTransformFeedback");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glBeginTransformFeedback, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBeginTransformFeedback rc = %d", rc);
	}
	return ;
}


void glEndTransformFeedback(void)
{
	int rc;
	DataStr2p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLENDTRANSFORMFEEDBACK;
	data.callInfo.cParms = 2;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glEndTransformFeedback");
	pid_t pid;
	pid = getpid();
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = pid;
	ALOGI("glEndTransformFeedback, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glEndTransformFeedback rc = %d", rc);
	}
	return ;
}


void glBindBufferRange(GLenum par1, GLuint par2, GLuint par3, GLintptr par4, GLsizeiptr par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBINDBUFFERRANGE;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBindBufferRange");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glBindBufferRange, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBindBufferRange rc = %d", rc);
	}
	return ;
}


void glBindBufferBase(GLenum par1, GLuint par2, GLuint par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBINDBUFFERBASE;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBindBufferBase");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glBindBufferBase, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBindBufferBase rc = %d", rc);
	}
	return ;
}


void glTransformFeedbackVaryings(GLuint par1, GLsizei par2, const GLchar* const* par3, GLenum par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLTRANSFORMFEEDBACKVARYINGS;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)*par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glTransformFeedbackVaryings");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glTransformFeedbackVaryings, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glTransformFeedbackVaryings rc = %d", rc);
	}
	return ;
}


void glGetTransformFeedbackVarying(GLuint par1, GLuint par2, GLsizei par3, GLsizei *par4, GLsizei *par5, GLenum *par6, GLchar *par7)
{
	int rc;
	DataStr9p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETTRANSFORMFEEDBACKVARYING;
	data.callInfo.cParms = 9;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t)par6;
	data.par7.type = VMMDevHGCMParmType_LinAddr;
	data.par7.u.Pointer.size = 0x10000;
	data.par7.u.Pointer.u.linearAddr = (uintptr_t)par7;
	data.par8.type = VMMDevHGCMParmType_LinAddr;
	data.par8.u.Pointer.size = 0x10000;
	data.par8.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetTransformFeedbackVarying");
	pid_t pid;
	pid = getpid();
	data.par9.type = VMMDevHGCMParmType_32bit;
	data.par9.u.value32 = pid;
	ALOGI("glGetTransformFeedbackVarying, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetTransformFeedbackVarying rc = %d", rc);
	}
	return ;
}


void glVertexAttribIPointer(GLuint par1, GLint par2, GLenum par3, GLsizei par4, const GLvoid *par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLVERTEXATTRIBIPOINTER;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glVertexAttribIPointer");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glVertexAttribIPointer, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glVertexAttribIPointer rc = %d", rc);
	}
	return ;
}


void glGetVertexAttribIiv(GLuint par1, GLenum par2, GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETVERTEXATTRIBIIV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetVertexAttribIiv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetVertexAttribIiv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetVertexAttribIiv rc = %d", rc);
	}
	return ;
}


void glGetVertexAttribIuiv(GLuint par1, GLenum par2, GLuint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETVERTEXATTRIBIUIV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetVertexAttribIuiv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetVertexAttribIuiv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetVertexAttribIuiv rc = %d", rc);
	}
	return ;
}


void glVertexAttribI4i(GLuint par1, GLint par2, GLint par3, GLint par4, GLint par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLVERTEXATTRIBI4I;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glVertexAttribI4i");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glVertexAttribI4i, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glVertexAttribI4i rc = %d", rc);
	}
	return ;
}


void glVertexAttribI4ui(GLuint par1, GLuint par2, GLuint par3, GLuint par4, GLuint par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLVERTEXATTRIBI4UI;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glVertexAttribI4ui");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glVertexAttribI4ui, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glVertexAttribI4ui rc = %d", rc);
	}
	return ;
}


void glVertexAttribI4iv(GLuint par1, const GLint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLVERTEXATTRIBI4IV;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glVertexAttribI4iv");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glVertexAttribI4iv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glVertexAttribI4iv rc = %d", rc);
	}
	return ;
}


void glVertexAttribI4uiv(GLuint par1, const GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLVERTEXATTRIBI4UIV;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glVertexAttribI4uiv");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glVertexAttribI4uiv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glVertexAttribI4uiv rc = %d", rc);
	}
	return ;
}


void glGetUniformuiv(GLuint par1, GLint par2, GLuint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETUNIFORMUIV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetUniformuiv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetUniformuiv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetUniformuiv rc = %d", rc);
	}
	return ;
}


GLint glGetFragDataLocation(GLuint par1, const GLchar *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETFRAGDATALOCATION;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = -555;
	ALOGI("@artem glGetFragDataLocation");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGetFragDataLocation, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetFragDataLocation rc = %d", rc);
	}
	return ( GLint)data.par3.u.value32;
}


void glUniform1ui(GLint par1, GLuint par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM1UI;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform1ui");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glUniform1ui, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform1ui rc = %d", rc);
	}
	return ;
}


void glUniform2ui(GLint par1, GLuint par2, GLuint par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM2UI;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform2ui");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glUniform2ui, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform2ui rc = %d", rc);
	}
	return ;
}


void glUniform3ui(GLint par1, GLuint par2, GLuint par3, GLuint par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM3UI;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform3ui");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glUniform3ui, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform3ui rc = %d", rc);
	}
	return ;
}


void glUniform4ui(GLint par1, GLuint par2, GLuint par3, GLuint par4, GLuint par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM4UI;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform4ui");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glUniform4ui, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform4ui rc = %d", rc);
	}
	return ;
}


void glUniform1uiv(GLint par1, GLsizei par2, const GLuint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM1UIV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform1uiv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glUniform1uiv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform1uiv rc = %d", rc);
	}
	return ;
}


void glUniform2uiv(GLint par1, GLsizei par2, const GLuint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM2UIV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform2uiv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glUniform2uiv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform2uiv rc = %d", rc);
	}
	return ;
}


void glUniform3uiv(GLint par1, GLsizei par2, const GLuint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM3UIV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform3uiv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glUniform3uiv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform3uiv rc = %d", rc);
	}
	return ;
}


void glUniform4uiv(GLint par1, GLsizei par2, const GLuint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORM4UIV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniform4uiv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glUniform4uiv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniform4uiv rc = %d", rc);
	}
	return ;
}


void glClearBufferiv(GLenum par1, GLint par2, const GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCLEARBUFFERIV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glClearBufferiv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glClearBufferiv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glClearBufferiv rc = %d", rc);
	}
	return ;
}


void glClearBufferuiv(GLenum par1, GLint par2, const GLuint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCLEARBUFFERUIV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glClearBufferuiv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glClearBufferuiv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glClearBufferuiv rc = %d", rc);
	}
	return ;
}


void glClearBufferfv(GLenum par1, GLint par2, const GLfloat *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCLEARBUFFERFV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glClearBufferfv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glClearBufferfv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glClearBufferfv rc = %d", rc);
	}
	return ;
}


void glClearBufferfi(GLenum par1, GLint par2, GLfloat par3, GLint par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCLEARBUFFERFI;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glClearBufferfi");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glClearBufferfi, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glClearBufferfi rc = %d", rc);
	}
	return ;
}


const GLubyte* glGetStringi(GLenum par1, GLuint par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETSTRINGI;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetStringi");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGetStringi, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetStringi rc = %d", rc);
	}
	return ( GLubyte*)data.par3.u.Pointer.u.linearAddr;
}


void glCopyBufferSubData(GLenum par1, GLenum par2, GLintptr par3, GLintptr par4, GLsizeiptr par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCOPYBUFFERSUBDATA;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glCopyBufferSubData");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glCopyBufferSubData, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glCopyBufferSubData rc = %d", rc);
	}
	return ;
}


void glGetUniformIndices(GLuint par1, GLsizei par2, const GLchar* const* par3, GLuint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETUNIFORMINDICES;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)*par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetUniformIndices");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glGetUniformIndices, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetUniformIndices rc = %d", rc);
	}
	return ;
}


void glGetActiveUniformsiv(GLuint par1, GLsizei par2, const GLuint *par3, GLenum par4, GLint *par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETACTIVEUNIFORMSIV;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetActiveUniformsiv");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glGetActiveUniformsiv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetActiveUniformsiv rc = %d", rc);
	}
	return ;
}


GLuint glGetUniformBlockIndex(GLuint par1, const GLchar *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETUNIFORMBLOCKINDEX;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = -555;
	ALOGI("@artem glGetUniformBlockIndex");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGetUniformBlockIndex, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetUniformBlockIndex rc = %d", rc);
	}
	return ( GLuint)data.par3.u.value32;
}


void glGetActiveUniformBlockiv(GLuint par1, GLuint par2, GLenum par3, GLint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETACTIVEUNIFORMBLOCKIV;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetActiveUniformBlockiv");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glGetActiveUniformBlockiv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetActiveUniformBlockiv rc = %d", rc);
	}
	return ;
}


void glGetActiveUniformBlockName(GLuint par1, GLuint par2, GLsizei par3, GLsizei *par4, GLchar *par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETACTIVEUNIFORMBLOCKNAME;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetActiveUniformBlockName");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glGetActiveUniformBlockName, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetActiveUniformBlockName rc = %d", rc);
	}
	return ;
}


void glUniformBlockBinding(GLuint par1, GLuint par2, GLuint par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNIFORMBLOCKBINDING;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUniformBlockBinding");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glUniformBlockBinding, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUniformBlockBinding rc = %d", rc);
	}
	return ;
}


void glDrawArraysInstanced(GLenum par1, GLint par2, GLsizei par3, GLsizei par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDRAWARRAYSINSTANCED;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDrawArraysInstanced");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glDrawArraysInstanced, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDrawArraysInstanced rc = %d", rc);
	}
	return ;
}


void glDrawElementsInstanced(GLenum par1, GLsizei par2, GLenum par3, const GLvoid *par4, GLsizei par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDRAWELEMENTSINSTANCED;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDrawElementsInstanced");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glDrawElementsInstanced, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDrawElementsInstanced rc = %d", rc);
	}
	return ;
}


GLsync glFenceSync(GLenum par1, GLbitfield par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLFENCESYNC;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glFenceSync");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glFenceSync, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glFenceSync rc = %d", rc);
	}
	return ( GLsync)data.par3.u.Pointer.u.linearAddr;
}


GLboolean glIsSync(GLsync par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLISSYNC;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glIsSync");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glIsSync, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glIsSync rc = %d", rc);
	}
	return ( GLboolean)data.par2.u.value32;
}


void glDeleteSync(GLsync par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDELETESYNC;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDeleteSync");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glDeleteSync, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDeleteSync rc = %d", rc);
	}
	return ;
}


GLenum glClientWaitSync(GLsync par1, GLbitfield par2, GLuint64 par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCLIENTWAITSYNC;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_64bit;
	data.par3.u.value64 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = -555;
	ALOGI("@artem glClientWaitSync");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glClientWaitSync, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glClientWaitSync rc = %d", rc);
	}
	return ( GLenum)data.par4.u.value32;
}


void glWaitSync(GLsync par1, GLbitfield par2, GLuint64 par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLWAITSYNC;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_64bit;
	data.par3.u.value64 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glWaitSync");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glWaitSync, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glWaitSync rc = %d", rc);
	}
	return ;
}


void glGetInteger64v(GLenum par1, GLint64 *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETINTEGER64V;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetInteger64v");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGetInteger64v, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetInteger64v rc = %d", rc);
	}
	return ;
}


void glGetSynciv(GLsync par1, GLenum par2, GLsizei par3, GLsizei *par4, GLint *par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETSYNCIV;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetSynciv");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glGetSynciv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetSynciv rc = %d", rc);
	}
	return ;
}


void glGetInteger64i_v(GLenum par1, GLuint par2, GLint64 *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETINTEGER64I_V;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetInteger64i_v");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetInteger64i_v, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetInteger64i_v rc = %d", rc);
	}
	return ;
}


void glGetBufferParameteri64v(GLenum par1, GLenum par2, GLint64 *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETBUFFERPARAMETERI64V;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetBufferParameteri64v");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetBufferParameteri64v, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetBufferParameteri64v rc = %d", rc);
	}
	return ;
}


void glGenSamplers(GLsizei par1, GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGENSAMPLERS;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGenSamplers");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGenSamplers, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGenSamplers rc = %d", rc);
	}
	return ;
}


void glDeleteSamplers(GLsizei par1, const GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDELETESAMPLERS;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDeleteSamplers");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glDeleteSamplers, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDeleteSamplers rc = %d", rc);
	}
	return ;
}


GLboolean glIsSampler(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLISSAMPLER;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glIsSampler");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glIsSampler, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glIsSampler rc = %d", rc);
	}
	return ( GLboolean)data.par2.u.value32;
}


void glBindSampler(GLuint par1, GLuint par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBINDSAMPLER;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBindSampler");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glBindSampler, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBindSampler rc = %d", rc);
	}
	return ;
}


void glSamplerParameteri(GLuint par1, GLenum par2, GLint par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLSAMPLERPARAMETERI;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glSamplerParameteri");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glSamplerParameteri, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glSamplerParameteri rc = %d", rc);
	}
	return ;
}


void glSamplerParameteriv(GLuint par1, GLenum par2, const GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLSAMPLERPARAMETERIV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glSamplerParameteriv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glSamplerParameteriv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glSamplerParameteriv rc = %d", rc);
	}
	return ;
}


void glSamplerParameterf(GLuint par1, GLenum par2, GLfloat par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLSAMPLERPARAMETERF;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glSamplerParameterf");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glSamplerParameterf, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glSamplerParameterf rc = %d", rc);
	}
	return ;
}


void glSamplerParameterfv(GLuint par1, GLenum par2, const GLfloat *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLSAMPLERPARAMETERFV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glSamplerParameterfv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glSamplerParameterfv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glSamplerParameterfv rc = %d", rc);
	}
	return ;
}


void glGetSamplerParameteriv(GLuint par1, GLenum par2, GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETSAMPLERPARAMETERIV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetSamplerParameteriv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetSamplerParameteriv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetSamplerParameteriv rc = %d", rc);
	}
	return ;
}


void glGetSamplerParameterfv(GLuint par1, GLenum par2, GLfloat *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETSAMPLERPARAMETERFV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetSamplerParameterfv");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetSamplerParameterfv, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetSamplerParameterfv rc = %d", rc);
	}
	return ;
}


void glVertexAttribDivisor(GLuint par1, GLuint par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLVERTEXATTRIBDIVISOR;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glVertexAttribDivisor");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glVertexAttribDivisor, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glVertexAttribDivisor rc = %d", rc);
	}
	return ;
}


void glBindTransformFeedback(GLenum par1, GLuint par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBINDTRANSFORMFEEDBACK;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBindTransformFeedback");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glBindTransformFeedback, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBindTransformFeedback rc = %d", rc);
	}
	return ;
}


void glDeleteTransformFeedbacks(GLsizei par1, const GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDELETETRANSFORMFEEDBACKS;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDeleteTransformFeedbacks");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glDeleteTransformFeedbacks, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDeleteTransformFeedbacks rc = %d", rc);
	}
	return ;
}


void glGenTransformFeedbacks(GLsizei par1, GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGENTRANSFORMFEEDBACKS;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGenTransformFeedbacks");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGenTransformFeedbacks, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGenTransformFeedbacks rc = %d", rc);
	}
	return ;
}


GLboolean glIsTransformFeedback(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLISTRANSFORMFEEDBACK;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glIsTransformFeedback");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glIsTransformFeedback, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glIsTransformFeedback rc = %d", rc);
	}
	return ( GLboolean)data.par2.u.value32;
}


void glPauseTransformFeedback(void)
{
	int rc;
	DataStr2p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPAUSETRANSFORMFEEDBACK;
	data.callInfo.cParms = 2;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glPauseTransformFeedback");
	pid_t pid;
	pid = getpid();
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = pid;
	ALOGI("glPauseTransformFeedback, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glPauseTransformFeedback rc = %d", rc);
	}
	return ;
}


void glResumeTransformFeedback(void)
{
	int rc;
	DataStr2p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLRESUMETRANSFORMFEEDBACK;
	data.callInfo.cParms = 2;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glResumeTransformFeedback");
	pid_t pid;
	pid = getpid();
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = pid;
	ALOGI("glResumeTransformFeedback, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glResumeTransformFeedback rc = %d", rc);
	}
	return ;
}


void glGetProgramBinary(GLuint par1, GLsizei par2, GLsizei *par3, GLenum *par4, GLvoid *par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETPROGRAMBINARY;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetProgramBinary");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glGetProgramBinary, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetProgramBinary rc = %d", rc);
	}
	return ;
}


void glProgramBinary(GLuint par1, GLenum par2, const GLvoid *par3, GLsizei par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMBINARY;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramBinary");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glProgramBinary, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramBinary rc = %d", rc);
	}
	return ;
}


void glProgramParameteri(GLuint par1, GLenum par2, GLint par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMPARAMETERI;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramParameteri");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glProgramParameteri, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramParameteri rc = %d", rc);
	}
	return ;
}


void glInvalidateFramebuffer(GLenum par1, GLsizei par2, const GLenum *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLINVALIDATEFRAMEBUFFER;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glInvalidateFramebuffer");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glInvalidateFramebuffer, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glInvalidateFramebuffer rc = %d", rc);
	}
	return ;
}


void glInvalidateSubFramebuffer(GLenum par1, GLsizei par2, const GLenum *par3, GLint par4, GLint par5, GLsizei par6, GLsizei par7)
{
	int rc;
	DataStr9p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLINVALIDATESUBFRAMEBUFFER;
	data.callInfo.cParms = 9;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_LinAddr;
	data.par8.u.Pointer.size = 0x10000;
	data.par8.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glInvalidateSubFramebuffer");
	pid_t pid;
	pid = getpid();
	data.par9.type = VMMDevHGCMParmType_32bit;
	data.par9.u.value32 = pid;
	ALOGI("glInvalidateSubFramebuffer, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glInvalidateSubFramebuffer rc = %d", rc);
	}
	return ;
}


void glTexStorage2D(GLenum par1, GLsizei par2, GLenum par3, GLsizei par4, GLsizei par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLTEXSTORAGE2D;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glTexStorage2D");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glTexStorage2D, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glTexStorage2D rc = %d", rc);
	}
	return ;
}


void glTexStorage3D(GLenum par1, GLsizei par2, GLenum par3, GLsizei par4, GLsizei par5, GLsizei par6)
{
	int rc;
	DataStr8p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLTEXSTORAGE3D;
	data.callInfo.cParms = 8;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_LinAddr;
	data.par7.u.Pointer.size = 0x10000;
	data.par7.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glTexStorage3D");
	pid_t pid;
	pid = getpid();
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = pid;
	ALOGI("glTexStorage3D, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glTexStorage3D rc = %d", rc);
	}
	return ;
}


void glGetInternalformativ(GLenum par1, GLenum par2, GLenum par3, GLsizei par4, GLint *par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETINTERNALFORMATIV;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetInternalformativ");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glGetInternalformativ, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetInternalformativ rc = %d", rc);
	}
	return ;
}


void glEGLImageTargetTexture2DOES(GLenum par1, GLeglImageOES par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLEGLIMAGETARGETTEXTURE2DOES;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glEGLImageTargetTexture2DOES");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glEGLImageTargetTexture2DOES, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glEGLImageTargetTexture2DOES rc = %d", rc);
	}
	return ;
}


void glEGLImageTargetRenderbufferStorageOES(GLenum par1, GLeglImageOES par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLEGLIMAGETARGETRENDERBUFFERSTORAGEOES;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glEGLImageTargetRenderbufferStorageOES");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glEGLImageTargetRenderbufferStorageOES, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glEGLImageTargetRenderbufferStorageOES rc = %d", rc);
	}
	return ;
}


void glGetProgramBinaryOES(GLuint par1, GLsizei par2, GLsizei *par3, GLenum *par4, GLvoid *par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETPROGRAMBINARYOES;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetProgramBinaryOES");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glGetProgramBinaryOES, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetProgramBinaryOES rc = %d", rc);
	}
	return ;
}


void glProgramBinaryOES(GLuint par1, GLenum par2, const GLvoid *par3, GLint par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMBINARYOES;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramBinaryOES");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glProgramBinaryOES, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramBinaryOES rc = %d", rc);
	}
	return ;
}


void* glMapBufferOES(GLenum par1, GLenum par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLMAPBUFFEROES;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glMapBufferOES");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glMapBufferOES, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glMapBufferOES rc = %d", rc);
	}
	return ( void*)data.par3.u.Pointer.u.linearAddr;
}


GLboolean glUnmapBufferOES(GLenum par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUNMAPBUFFEROES;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glUnmapBufferOES");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glUnmapBufferOES, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUnmapBufferOES rc = %d", rc);
	}
	return ( GLboolean)data.par2.u.value32;
}


void glGetBufferPointervOES(GLenum par1, GLenum par2, GLvoid **par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETBUFFERPOINTERVOES;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetBufferPointervOES");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetBufferPointervOES, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetBufferPointervOES rc = %d", rc);
	}
	return ;
}


void glTexImage3DOES(GLenum par1, GLint par2, GLenum par3, GLsizei par4, GLsizei par5, GLsizei par6, GLint par7, GLenum par8, GLenum par9, const GLvoid *par10)
{
	int rc;
	DataStr12p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLTEXIMAGE3DOES;
	data.callInfo.cParms = 12;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = par8;
	data.par9.type = VMMDevHGCMParmType_32bit;
	data.par9.u.value32 = par9;
	data.par10.type = VMMDevHGCMParmType_LinAddr;
	data.par10.u.Pointer.size = 0x10000;
	data.par10.u.Pointer.u.linearAddr = (uintptr_t)par10;
	data.par11.type = VMMDevHGCMParmType_LinAddr;
	data.par11.u.Pointer.size = 0x10000;
	data.par11.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glTexImage3DOES");
	pid_t pid;
	pid = getpid();
	data.par12.type = VMMDevHGCMParmType_32bit;
	data.par12.u.value32 = pid;
	ALOGI("glTexImage3DOES, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glTexImage3DOES rc = %d", rc);
	}
	return ;
}


void glTexSubImage3DOES(GLenum par1, GLint par2, GLint par3, GLint par4, GLint par5, GLsizei par6, GLsizei par7, GLsizei par8, GLenum par9, GLenum par10, const GLvoid *par11)
{
	int rc;
	DataStr13p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLTEXSUBIMAGE3DOES;
	data.callInfo.cParms = 13;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = par8;
	data.par9.type = VMMDevHGCMParmType_32bit;
	data.par9.u.value32 = par9;
	data.par10.type = VMMDevHGCMParmType_32bit;
	data.par10.u.value32 = par10;
	data.par11.type = VMMDevHGCMParmType_LinAddr;
	data.par11.u.Pointer.size = 0x10000;
	data.par11.u.Pointer.u.linearAddr = (uintptr_t)par11;
	data.par12.type = VMMDevHGCMParmType_LinAddr;
	data.par12.u.Pointer.size = 0x10000;
	data.par12.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glTexSubImage3DOES");
	pid_t pid;
	pid = getpid();
	data.par13.type = VMMDevHGCMParmType_32bit;
	data.par13.u.value32 = pid;
	ALOGI("glTexSubImage3DOES, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glTexSubImage3DOES rc = %d", rc);
	}
	return ;
}


void glCopyTexSubImage3DOES(GLenum par1, GLint par2, GLint par3, GLint par4, GLint par5, GLint par6, GLint par7, GLsizei par8, GLsizei par9)
{
	int rc;
	DataStr11p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCOPYTEXSUBIMAGE3DOES;
	data.callInfo.cParms = 11;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = par8;
	data.par9.type = VMMDevHGCMParmType_32bit;
	data.par9.u.value32 = par9;
	data.par10.type = VMMDevHGCMParmType_LinAddr;
	data.par10.u.Pointer.size = 0x10000;
	data.par10.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glCopyTexSubImage3DOES");
	pid_t pid;
	pid = getpid();
	data.par11.type = VMMDevHGCMParmType_32bit;
	data.par11.u.value32 = pid;
	ALOGI("glCopyTexSubImage3DOES, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glCopyTexSubImage3DOES rc = %d", rc);
	}
	return ;
}


void glCompressedTexImage3DOES(GLenum par1, GLint par2, GLenum par3, GLsizei par4, GLsizei par5, GLsizei par6, GLint par7, GLsizei par8, const GLvoid *par9)
{
	int rc;
	DataStr11p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCOMPRESSEDTEXIMAGE3DOES;
	data.callInfo.cParms = 11;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = par8;
	data.par9.type = VMMDevHGCMParmType_LinAddr;
	data.par9.u.Pointer.size = 0x10000;
	data.par9.u.Pointer.u.linearAddr = (uintptr_t)par9;
	data.par10.type = VMMDevHGCMParmType_LinAddr;
	data.par10.u.Pointer.size = 0x10000;
	data.par10.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glCompressedTexImage3DOES");
	pid_t pid;
	pid = getpid();
	data.par11.type = VMMDevHGCMParmType_32bit;
	data.par11.u.value32 = pid;
	ALOGI("glCompressedTexImage3DOES, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glCompressedTexImage3DOES rc = %d", rc);
	}
	return ;
}


void glCompressedTexSubImage3DOES(GLenum par1, GLint par2, GLint par3, GLint par4, GLint par5, GLsizei par6, GLsizei par7, GLsizei par8, GLenum par9, GLsizei par10, const GLvoid *par11)
{
	int rc;
	DataStr13p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCOMPRESSEDTEXSUBIMAGE3DOES;
	data.callInfo.cParms = 13;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = par8;
	data.par9.type = VMMDevHGCMParmType_32bit;
	data.par9.u.value32 = par9;
	data.par10.type = VMMDevHGCMParmType_32bit;
	data.par10.u.value32 = par10;
	data.par11.type = VMMDevHGCMParmType_LinAddr;
	data.par11.u.Pointer.size = 0x10000;
	data.par11.u.Pointer.u.linearAddr = (uintptr_t)par11;
	data.par12.type = VMMDevHGCMParmType_LinAddr;
	data.par12.u.Pointer.size = 0x10000;
	data.par12.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glCompressedTexSubImage3DOES");
	pid_t pid;
	pid = getpid();
	data.par13.type = VMMDevHGCMParmType_32bit;
	data.par13.u.value32 = pid;
	ALOGI("glCompressedTexSubImage3DOES, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glCompressedTexSubImage3DOES rc = %d", rc);
	}
	return ;
}


void glFramebufferTexture3DOES(GLenum par1, GLenum par2, GLenum par3, GLuint par4, GLint par5, GLint par6)
{
	int rc;
	DataStr8p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLFRAMEBUFFERTEXTURE3DOES;
	data.callInfo.cParms = 8;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_LinAddr;
	data.par7.u.Pointer.size = 0x10000;
	data.par7.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glFramebufferTexture3DOES");
	pid_t pid;
	pid = getpid();
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = pid;
	ALOGI("glFramebufferTexture3DOES, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glFramebufferTexture3DOES rc = %d", rc);
	}
	return ;
}


void glBindVertexArrayOES(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBINDVERTEXARRAYOES;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBindVertexArrayOES");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glBindVertexArrayOES, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBindVertexArrayOES rc = %d", rc);
	}
	return ;
}


void glDeleteVertexArraysOES(GLsizei par1, const GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDELETEVERTEXARRAYSOES;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDeleteVertexArraysOES");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glDeleteVertexArraysOES, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDeleteVertexArraysOES rc = %d", rc);
	}
	return ;
}


void glGenVertexArraysOES(GLsizei par1, GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGENVERTEXARRAYSOES;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGenVertexArraysOES");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGenVertexArraysOES, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGenVertexArraysOES rc = %d", rc);
	}
	return ;
}


GLboolean glIsVertexArrayOES(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLISVERTEXARRAYOES;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glIsVertexArrayOES");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glIsVertexArrayOES, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glIsVertexArrayOES rc = %d", rc);
	}
	return ( GLboolean)data.par2.u.value32;
}


void glGetPerfMonitorGroupsAMD(GLint *par1, GLsizei par2, GLuint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETPERFMONITORGROUPSAMD;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetPerfMonitorGroupsAMD");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetPerfMonitorGroupsAMD, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetPerfMonitorGroupsAMD rc = %d", rc);
	}
	return ;
}


void glGetPerfMonitorCountersAMD(GLuint par1, GLint *par2, GLint *par3, GLsizei par4, GLuint *par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETPERFMONITORCOUNTERSAMD;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetPerfMonitorCountersAMD");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glGetPerfMonitorCountersAMD, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetPerfMonitorCountersAMD rc = %d", rc);
	}
	return ;
}


void glGetPerfMonitorGroupStringAMD(GLuint par1, GLsizei par2, GLsizei *par3, GLchar *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETPERFMONITORGROUPSTRINGAMD;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetPerfMonitorGroupStringAMD");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glGetPerfMonitorGroupStringAMD, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetPerfMonitorGroupStringAMD rc = %d", rc);
	}
	return ;
}


void glGetPerfMonitorCounterStringAMD(GLuint par1, GLuint par2, GLsizei par3, GLsizei *par4, GLchar *par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETPERFMONITORCOUNTERSTRINGAMD;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetPerfMonitorCounterStringAMD");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glGetPerfMonitorCounterStringAMD, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetPerfMonitorCounterStringAMD rc = %d", rc);
	}
	return ;
}


void glGetPerfMonitorCounterInfoAMD(GLuint par1, GLuint par2, GLenum par3, GLvoid *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETPERFMONITORCOUNTERINFOAMD;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetPerfMonitorCounterInfoAMD");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glGetPerfMonitorCounterInfoAMD, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetPerfMonitorCounterInfoAMD rc = %d", rc);
	}
	return ;
}


void glGenPerfMonitorsAMD(GLsizei par1, GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGENPERFMONITORSAMD;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGenPerfMonitorsAMD");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGenPerfMonitorsAMD, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGenPerfMonitorsAMD rc = %d", rc);
	}
	return ;
}


void glDeletePerfMonitorsAMD(GLsizei par1, GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDELETEPERFMONITORSAMD;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDeletePerfMonitorsAMD");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glDeletePerfMonitorsAMD, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDeletePerfMonitorsAMD rc = %d", rc);
	}
	return ;
}


void glSelectPerfMonitorCountersAMD(GLuint par1, GLboolean par2, GLuint par3, GLint par4, GLuint *par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLSELECTPERFMONITORCOUNTERSAMD;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glSelectPerfMonitorCountersAMD");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glSelectPerfMonitorCountersAMD, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glSelectPerfMonitorCountersAMD rc = %d", rc);
	}
	return ;
}


void glBeginPerfMonitorAMD(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBEGINPERFMONITORAMD;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBeginPerfMonitorAMD");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glBeginPerfMonitorAMD, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBeginPerfMonitorAMD rc = %d", rc);
	}
	return ;
}


void glEndPerfMonitorAMD(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLENDPERFMONITORAMD;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glEndPerfMonitorAMD");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glEndPerfMonitorAMD, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glEndPerfMonitorAMD rc = %d", rc);
	}
	return ;
}


void glGetPerfMonitorCounterDataAMD(GLuint par1, GLenum par2, GLsizei par3, GLuint *par4, GLint *par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETPERFMONITORCOUNTERDATAAMD;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetPerfMonitorCounterDataAMD");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glGetPerfMonitorCounterDataAMD, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetPerfMonitorCounterDataAMD rc = %d", rc);
	}
	return ;
}


void glBlitFramebufferANGLE(GLint par1, GLint par2, GLint par3, GLint par4, GLint par5, GLint par6, GLint par7, GLint par8, GLbitfield par9, GLenum par10)
{
	int rc;
	DataStr12p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBLITFRAMEBUFFERANGLE;
	data.callInfo.cParms = 12;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = par8;
	data.par9.type = VMMDevHGCMParmType_32bit;
	data.par9.u.value32 = par9;
	data.par10.type = VMMDevHGCMParmType_32bit;
	data.par10.u.value32 = par10;
	data.par11.type = VMMDevHGCMParmType_LinAddr;
	data.par11.u.Pointer.size = 0x10000;
	data.par11.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBlitFramebufferANGLE");
	pid_t pid;
	pid = getpid();
	data.par12.type = VMMDevHGCMParmType_32bit;
	data.par12.u.value32 = pid;
	ALOGI("glBlitFramebufferANGLE, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBlitFramebufferANGLE rc = %d", rc);
	}
	return ;
}


void glRenderbufferStorageMultisampleANGLE(GLenum par1, GLsizei par2, GLenum par3, GLsizei par4, GLsizei par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLRENDERBUFFERSTORAGEMULTISAMPLEANGLE;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glRenderbufferStorageMultisampleANGLE");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glRenderbufferStorageMultisampleANGLE, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glRenderbufferStorageMultisampleANGLE rc = %d", rc);
	}
	return ;
}


void glRenderbufferStorageMultisampleAPPLE(GLenum par1, GLsizei par2, GLenum par3, GLsizei par4, GLsizei par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLRENDERBUFFERSTORAGEMULTISAMPLEAPPLE;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glRenderbufferStorageMultisampleAPPLE");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glRenderbufferStorageMultisampleAPPLE, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glRenderbufferStorageMultisampleAPPLE rc = %d", rc);
	}
	return ;
}


void glResolveMultisampleFramebufferAPPLE(void)
{
	int rc;
	DataStr2p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLE;
	data.callInfo.cParms = 2;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glResolveMultisampleFramebufferAPPLE");
	pid_t pid;
	pid = getpid();
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = pid;
	ALOGI("glResolveMultisampleFramebufferAPPLE, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glResolveMultisampleFramebufferAPPLE rc = %d", rc);
	}
	return ;
}


void glLabelObjectEXT(GLenum par1, GLuint par2, GLsizei par3, const GLchar *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLLABELOBJECTEXT;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glLabelObjectEXT");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glLabelObjectEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glLabelObjectEXT rc = %d", rc);
	}
	return ;
}


void glGetObjectLabelEXT(GLenum par1, GLuint par2, GLsizei par3, GLsizei *par4, GLchar *par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETOBJECTLABELEXT;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetObjectLabelEXT");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glGetObjectLabelEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetObjectLabelEXT rc = %d", rc);
	}
	return ;
}


void glInsertEventMarkerEXT(GLsizei par1, const GLchar *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLINSERTEVENTMARKEREXT;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glInsertEventMarkerEXT");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glInsertEventMarkerEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glInsertEventMarkerEXT rc = %d", rc);
	}
	return ;
}


void glPushGroupMarkerEXT(GLsizei par1, const GLchar *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPUSHGROUPMARKEREXT;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glPushGroupMarkerEXT");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glPushGroupMarkerEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glPushGroupMarkerEXT rc = %d", rc);
	}
	return ;
}


void glPopGroupMarkerEXT(void)
{
	int rc;
	DataStr2p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPOPGROUPMARKEREXT;
	data.callInfo.cParms = 2;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glPopGroupMarkerEXT");
	pid_t pid;
	pid = getpid();
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = pid;
	ALOGI("glPopGroupMarkerEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glPopGroupMarkerEXT rc = %d", rc);
	}
	return ;
}


void glDiscardFramebufferEXT(GLenum par1, GLsizei par2, const GLenum *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDISCARDFRAMEBUFFEREXT;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDiscardFramebufferEXT");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glDiscardFramebufferEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDiscardFramebufferEXT rc = %d", rc);
	}
	return ;
}


void glRenderbufferStorageMultisampleEXT(GLenum par1, GLsizei par2, GLenum par3, GLsizei par4, GLsizei par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLRENDERBUFFERSTORAGEMULTISAMPLEEXT;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glRenderbufferStorageMultisampleEXT");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glRenderbufferStorageMultisampleEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glRenderbufferStorageMultisampleEXT rc = %d", rc);
	}
	return ;
}


void glFramebufferTexture2DMultisampleEXT(GLenum par1, GLenum par2, GLenum par3, GLuint par4, GLint par5, GLsizei par6)
{
	int rc;
	DataStr8p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXT;
	data.callInfo.cParms = 8;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_LinAddr;
	data.par7.u.Pointer.size = 0x10000;
	data.par7.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glFramebufferTexture2DMultisampleEXT");
	pid_t pid;
	pid = getpid();
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = pid;
	ALOGI("glFramebufferTexture2DMultisampleEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glFramebufferTexture2DMultisampleEXT rc = %d", rc);
	}
	return ;
}


void glMultiDrawArraysEXT(GLenum par1, GLint *par2, GLsizei *par3, GLsizei par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLMULTIDRAWARRAYSEXT;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glMultiDrawArraysEXT");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glMultiDrawArraysEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glMultiDrawArraysEXT rc = %d", rc);
	}
	return ;
}


void glMultiDrawElementsEXT(GLenum par1, const GLsizei *par2, GLenum par3, const GLvoid **par4, GLsizei par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLMULTIDRAWELEMENTSEXT;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glMultiDrawElementsEXT");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glMultiDrawElementsEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glMultiDrawElementsEXT rc = %d", rc);
	}
	return ;
}


void glGenQueriesEXT(GLsizei par1, GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGENQUERIESEXT;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGenQueriesEXT");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGenQueriesEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGenQueriesEXT rc = %d", rc);
	}
	return ;
}


void glDeleteQueriesEXT(GLsizei par1, const GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDELETEQUERIESEXT;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDeleteQueriesEXT");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glDeleteQueriesEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDeleteQueriesEXT rc = %d", rc);
	}
	return ;
}


GLboolean glIsQueryEXT(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLISQUERYEXT;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glIsQueryEXT");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glIsQueryEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glIsQueryEXT rc = %d", rc);
	}
	return ( GLboolean)data.par2.u.value32;
}


void glBeginQueryEXT(GLenum par1, GLuint par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBEGINQUERYEXT;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBeginQueryEXT");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glBeginQueryEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBeginQueryEXT rc = %d", rc);
	}
	return ;
}


void glEndQueryEXT(GLenum par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLENDQUERYEXT;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glEndQueryEXT");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glEndQueryEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glEndQueryEXT rc = %d", rc);
	}
	return ;
}


void glGetQueryivEXT(GLenum par1, GLenum par2, GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETQUERYIVEXT;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetQueryivEXT");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetQueryivEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetQueryivEXT rc = %d", rc);
	}
	return ;
}


void glGetQueryObjectuivEXT(GLuint par1, GLenum par2, GLuint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETQUERYOBJECTUIVEXT;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetQueryObjectuivEXT");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetQueryObjectuivEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetQueryObjectuivEXT rc = %d", rc);
	}
	return ;
}


GLenum glGetGraphicsResetStatusEXT(void)
{
	int rc;
	DataStr2p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETGRAPHICSRESETSTATUSEXT;
	data.callInfo.cParms = 2;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = -555;
	ALOGI("@artem glGetGraphicsResetStatusEXT");
	pid_t pid;
	pid = getpid();
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = pid;
	ALOGI("glGetGraphicsResetStatusEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetGraphicsResetStatusEXT rc = %d", rc);
	}
	return ( GLenum)data.par1.u.value32;
}


void glReadnPixelsEXT(GLint par1, GLint par2, GLsizei par3, GLsizei par4, GLenum par5, GLenum par6, GLsizei par7, void *par8)
{
	int rc;
	DataStr10p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLREADNPIXELSEXT;
	data.callInfo.cParms = 10;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_LinAddr;
	data.par8.u.Pointer.size = 0x10000;
	data.par8.u.Pointer.u.linearAddr = (uintptr_t)par8;
	data.par9.type = VMMDevHGCMParmType_LinAddr;
	data.par9.u.Pointer.size = 0x10000;
	data.par9.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glReadnPixelsEXT");
	pid_t pid;
	pid = getpid();
	data.par10.type = VMMDevHGCMParmType_32bit;
	data.par10.u.value32 = pid;
	ALOGI("glReadnPixelsEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glReadnPixelsEXT rc = %d", rc);
	}
	return ;
}


void glGetnUniformfvEXT(GLuint par1, GLint par2, GLsizei par3, float *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETNUNIFORMFVEXT;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetnUniformfvEXT");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glGetnUniformfvEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetnUniformfvEXT rc = %d", rc);
	}
	return ;
}


void glGetnUniformivEXT(GLuint par1, GLint par2, GLsizei par3, GLint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETNUNIFORMIVEXT;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetnUniformivEXT");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glGetnUniformivEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetnUniformivEXT rc = %d", rc);
	}
	return ;
}


void glUseProgramStagesEXT(GLuint par1, GLbitfield par2, GLuint par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLUSEPROGRAMSTAGESEXT;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glUseProgramStagesEXT");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glUseProgramStagesEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glUseProgramStagesEXT rc = %d", rc);
	}
	return ;
}


void glActiveShaderProgramEXT(GLuint par1, GLuint par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLACTIVESHADERPROGRAMEXT;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glActiveShaderProgramEXT");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glActiveShaderProgramEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glActiveShaderProgramEXT rc = %d", rc);
	}
	return ;
}


GLuint glCreateShaderProgramvEXT(GLenum par1, GLsizei par2, const GLchar **par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCREATESHADERPROGRAMVEXT;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)*par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = -555;
	ALOGI("@artem glCreateShaderProgramvEXT");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glCreateShaderProgramvEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glCreateShaderProgramvEXT rc = %d", rc);
	}
	return ( GLuint)data.par4.u.value32;
}


void glBindProgramPipelineEXT(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLBINDPROGRAMPIPELINEEXT;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glBindProgramPipelineEXT");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glBindProgramPipelineEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glBindProgramPipelineEXT rc = %d", rc);
	}
	return ;
}


void glDeleteProgramPipelinesEXT(GLsizei par1, const GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDELETEPROGRAMPIPELINESEXT;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDeleteProgramPipelinesEXT");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glDeleteProgramPipelinesEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDeleteProgramPipelinesEXT rc = %d", rc);
	}
	return ;
}


void glGenProgramPipelinesEXT(GLsizei par1, GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGENPROGRAMPIPELINESEXT;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGenProgramPipelinesEXT");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGenProgramPipelinesEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGenProgramPipelinesEXT rc = %d", rc);
	}
	return ;
}


GLboolean glIsProgramPipelineEXT(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLISPROGRAMPIPELINEEXT;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glIsProgramPipelineEXT");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glIsProgramPipelineEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glIsProgramPipelineEXT rc = %d", rc);
	}
	return ( GLboolean)data.par2.u.value32;
}


void glProgramParameteriEXT(GLuint par1, GLenum par2, GLint par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMPARAMETERIEXT;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramParameteriEXT");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glProgramParameteriEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramParameteriEXT rc = %d", rc);
	}
	return ;
}


void glGetProgramPipelineivEXT(GLuint par1, GLenum par2, GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETPROGRAMPIPELINEIVEXT;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetProgramPipelineivEXT");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetProgramPipelineivEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetProgramPipelineivEXT rc = %d", rc);
	}
	return ;
}


void glProgramUniform1iEXT(GLuint par1, GLint par2, GLint par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMUNIFORM1IEXT;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramUniform1iEXT");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glProgramUniform1iEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramUniform1iEXT rc = %d", rc);
	}
	return ;
}


void glProgramUniform2iEXT(GLuint par1, GLint par2, GLint par3, GLint par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMUNIFORM2IEXT;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramUniform2iEXT");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glProgramUniform2iEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramUniform2iEXT rc = %d", rc);
	}
	return ;
}


void glProgramUniform3iEXT(GLuint par1, GLint par2, GLint par3, GLint par4, GLint par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMUNIFORM3IEXT;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramUniform3iEXT");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glProgramUniform3iEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramUniform3iEXT rc = %d", rc);
	}
	return ;
}


void glProgramUniform4iEXT(GLuint par1, GLint par2, GLint par3, GLint par4, GLint par5, GLint par6)
{
	int rc;
	DataStr8p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMUNIFORM4IEXT;
	data.callInfo.cParms = 8;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_LinAddr;
	data.par7.u.Pointer.size = 0x10000;
	data.par7.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramUniform4iEXT");
	pid_t pid;
	pid = getpid();
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = pid;
	ALOGI("glProgramUniform4iEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramUniform4iEXT rc = %d", rc);
	}
	return ;
}


void glProgramUniform1fEXT(GLuint par1, GLint par2, GLfloat par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMUNIFORM1FEXT;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramUniform1fEXT");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glProgramUniform1fEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramUniform1fEXT rc = %d", rc);
	}
	return ;
}


void glProgramUniform2fEXT(GLuint par1, GLint par2, GLfloat par3, GLfloat par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMUNIFORM2FEXT;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramUniform2fEXT");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glProgramUniform2fEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramUniform2fEXT rc = %d", rc);
	}
	return ;
}


void glProgramUniform3fEXT(GLuint par1, GLint par2, GLfloat par3, GLfloat par4, GLfloat par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMUNIFORM3FEXT;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramUniform3fEXT");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glProgramUniform3fEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramUniform3fEXT rc = %d", rc);
	}
	return ;
}


void glProgramUniform4fEXT(GLuint par1, GLint par2, GLfloat par3, GLfloat par4, GLfloat par5, GLfloat par6)
{
	int rc;
	DataStr8p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMUNIFORM4FEXT;
	data.callInfo.cParms = 8;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_LinAddr;
	data.par7.u.Pointer.size = 0x10000;
	data.par7.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramUniform4fEXT");
	pid_t pid;
	pid = getpid();
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = pid;
	ALOGI("glProgramUniform4fEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramUniform4fEXT rc = %d", rc);
	}
	return ;
}


void glProgramUniform1ivEXT(GLuint par1, GLint par2, GLsizei par3, const GLint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMUNIFORM1IVEXT;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramUniform1ivEXT");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glProgramUniform1ivEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramUniform1ivEXT rc = %d", rc);
	}
	return ;
}


void glProgramUniform2ivEXT(GLuint par1, GLint par2, GLsizei par3, const GLint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMUNIFORM2IVEXT;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramUniform2ivEXT");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glProgramUniform2ivEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramUniform2ivEXT rc = %d", rc);
	}
	return ;
}


void glProgramUniform3ivEXT(GLuint par1, GLint par2, GLsizei par3, const GLint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMUNIFORM3IVEXT;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramUniform3ivEXT");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glProgramUniform3ivEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramUniform3ivEXT rc = %d", rc);
	}
	return ;
}


void glProgramUniform4ivEXT(GLuint par1, GLint par2, GLsizei par3, const GLint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMUNIFORM4IVEXT;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramUniform4ivEXT");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glProgramUniform4ivEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramUniform4ivEXT rc = %d", rc);
	}
	return ;
}


void glProgramUniform1fvEXT(GLuint par1, GLint par2, GLsizei par3, const GLfloat *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMUNIFORM1FVEXT;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramUniform1fvEXT");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glProgramUniform1fvEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramUniform1fvEXT rc = %d", rc);
	}
	return ;
}


void glProgramUniform2fvEXT(GLuint par1, GLint par2, GLsizei par3, const GLfloat *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMUNIFORM2FVEXT;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramUniform2fvEXT");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glProgramUniform2fvEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramUniform2fvEXT rc = %d", rc);
	}
	return ;
}


void glProgramUniform3fvEXT(GLuint par1, GLint par2, GLsizei par3, const GLfloat *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMUNIFORM3FVEXT;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramUniform3fvEXT");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glProgramUniform3fvEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramUniform3fvEXT rc = %d", rc);
	}
	return ;
}


void glProgramUniform4fvEXT(GLuint par1, GLint par2, GLsizei par3, const GLfloat *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMUNIFORM4FVEXT;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramUniform4fvEXT");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glProgramUniform4fvEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramUniform4fvEXT rc = %d", rc);
	}
	return ;
}


void glProgramUniformMatrix2fvEXT(GLuint par1, GLint par2, GLsizei par3, GLboolean par4, const GLfloat *par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMUNIFORMMATRIX2FVEXT;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramUniformMatrix2fvEXT");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glProgramUniformMatrix2fvEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramUniformMatrix2fvEXT rc = %d", rc);
	}
	return ;
}


void glProgramUniformMatrix3fvEXT(GLuint par1, GLint par2, GLsizei par3, GLboolean par4, const GLfloat *par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMUNIFORMMATRIX3FVEXT;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramUniformMatrix3fvEXT");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glProgramUniformMatrix3fvEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramUniformMatrix3fvEXT rc = %d", rc);
	}
	return ;
}


void glProgramUniformMatrix4fvEXT(GLuint par1, GLint par2, GLsizei par3, GLboolean par4, const GLfloat *par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLPROGRAMUNIFORMMATRIX4FVEXT;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glProgramUniformMatrix4fvEXT");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glProgramUniformMatrix4fvEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glProgramUniformMatrix4fvEXT rc = %d", rc);
	}
	return ;
}


void glValidateProgramPipelineEXT(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLVALIDATEPROGRAMPIPELINEEXT;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glValidateProgramPipelineEXT");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glValidateProgramPipelineEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glValidateProgramPipelineEXT rc = %d", rc);
	}
	return ;
}


void glGetProgramPipelineInfoLogEXT(GLuint par1, GLsizei par2, GLsizei *par3, GLchar *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETPROGRAMPIPELINEINFOLOGEXT;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetProgramPipelineInfoLogEXT");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glGetProgramPipelineInfoLogEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetProgramPipelineInfoLogEXT rc = %d", rc);
	}
	return ;
}


void glTexStorage1DEXT(GLenum par1, GLsizei par2, GLenum par3, GLsizei par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLTEXSTORAGE1DEXT;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glTexStorage1DEXT");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glTexStorage1DEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glTexStorage1DEXT rc = %d", rc);
	}
	return ;
}


void glTexStorage2DEXT(GLenum par1, GLsizei par2, GLenum par3, GLsizei par4, GLsizei par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLTEXSTORAGE2DEXT;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glTexStorage2DEXT");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glTexStorage2DEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glTexStorage2DEXT rc = %d", rc);
	}
	return ;
}


void glTexStorage3DEXT(GLenum par1, GLsizei par2, GLenum par3, GLsizei par4, GLsizei par5, GLsizei par6)
{
	int rc;
	DataStr8p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLTEXSTORAGE3DEXT;
	data.callInfo.cParms = 8;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_LinAddr;
	data.par7.u.Pointer.size = 0x10000;
	data.par7.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glTexStorage3DEXT");
	pid_t pid;
	pid = getpid();
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = pid;
	ALOGI("glTexStorage3DEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glTexStorage3DEXT rc = %d", rc);
	}
	return ;
}


void glTextureStorage1DEXT(GLuint par1, GLenum par2, GLsizei par3, GLenum par4, GLsizei par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLTEXTURESTORAGE1DEXT;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glTextureStorage1DEXT");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glTextureStorage1DEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glTextureStorage1DEXT rc = %d", rc);
	}
	return ;
}


void glTextureStorage2DEXT(GLuint par1, GLenum par2, GLsizei par3, GLenum par4, GLsizei par5, GLsizei par6)
{
	int rc;
	DataStr8p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLTEXTURESTORAGE2DEXT;
	data.callInfo.cParms = 8;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_LinAddr;
	data.par7.u.Pointer.size = 0x10000;
	data.par7.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glTextureStorage2DEXT");
	pid_t pid;
	pid = getpid();
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = pid;
	ALOGI("glTextureStorage2DEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glTextureStorage2DEXT rc = %d", rc);
	}
	return ;
}


void glTextureStorage3DEXT(GLuint par1, GLenum par2, GLsizei par3, GLenum par4, GLsizei par5, GLsizei par6, GLsizei par7)
{
	int rc;
	DataStr9p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLTEXTURESTORAGE3DEXT;
	data.callInfo.cParms = 9;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_LinAddr;
	data.par8.u.Pointer.size = 0x10000;
	data.par8.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glTextureStorage3DEXT");
	pid_t pid;
	pid = getpid();
	data.par9.type = VMMDevHGCMParmType_32bit;
	data.par9.u.value32 = pid;
	ALOGI("glTextureStorage3DEXT, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glTextureStorage3DEXT rc = %d", rc);
	}
	return ;
}


void glRenderbufferStorageMultisampleIMG(GLenum par1, GLsizei par2, GLenum par3, GLsizei par4, GLsizei par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLRENDERBUFFERSTORAGEMULTISAMPLEIMG;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glRenderbufferStorageMultisampleIMG");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glRenderbufferStorageMultisampleIMG, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glRenderbufferStorageMultisampleIMG rc = %d", rc);
	}
	return ;
}


void glFramebufferTexture2DMultisampleIMG(GLenum par1, GLenum par2, GLenum par3, GLuint par4, GLint par5, GLsizei par6)
{
	int rc;
	DataStr8p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMG;
	data.callInfo.cParms = 8;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_LinAddr;
	data.par7.u.Pointer.size = 0x10000;
	data.par7.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glFramebufferTexture2DMultisampleIMG");
	pid_t pid;
	pid = getpid();
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = pid;
	ALOGI("glFramebufferTexture2DMultisampleIMG, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glFramebufferTexture2DMultisampleIMG rc = %d", rc);
	}
	return ;
}


void glCoverageMaskNV(GLboolean par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCOVERAGEMASKNV;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glCoverageMaskNV");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glCoverageMaskNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glCoverageMaskNV rc = %d", rc);
	}
	return ;
}


void glCoverageOperationNV(GLenum par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLCOVERAGEOPERATIONNV;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glCoverageOperationNV");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glCoverageOperationNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glCoverageOperationNV rc = %d", rc);
	}
	return ;
}


void glDrawBuffersNV(GLsizei par1, const GLenum *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDRAWBUFFERSNV;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDrawBuffersNV");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glDrawBuffersNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDrawBuffersNV rc = %d", rc);
	}
	return ;
}


void glDeleteFencesNV(GLsizei par1, const GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDELETEFENCESNV;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDeleteFencesNV");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glDeleteFencesNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDeleteFencesNV rc = %d", rc);
	}
	return ;
}


void glGenFencesNV(GLsizei par1, GLuint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGENFENCESNV;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGenFencesNV");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glGenFencesNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGenFencesNV rc = %d", rc);
	}
	return ;
}


GLboolean glIsFenceNV(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLISFENCENV;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glIsFenceNV");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glIsFenceNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glIsFenceNV rc = %d", rc);
	}
	return ( GLboolean)data.par2.u.value32;
}


GLboolean glTestFenceNV(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLTESTFENCENV;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glTestFenceNV");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glTestFenceNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glTestFenceNV rc = %d", rc);
	}
	return ( GLboolean)data.par2.u.value32;
}


void glGetFenceivNV(GLuint par1, GLenum par2, GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETFENCEIVNV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetFenceivNV");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetFenceivNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetFenceivNV rc = %d", rc);
	}
	return ;
}


void glFinishFenceNV(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLFINISHFENCENV;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glFinishFenceNV");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glFinishFenceNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glFinishFenceNV rc = %d", rc);
	}
	return ;
}


void glSetFenceNV(GLuint par1, GLenum par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLSETFENCENV;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glSetFenceNV");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glSetFenceNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glSetFenceNV rc = %d", rc);
	}
	return ;
}


void glReadBufferNV(GLenum par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLREADBUFFERNV;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glReadBufferNV");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glReadBufferNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glReadBufferNV rc = %d", rc);
	}
	return ;
}


void glAlphaFuncQCOM(GLenum par1, GLclampf par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLALPHAFUNCQCOM;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glAlphaFuncQCOM");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glAlphaFuncQCOM, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glAlphaFuncQCOM rc = %d", rc);
	}
	return ;
}


void glGetDriverControlsQCOM(GLint *par1, GLsizei par2, GLuint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETDRIVERCONTROLSQCOM;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetDriverControlsQCOM");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glGetDriverControlsQCOM, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetDriverControlsQCOM rc = %d", rc);
	}
	return ;
}


void glGetDriverControlStringQCOM(GLuint par1, GLsizei par2, GLsizei *par3, GLchar *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLGETDRIVERCONTROLSTRINGQCOM;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glGetDriverControlStringQCOM");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glGetDriverControlStringQCOM, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glGetDriverControlStringQCOM rc = %d", rc);
	}
	return ;
}


void glEnableDriverControlQCOM(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLENABLEDRIVERCONTROLQCOM;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glEnableDriverControlQCOM");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glEnableDriverControlQCOM, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glEnableDriverControlQCOM rc = %d", rc);
	}
	return ;
}


void glDisableDriverControlQCOM(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLDISABLEDRIVERCONTROLQCOM;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glDisableDriverControlQCOM");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glDisableDriverControlQCOM, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glDisableDriverControlQCOM rc = %d", rc);
	}
	return ;
}


void glExtGetTexturesQCOM(GLuint *par1, GLint par2, GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLEXTGETTEXTURESQCOM;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glExtGetTexturesQCOM");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glExtGetTexturesQCOM, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glExtGetTexturesQCOM rc = %d", rc);
	}
	return ;
}


void glExtGetBuffersQCOM(GLuint *par1, GLint par2, GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLEXTGETBUFFERSQCOM;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glExtGetBuffersQCOM");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glExtGetBuffersQCOM, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glExtGetBuffersQCOM rc = %d", rc);
	}
	return ;
}


void glExtGetRenderbuffersQCOM(GLuint *par1, GLint par2, GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLEXTGETRENDERBUFFERSQCOM;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glExtGetRenderbuffersQCOM");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glExtGetRenderbuffersQCOM, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glExtGetRenderbuffersQCOM rc = %d", rc);
	}
	return ;
}


void glExtGetFramebuffersQCOM(GLuint *par1, GLint par2, GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLEXTGETFRAMEBUFFERSQCOM;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glExtGetFramebuffersQCOM");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glExtGetFramebuffersQCOM, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glExtGetFramebuffersQCOM rc = %d", rc);
	}
	return ;
}


void glExtGetTexLevelParameterivQCOM(GLuint par1, GLenum par2, GLint par3, GLenum par4, GLint *par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLEXTGETTEXLEVELPARAMETERIVQCOM;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glExtGetTexLevelParameterivQCOM");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glExtGetTexLevelParameterivQCOM, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glExtGetTexLevelParameterivQCOM rc = %d", rc);
	}
	return ;
}


void glExtTexObjectStateOverrideiQCOM(GLenum par1, GLenum par2, GLint par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLEXTTEXOBJECTSTATEOVERRIDEIQCOM;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glExtTexObjectStateOverrideiQCOM");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glExtTexObjectStateOverrideiQCOM, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glExtTexObjectStateOverrideiQCOM rc = %d", rc);
	}
	return ;
}


void glExtGetTexSubImageQCOM(GLenum par1, GLint par2, GLint par3, GLint par4, GLint par5, GLsizei par6, GLsizei par7, GLsizei par8, GLenum par9, GLenum par10, GLvoid *par11)
{
	int rc;
	DataStr13p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLEXTGETTEXSUBIMAGEQCOM;
	data.callInfo.cParms = 13;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = par7;
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = par8;
	data.par9.type = VMMDevHGCMParmType_32bit;
	data.par9.u.value32 = par9;
	data.par10.type = VMMDevHGCMParmType_32bit;
	data.par10.u.value32 = par10;
	data.par11.type = VMMDevHGCMParmType_LinAddr;
	data.par11.u.Pointer.size = 0x10000;
	data.par11.u.Pointer.u.linearAddr = (uintptr_t)par11;
	data.par12.type = VMMDevHGCMParmType_LinAddr;
	data.par12.u.Pointer.size = 0x10000;
	data.par12.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glExtGetTexSubImageQCOM");
	pid_t pid;
	pid = getpid();
	data.par13.type = VMMDevHGCMParmType_32bit;
	data.par13.u.value32 = pid;
	ALOGI("glExtGetTexSubImageQCOM, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glExtGetTexSubImageQCOM rc = %d", rc);
	}
	return ;
}


void glExtGetBufferPointervQCOM(GLenum par1, GLvoid **par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLEXTGETBUFFERPOINTERVQCOM;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glExtGetBufferPointervQCOM");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("glExtGetBufferPointervQCOM, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glExtGetBufferPointervQCOM rc = %d", rc);
	}
	return ;
}


void glExtGetShadersQCOM(GLuint *par1, GLint par2, GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLEXTGETSHADERSQCOM;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glExtGetShadersQCOM");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glExtGetShadersQCOM, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glExtGetShadersQCOM rc = %d", rc);
	}
	return ;
}


void glExtGetProgramsQCOM(GLuint *par1, GLint par2, GLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLEXTGETPROGRAMSQCOM;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glExtGetProgramsQCOM");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("glExtGetProgramsQCOM, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glExtGetProgramsQCOM rc = %d", rc);
	}
	return ;
}


GLboolean glExtIsProgramBinaryQCOM(GLuint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLEXTISPROGRAMBINARYQCOM;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem glExtIsProgramBinaryQCOM");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glExtIsProgramBinaryQCOM, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glExtIsProgramBinaryQCOM rc = %d", rc);
	}
	return ( GLboolean)data.par2.u.value32;
}


void glExtGetProgramBinarySourceQCOM(GLuint par1, GLenum par2, GLchar *par3, GLint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLEXTGETPROGRAMBINARYSOURCEQCOM;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glExtGetProgramBinarySourceQCOM");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("glExtGetProgramBinarySourceQCOM, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glExtGetProgramBinarySourceQCOM rc = %d", rc);
	}
	return ;
}


void glStartTilingQCOM(GLuint par1, GLuint par2, GLuint par3, GLuint par4, GLbitfield par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLSTARTTILINGQCOM;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glStartTilingQCOM");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("glStartTilingQCOM, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glStartTilingQCOM rc = %d", rc);
	}
	return ;
}


void glEndTilingQCOM(GLbitfield par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_GLENDTILINGQCOM;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem glEndTilingQCOM");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("glEndTilingQCOM, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error glEndTilingQCOM rc = %d", rc);
	}
	return ;
}


EGLint eglGetError(void)
{
	int rc;
	DataStr2p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLGETERROR;
	data.callInfo.cParms = 2;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = -555;
	ALOGI("@artem eglGetError");
	pid_t pid;
	pid = getpid();
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = pid;
	ALOGI("eglGetError, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglGetError rc = %d", rc);
	}
	return ( EGLint)data.par1.u.value32;
}


EGLDisplay eglGetDisplay(EGLNativeDisplayType par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLGETDISPLAY;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem eglGetDisplay");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("eglGetDisplay, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglGetDisplay rc = %d", rc);
	}
	return ( EGLDisplay)data.par2.u.Pointer.u.linearAddr;
}


EGLBoolean eglInitialize(EGLDisplay par1, EGLint *par2, EGLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLINITIALIZE;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = -555;
	ALOGI("@artem eglInitialize");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("eglInitialize, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglInitialize rc = %d", rc);
	}
	return ( EGLBoolean)data.par4.u.value32;
}


EGLBoolean eglTerminate(EGLDisplay par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLTERMINATE;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem eglTerminate");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("eglTerminate, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglTerminate rc = %d", rc);
	}
	return ( EGLBoolean)data.par2.u.value32;
}


const char * eglQueryString(EGLDisplay par1, EGLint par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLQUERYSTRING;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem eglQueryString");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("eglQueryString, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglQueryString rc = %d", rc);
	}
	return ( char*)data.par3.u.Pointer.u.linearAddr;
}


EGLBoolean eglGetConfigs(EGLDisplay par1, EGLConfig *par2, EGLint par3, EGLint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLGETCONFIGS;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = -555;
	ALOGI("@artem eglGetConfigs");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("eglGetConfigs, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglGetConfigs rc = %d", rc);
	}
	return ( EGLBoolean)data.par5.u.value32;
}


EGLBoolean eglChooseConfig(EGLDisplay par1, const EGLint *par2, EGLConfig *par3, EGLint par4, config_size,EGLint *par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLCHOOSECONFIG;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = -555;
	ALOGI("@artem eglChooseConfig");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("eglChooseConfig, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglChooseConfig rc = %d", rc);
	}
	return ( EGLBoolean)data.par6.u.value32;
}


EGLBoolean eglGetConfigAttrib(EGLDisplay par1, EGLConfig par2, EGLint par3, EGLint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLGETCONFIGATTRIB;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = -555;
	ALOGI("@artem eglGetConfigAttrib");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("eglGetConfigAttrib, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglGetConfigAttrib rc = %d", rc);
	}
	return ( EGLBoolean)data.par5.u.value32;
}


EGLSurface eglCreateWindowSurface(EGLDisplay par1, EGLConfig par2, EGLNativeWindowType par3, const EGLint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLCREATEWINDOWSURFACE;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem eglCreateWindowSurface");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("eglCreateWindowSurface, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglCreateWindowSurface rc = %d", rc);
	}
	return ( EGLSurface)data.par5.u.Pointer.u.linearAddr;
}


EGLSurface eglCreatePbufferSurface(EGLDisplay par1, EGLConfig par2, const EGLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLCREATEPBUFFERSURFACE;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem eglCreatePbufferSurface");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("eglCreatePbufferSurface, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglCreatePbufferSurface rc = %d", rc);
	}
	return ( EGLSurface)data.par4.u.Pointer.u.linearAddr;
}


EGLSurface eglCreatePixmapSurface(EGLDisplay par1, EGLConfig par2, EGLNativePixmapType par3, const EGLint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLCREATEPIXMAPSURFACE;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem eglCreatePixmapSurface");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("eglCreatePixmapSurface, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglCreatePixmapSurface rc = %d", rc);
	}
	return ( EGLSurface)data.par5.u.Pointer.u.linearAddr;
}


EGLBoolean eglDestroySurface(EGLDisplay par1, EGLSurface par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLDESTROYSURFACE;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = -555;
	ALOGI("@artem eglDestroySurface");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("eglDestroySurface, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglDestroySurface rc = %d", rc);
	}
	return ( EGLBoolean)data.par3.u.value32;
}


EGLBoolean eglQuerySurface(EGLDisplay par1, EGLSurface par2, EGLint par3, EGLint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLQUERYSURFACE;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = -555;
	ALOGI("@artem eglQuerySurface");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("eglQuerySurface, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglQuerySurface rc = %d", rc);
	}
	return ( EGLBoolean)data.par5.u.value32;
}


EGLBoolean eglBindAPI(EGLenum par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLBINDAPI;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem eglBindAPI");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("eglBindAPI, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglBindAPI rc = %d", rc);
	}
	return ( EGLBoolean)data.par2.u.value32;
}


EGLenum eglQueryAPI(void)
{
	int rc;
	DataStr2p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLQUERYAPI;
	data.callInfo.cParms = 2;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = -555;
	ALOGI("@artem eglQueryAPI");
	pid_t pid;
	pid = getpid();
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = pid;
	ALOGI("eglQueryAPI, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglQueryAPI rc = %d", rc);
	}
	return ( EGLenum)data.par1.u.value32;
}


EGLBoolean eglWaitClient(void)
{
	int rc;
	DataStr2p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLWAITCLIENT;
	data.callInfo.cParms = 2;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = -555;
	ALOGI("@artem eglWaitClient");
	pid_t pid;
	pid = getpid();
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = pid;
	ALOGI("eglWaitClient, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglWaitClient rc = %d", rc);
	}
	return ( EGLBoolean)data.par1.u.value32;
}


EGLBoolean eglReleaseThread(void)
{
	int rc;
	DataStr2p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLRELEASETHREAD;
	data.callInfo.cParms = 2;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = -555;
	ALOGI("@artem eglReleaseThread");
	pid_t pid;
	pid = getpid();
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = pid;
	ALOGI("eglReleaseThread, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglReleaseThread rc = %d", rc);
	}
	return ( EGLBoolean)data.par1.u.value32;
}


EGLSurface eglCreatePbufferFromClientBuffer(EGLDisplay par1, EGLenum par2, EGLClientBuffer par3, EGLConfig par4, const EGLint *par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLCREATEPBUFFERFROMCLIENTBUFFER;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem eglCreatePbufferFromClientBuffer");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("eglCreatePbufferFromClientBuffer, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglCreatePbufferFromClientBuffer rc = %d", rc);
	}
	return ( EGLSurface)data.par6.u.Pointer.u.linearAddr;
}


EGLBoolean eglSurfaceAttrib(EGLDisplay par1, EGLSurface par2, EGLint par3, EGLint par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLSURFACEATTRIB;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = -555;
	ALOGI("@artem eglSurfaceAttrib");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("eglSurfaceAttrib, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglSurfaceAttrib rc = %d", rc);
	}
	return ( EGLBoolean)data.par5.u.value32;
}


EGLBoolean eglBindTexImage(EGLDisplay par1, EGLSurface par2, EGLint par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLBINDTEXIMAGE;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = -555;
	ALOGI("@artem eglBindTexImage");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("eglBindTexImage, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglBindTexImage rc = %d", rc);
	}
	return ( EGLBoolean)data.par4.u.value32;
}


EGLBoolean eglReleaseTexImage(EGLDisplay par1, EGLSurface par2, EGLint par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLRELEASETEXIMAGE;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = -555;
	ALOGI("@artem eglReleaseTexImage");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("eglReleaseTexImage, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglReleaseTexImage rc = %d", rc);
	}
	return ( EGLBoolean)data.par4.u.value32;
}


EGLBoolean eglSwapInterval(EGLDisplay par1, EGLint par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLSWAPINTERVAL;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = -555;
	ALOGI("@artem eglSwapInterval");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("eglSwapInterval, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglSwapInterval rc = %d", rc);
	}
	return ( EGLBoolean)data.par3.u.value32;
}


EGLContext eglCreateContext(EGLDisplay par1, EGLConfig par2, EGLContext par3, const EGLint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLCREATECONTEXT;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem eglCreateContext");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("eglCreateContext, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglCreateContext rc = %d", rc);
	}
	return ( EGLContext)data.par5.u.Pointer.u.linearAddr;
}


EGLBoolean eglDestroyContext(EGLDisplay par1, EGLContext par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLDESTROYCONTEXT;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = -555;
	ALOGI("@artem eglDestroyContext");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("eglDestroyContext, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglDestroyContext rc = %d", rc);
	}
	return ( EGLBoolean)data.par3.u.value32;
}


EGLBoolean eglMakeCurrent(EGLDisplay par1, EGLSurface par2, EGLSurface par3, EGLContext par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLMAKECURRENT;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = -555;
	ALOGI("@artem eglMakeCurrent");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("eglMakeCurrent, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglMakeCurrent rc = %d", rc);
	}
	return ( EGLBoolean)data.par5.u.value32;
}


EGLContext eglGetCurrentContext(void)
{
	int rc;
	DataStr2p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLGETCURRENTCONTEXT;
	data.callInfo.cParms = 2;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem eglGetCurrentContext");
	pid_t pid;
	pid = getpid();
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = pid;
	ALOGI("eglGetCurrentContext, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglGetCurrentContext rc = %d", rc);
	}
	return ( EGLContext)data.par1.u.Pointer.u.linearAddr;
}


EGLSurface eglGetCurrentSurface(EGLint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLGETCURRENTSURFACE;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem eglGetCurrentSurface");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("eglGetCurrentSurface, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglGetCurrentSurface rc = %d", rc);
	}
	return ( EGLSurface)data.par2.u.Pointer.u.linearAddr;
}


EGLDisplay eglGetCurrentDisplay(void)
{
	int rc;
	DataStr2p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLGETCURRENTDISPLAY;
	data.callInfo.cParms = 2;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem eglGetCurrentDisplay");
	pid_t pid;
	pid = getpid();
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = pid;
	ALOGI("eglGetCurrentDisplay, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglGetCurrentDisplay rc = %d", rc);
	}
	return ( EGLDisplay)data.par1.u.Pointer.u.linearAddr;
}


EGLBoolean eglQueryContext(EGLDisplay par1, EGLContext par2, EGLint par3, EGLint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLQUERYCONTEXT;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = -555;
	ALOGI("@artem eglQueryContext");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("eglQueryContext, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglQueryContext rc = %d", rc);
	}
	return ( EGLBoolean)data.par5.u.value32;
}


EGLBoolean eglWaitGL(void)
{
	int rc;
	DataStr2p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLWAITGL;
	data.callInfo.cParms = 2;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = -555;
	ALOGI("@artem eglWaitGL");
	pid_t pid;
	pid = getpid();
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = pid;
	ALOGI("eglWaitGL, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglWaitGL rc = %d", rc);
	}
	return ( EGLBoolean)data.par1.u.value32;
}


EGLBoolean eglWaitNative(EGLint par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLWAITNATIVE;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_32bit;
	data.par1.u.value32 = par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem eglWaitNative");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("eglWaitNative, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglWaitNative rc = %d", rc);
	}
	return ( EGLBoolean)data.par2.u.value32;
}


EGLBoolean eglSwapBuffers(EGLDisplay par1, EGLSurface par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLSWAPBUFFERS;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = -555;
	ALOGI("@artem eglSwapBuffers");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("eglSwapBuffers, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglSwapBuffers rc = %d", rc);
	}
	return ( EGLBoolean)data.par3.u.value32;
}


EGLBoolean eglCopyBuffers(EGLDisplay par1, EGLSurface par2, EGLNativePixmapType par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLCOPYBUFFERS;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = -555;
	ALOGI("@artem eglCopyBuffers");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("eglCopyBuffers, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglCopyBuffers rc = %d", rc);
	}
	return ( EGLBoolean)data.par4.u.value32;
}


__eglMustCastToProperFunctionPointerType eglGetProcAddress(const char *par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLGETPROCADDRESS;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem eglGetProcAddress");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("eglGetProcAddress, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglGetProcAddress rc = %d", rc);
	}
	return ( __eglMustCastToProperFunctionPointerType)data.par2.u.Pointer.u.linearAddr;
}


EGLBoolean eglLockSurfaceKHR(EGLDisplay par1, EGLSurface par2, const EGLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLLOCKSURFACEKHR;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = -555;
	ALOGI("@artem eglLockSurfaceKHR");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("eglLockSurfaceKHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglLockSurfaceKHR rc = %d", rc);
	}
	return ( EGLBoolean)data.par4.u.value32;
}


EGLBoolean eglUnlockSurfaceKHR(EGLDisplay par1, EGLSurface par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLUNLOCKSURFACEKHR;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = -555;
	ALOGI("@artem eglUnlockSurfaceKHR");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("eglUnlockSurfaceKHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglUnlockSurfaceKHR rc = %d", rc);
	}
	return ( EGLBoolean)data.par3.u.value32;
}


EGLImageKHR eglCreateImageKHR(EGLDisplay par1, EGLContext par2, EGLenum par3, EGLClientBuffer par4, const EGLint *par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLCREATEIMAGEKHR;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_LinAddr;
	data.par6.u.Pointer.size = 0x10000;
	data.par6.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem eglCreateImageKHR");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("eglCreateImageKHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglCreateImageKHR rc = %d", rc);
	}
	return ( EGLImageKHR)data.par6.u.Pointer.u.linearAddr;
}


EGLBoolean eglDestroyImageKHR(EGLDisplay par1, EGLImageKHR par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLDESTROYIMAGEKHR;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = -555;
	ALOGI("@artem eglDestroyImageKHR");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("eglDestroyImageKHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglDestroyImageKHR rc = %d", rc);
	}
	return ( EGLBoolean)data.par3.u.value32;
}


EGLSyncKHR eglCreateSyncKHR(EGLDisplay par1, EGLenum par2, const EGLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLCREATESYNCKHR;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem eglCreateSyncKHR");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("eglCreateSyncKHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglCreateSyncKHR rc = %d", rc);
	}
	return ( EGLSyncKHR)data.par4.u.Pointer.u.linearAddr;
}


EGLBoolean eglDestroySyncKHR(EGLDisplay par1, EGLSyncKHR par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLDESTROYSYNCKHR;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = -555;
	ALOGI("@artem eglDestroySyncKHR");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("eglDestroySyncKHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglDestroySyncKHR rc = %d", rc);
	}
	return ( EGLBoolean)data.par3.u.value32;
}


EGLint eglClientWaitSyncKHR(EGLDisplay par1, EGLSyncKHR par2, EGLint par3, EGLTimeKHR par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLCLIENTWAITSYNCKHR;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_64bit;
	data.par4.u.value64 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = -555;
	ALOGI("@artem eglClientWaitSyncKHR");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("eglClientWaitSyncKHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglClientWaitSyncKHR rc = %d", rc);
	}
	return ( EGLint)data.par5.u.value32;
}


EGLBoolean eglSignalSyncKHR(EGLDisplay par1, EGLSyncKHR par2, EGLenum par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLSIGNALSYNCKHR;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = -555;
	ALOGI("@artem eglSignalSyncKHR");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("eglSignalSyncKHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglSignalSyncKHR rc = %d", rc);
	}
	return ( EGLBoolean)data.par4.u.value32;
}


EGLBoolean eglGetSyncAttribKHR(EGLDisplay par1, EGLSyncKHR par2, EGLint par3, EGLint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLGETSYNCATTRIBKHR;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = -555;
	ALOGI("@artem eglGetSyncAttribKHR");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("eglGetSyncAttribKHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglGetSyncAttribKHR rc = %d", rc);
	}
	return ( EGLBoolean)data.par5.u.value32;
}


EGLSyncNV eglCreateFenceSyncNV(EGLDisplay par1, EGLenum par2, const EGLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLCREATEFENCESYNCNV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem eglCreateFenceSyncNV");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("eglCreateFenceSyncNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglCreateFenceSyncNV rc = %d", rc);
	}
	return ( EGLSyncNV)data.par4.u.Pointer.u.linearAddr;
}


EGLBoolean eglDestroySyncNV(EGLSyncNV par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLDESTROYSYNCNV;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem eglDestroySyncNV");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("eglDestroySyncNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglDestroySyncNV rc = %d", rc);
	}
	return ( EGLBoolean)data.par2.u.value32;
}


EGLBoolean eglFenceNV(EGLSyncNV par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLFENCENV;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem eglFenceNV");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("eglFenceNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglFenceNV rc = %d", rc);
	}
	return ( EGLBoolean)data.par2.u.value32;
}


EGLint eglClientWaitSyncNV(EGLSyncNV par1, EGLint par2, EGLTimeNV par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLCLIENTWAITSYNCNV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_64bit;
	data.par3.u.value64 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = -555;
	ALOGI("@artem eglClientWaitSyncNV");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("eglClientWaitSyncNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglClientWaitSyncNV rc = %d", rc);
	}
	return ( EGLint)data.par4.u.value32;
}


EGLBoolean eglSignalSyncNV(EGLSyncNV par1, EGLenum par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLSIGNALSYNCNV;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = -555;
	ALOGI("@artem eglSignalSyncNV");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("eglSignalSyncNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglSignalSyncNV rc = %d", rc);
	}
	return ( EGLBoolean)data.par3.u.value32;
}


EGLBoolean eglGetSyncAttribNV(EGLSyncNV par1, EGLint par2, EGLint *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLGETSYNCATTRIBNV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = -555;
	ALOGI("@artem eglGetSyncAttribNV");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("eglGetSyncAttribNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglGetSyncAttribNV rc = %d", rc);
	}
	return ( EGLBoolean)data.par4.u.value32;
}


EGLSurface eglCreatePixmapSurfaceHI(EGLDisplay par1, EGLConfig par2, struct EGLClientPixmapHI *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLCREATEPIXMAPSURFACEHI;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem eglCreatePixmapSurfaceHI");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("eglCreatePixmapSurfaceHI, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglCreatePixmapSurfaceHI rc = %d", rc);
	}
	return ( EGLSurface)data.par4.u.Pointer.u.linearAddr;
}


EGLImageKHR eglCreateDRMImageMESA(EGLDisplay par1, const EGLint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLCREATEDRMIMAGEMESA;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem eglCreateDRMImageMESA");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("eglCreateDRMImageMESA, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglCreateDRMImageMESA rc = %d", rc);
	}
	return ( EGLImageKHR)data.par3.u.Pointer.u.linearAddr;
}


EGLBoolean eglExportDRMImageMESA(EGLDisplay par1, EGLImageKHR par2, EGLint *par3, EGLint *par4, EGLint *par5)
{
	int rc;
	DataStr7p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLEXPORTDRMIMAGEMESA;
	data.callInfo.cParms = 7;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t)par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = -555;
	ALOGI("@artem eglExportDRMImageMESA");
	pid_t pid;
	pid = getpid();
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = pid;
	ALOGI("eglExportDRMImageMESA, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglExportDRMImageMESA rc = %d", rc);
	}
	return ( EGLBoolean)data.par6.u.value32;
}


EGLBoolean eglPostSubBufferNV(EGLDisplay par1, EGLSurface par2, EGLint par3, EGLint par4, EGLint par5, EGLint par6)
{
	int rc;
	DataStr8p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLPOSTSUBBUFFERNV;
	data.callInfo.cParms = 8;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = par5;
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = par6;
	data.par7.type = VMMDevHGCMParmType_32bit;
	data.par7.u.value32 = -555;
	ALOGI("@artem eglPostSubBufferNV");
	pid_t pid;
	pid = getpid();
	data.par8.type = VMMDevHGCMParmType_32bit;
	data.par8.u.value32 = pid;
	ALOGI("eglPostSubBufferNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglPostSubBufferNV rc = %d", rc);
	}
	return ( EGLBoolean)data.par7.u.value32;
}


EGLBoolean eglQuerySurfacePointerANGLE(EGLDisplay par1, EGLSurface par2, EGLint par3, void **par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLQUERYSURFACEPOINTERANGLE;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)*par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = -555;
	ALOGI("@artem eglQuerySurfacePointerANGLE");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("eglQuerySurfacePointerANGLE, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglQuerySurfacePointerANGLE rc = %d", rc);
	}
	return ( EGLBoolean)data.par5.u.value32;
}


EGLuint64NV eglGetSystemTimeFrequencyNV(void)
{
	int rc;
	DataStr2p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLGETSYSTEMTIMEFREQUENCYNV;
	data.callInfo.cParms = 2;
	data.par1.type =VMMDevHGCMParmType_64bit;
	data.par1.u.value32 = -555;
	ALOGI("@artem eglGetSystemTimeFrequencyNV");
	pid_t pid;
	pid = getpid();
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = pid;
	ALOGI("eglGetSystemTimeFrequencyNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglGetSystemTimeFrequencyNV rc = %d", rc);
	}
	return ( EGLuint64NV)data.par1.u.value64;
}


EGLuint64NV eglGetSystemTimeNV(void)
{
	int rc;
	DataStr2p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLGETSYSTEMTIMENV;
	data.callInfo.cParms = 2;
	data.par1.type =VMMDevHGCMParmType_64bit;
	data.par1.u.value32 = -555;
	ALOGI("@artem eglGetSystemTimeNV");
	pid_t pid;
	pid = getpid();
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = pid;
	ALOGI("eglGetSystemTimeNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglGetSystemTimeNV rc = %d", rc);
	}
	return ( EGLuint64NV)data.par1.u.value64;
}


EGLStreamKHR eglCreateStreamKHR(EGLDisplay par1, const EGLint *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLCREATESTREAMKHR;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem eglCreateStreamKHR");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("eglCreateStreamKHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglCreateStreamKHR rc = %d", rc);
	}
	return ( EGLStreamKHR)data.par3.u.Pointer.u.linearAddr;
}


EGLBoolean eglDestroyStreamKHR(EGLDisplay par1, EGLStreamKHR par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLDESTROYSTREAMKHR;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = -555;
	ALOGI("@artem eglDestroyStreamKHR");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("eglDestroyStreamKHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglDestroyStreamKHR rc = %d", rc);
	}
	return ( EGLBoolean)data.par3.u.value32;
}


EGLBoolean eglStreamAttribKHR(EGLDisplay par1, EGLStreamKHR par2, EGLenum par3, EGLint par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLSTREAMATTRIBKHR;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = -555;
	ALOGI("@artem eglStreamAttribKHR");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("eglStreamAttribKHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglStreamAttribKHR rc = %d", rc);
	}
	return ( EGLBoolean)data.par5.u.value32;
}


EGLBoolean eglQueryStreamKHR(EGLDisplay par1, EGLStreamKHR par2, EGLenum par3, EGLint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLQUERYSTREAMKHR;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = -555;
	ALOGI("@artem eglQueryStreamKHR");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("eglQueryStreamKHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglQueryStreamKHR rc = %d", rc);
	}
	return ( EGLBoolean)data.par5.u.value32;
}


EGLBoolean eglQueryStreamu64KHR(EGLDisplay par1, EGLStreamKHR par2, EGLenum par3, EGLuint64KHR *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLQUERYSTREAMU64KHR;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = -555;
	ALOGI("@artem eglQueryStreamu64KHR");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("eglQueryStreamu64KHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglQueryStreamu64KHR rc = %d", rc);
	}
	return ( EGLBoolean)data.par5.u.value32;
}


EGLBoolean eglStreamConsumerGLTextureExternalKHR(EGLDisplay par1, EGLStreamKHR par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLSTREAMCONSUMERGLTEXTUREEXTERNALKHR;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = -555;
	ALOGI("@artem eglStreamConsumerGLTextureExternalKHR");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("eglStreamConsumerGLTextureExternalKHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglStreamConsumerGLTextureExternalKHR rc = %d", rc);
	}
	return ( EGLBoolean)data.par3.u.value32;
}


EGLBoolean eglStreamConsumerAcquireKHR(EGLDisplay par1, EGLStreamKHR par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLSTREAMCONSUMERACQUIREKHR;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = -555;
	ALOGI("@artem eglStreamConsumerAcquireKHR");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("eglStreamConsumerAcquireKHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglStreamConsumerAcquireKHR rc = %d", rc);
	}
	return ( EGLBoolean)data.par3.u.value32;
}


EGLBoolean eglStreamConsumerReleaseKHR(EGLDisplay par1, EGLStreamKHR par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLSTREAMCONSUMERRELEASEKHR;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = -555;
	ALOGI("@artem eglStreamConsumerReleaseKHR");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("eglStreamConsumerReleaseKHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglStreamConsumerReleaseKHR rc = %d", rc);
	}
	return ( EGLBoolean)data.par3.u.value32;
}


EGLSurface eglCreateStreamProducerSurfaceKHR(EGLDisplay par1, EGLConfig par2, EGLStreamKHR par3, const EGLint *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLCREATESTREAMPRODUCERSURFACEKHR;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_LinAddr;
	data.par5.u.Pointer.size = 0x10000;
	data.par5.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem eglCreateStreamProducerSurfaceKHR");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("eglCreateStreamProducerSurfaceKHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglCreateStreamProducerSurfaceKHR rc = %d", rc);
	}
	return ( EGLSurface)data.par5.u.Pointer.u.linearAddr;
}


EGLBoolean eglQueryStreamTimeKHR(EGLDisplay par1, EGLStreamKHR par2, EGLenum par3, EGLTimeKHR *par4)
{
	int rc;
	DataStr6p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLQUERYSTREAMTIMEKHR;
	data.callInfo.cParms = 6;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t)par4;
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = -555;
	ALOGI("@artem eglQueryStreamTimeKHR");
	pid_t pid;
	pid = getpid();
	data.par6.type = VMMDevHGCMParmType_32bit;
	data.par6.u.value32 = pid;
	ALOGI("eglQueryStreamTimeKHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglQueryStreamTimeKHR rc = %d", rc);
	}
	return ( EGLBoolean)data.par5.u.value32;
}


EGLNativeFileDescriptorKHR eglGetStreamFileDescriptorKHR(EGLDisplay par1, EGLStreamKHR par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLGETSTREAMFILEDESCRIPTORKHR;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = -555;
	ALOGI("@artem eglGetStreamFileDescriptorKHR");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("eglGetStreamFileDescriptorKHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglGetStreamFileDescriptorKHR rc = %d", rc);
	}
	return ( EGLNativeFileDescriptorKHR)data.par3.u.value32;
}


EGLStreamKHR eglCreateStreamFromFileDescriptorKHR(EGLDisplay par1, EGLNativeFileDescriptorKHR par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLCREATESTREAMFROMFILEDESCRIPTORKHR;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem eglCreateStreamFromFileDescriptorKHR");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("eglCreateStreamFromFileDescriptorKHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglCreateStreamFromFileDescriptorKHR rc = %d", rc);
	}
	return ( EGLStreamKHR)data.par3.u.Pointer.u.linearAddr;
}


EGLint eglWaitSyncKHR(EGLDisplay par1, EGLSyncKHR par2, EGLint par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLWAITSYNCKHR;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = -555;
	ALOGI("@artem eglWaitSyncKHR");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("eglWaitSyncKHR, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglWaitSyncKHR rc = %d", rc);
	}
	return ( EGLint)data.par4.u.value32;
}


EGLBoolean eglQueryNativeDisplayNV(EGLDisplay par1, EGLNativeDisplayType *par2)
{
	int rc;
	DataStr4p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLQUERYNATIVEDISPLAYNV;
	data.callInfo.cParms = 4;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = -555;
	ALOGI("@artem eglQueryNativeDisplayNV");
	pid_t pid;
	pid = getpid();
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = pid;
	ALOGI("eglQueryNativeDisplayNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglQueryNativeDisplayNV rc = %d", rc);
	}
	return ( EGLBoolean)data.par3.u.value32;
}


EGLBoolean eglQueryNativeWindowNV(EGLDisplay par1, EGLSurface par2, EGLNativeWindowType *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLQUERYNATIVEWINDOWNV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = -555;
	ALOGI("@artem eglQueryNativeWindowNV");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("eglQueryNativeWindowNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglQueryNativeWindowNV rc = %d", rc);
	}
	return ( EGLBoolean)data.par4.u.value32;
}


EGLBoolean eglQueryNativePixmapNV(EGLDisplay par1, EGLSurface par2, EGLNativePixmapType *par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLQUERYNATIVEPIXMAPNV;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = -555;
	ALOGI("@artem eglQueryNativePixmapNV");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("eglQueryNativePixmapNV, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglQueryNativePixmapNV rc = %d", rc);
	}
	return ( EGLBoolean)data.par4.u.value32;
}


void eglSetBlobCacheFuncsANDROID(EGLDisplay par1, EGLSetBlobFuncANDROID par2, EGLGetBlobFuncANDROID par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLSETBLOBCACHEFUNCSANDROID;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_LinAddr;
	data.par3.u.Pointer.size = 0x10000;
	data.par3.u.Pointer.u.linearAddr = (uintptr_t)par3;
	data.par4.type = VMMDevHGCMParmType_LinAddr;
	data.par4.u.Pointer.size = 0x10000;
	data.par4.u.Pointer.u.linearAddr = (uintptr_t) NULL;
	ALOGI("@artem eglSetBlobCacheFuncsANDROID");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("eglSetBlobCacheFuncsANDROID, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglSetBlobCacheFuncsANDROID rc = %d", rc);
	}
	return ;
}


EGLint eglDupNativeFenceFDANDROID(EGLDisplay par1)
{
	int rc;
	DataStr3p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLDUPNATIVEFENCEFDANDROID;
	data.callInfo.cParms = 3;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_32bit;
	data.par2.u.value32 = -555;
	ALOGI("@artem eglDupNativeFenceFDANDROID");
	pid_t pid;
	pid = getpid();
	data.par3.type = VMMDevHGCMParmType_32bit;
	data.par3.u.value32 = pid;
	ALOGI("eglDupNativeFenceFDANDROID, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglDupNativeFenceFDANDROID rc = %d", rc);
	}
	return ( EGLint)data.par2.u.value32;
}


EGLBoolean eglPresentationTimeANDROID(EGLDisplay par1, EGLSurface par2, EGLnsecsANDROID par3)
{
	int rc;
	DataStr5p data;
	data.callInfo.result = VINF_SUCCESS;
	data.callInfo.u32ClientID = gClientID;
	data.callInfo.u32Function = REDIRECT_EGLPRESENTATIONTIMEANDROID;
	data.callInfo.cParms = 5;
	data.par1.type = VMMDevHGCMParmType_LinAddr;
	data.par1.u.Pointer.size = 0x10000;
	data.par1.u.Pointer.u.linearAddr = (uintptr_t)par1;
	data.par2.type = VMMDevHGCMParmType_LinAddr;
	data.par2.u.Pointer.size = 0x10000;
	data.par2.u.Pointer.u.linearAddr = (uintptr_t)par2;
	data.par3.type = VMMDevHGCMParmType_64bit;
	data.par3.u.value64 = par3;
	data.par4.type = VMMDevHGCMParmType_32bit;
	data.par4.u.value32 = -555;
	ALOGI("@artem eglPresentationTimeANDROID");
	pid_t pid;
	pid = getpid();
	data.par5.type = VMMDevHGCMParmType_32bit;
	data.par5.u.value32 = pid;
	ALOGI("eglPresentationTimeANDROID, gClientID = %d, drv_fd = %d, deb_fd = %d", gClientID, drv_fd, deb_fd);
	rc = ioctl(drv_fd, VBOXGUEST_IOCTL_HGCM_CALL(10*sizeof(data)), &data);
	if ( rc != 0 )
	{
		ALOGI("@artem error eglPresentationTimeANDROID rc = %d", rc);
	}
	return ( EGLBoolean)data.par4.u.value32;
}


