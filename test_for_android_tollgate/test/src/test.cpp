#define TEST_FOR_ANDROID_TOLLGATE 1 //  it needs for unincluding function void pre_func(void) in number.h
#include <number.h>



int main()
{
	int fd;
	fd = open("/dev/vboxuser", O_RDWR);
	if ( fd == -1 )
	{
		perror("open:");
		return -1;
	}
	int rc;
	uint32_t q32ClientId;
	VBoxGuestHGCMConnectInfo Info;
	Info.result = VERR_WRONG_ORDER;
	Info.Loc.type = VMMDevHGCMLoc_LocalHost_Existing;
	RT_ZERO(Info.Loc.u);
	strcpy(Info.Loc.u.host.achName, "TestToolgateSvc");
	Info.u32ClientID = UINT32_MAX;  /* try make valgrind shut up. */
    rc = ioctl(fd, VBOXGUEST_IOCTL_HGCM_CONNECT, &Info);
	printf("rc = %d  \n", rc);
	if (RT_SUCCESS(rc))
	{
		rc = Info.result;
		if (RT_SUCCESS(rc))
		q32ClientId = Info.u32ClientID;
	}
	else
		return rc;
////////////////////////////////////////////////////////////////////
	DataStr1p Msg;
	Msg.callInfo.result = VERR_WRONG_ORDER;
	Msg.callInfo.u32ClientID = q32ClientId;
	Msg.callInfo.u32Function = 0;
	Msg.callInfo.cParms = 1;

	char *buf;
	buf = (char *)malloc( 24*0x00100000-1);
	memcpy(buf, "buffer", 8);
	Msg.par1.type = VMMDevHGCMParmType_LinAddr;
	Msg.par1.u.Pointer.size = 24*0x00100000-1;
	Msg.par1.u.Pointer.u.linearAddr = (uintptr_t) buf;
	rc = ioctl(fd, VBOXGUEST_IOCTL_HGCM_CALL(sizeof(Msg)), &Msg);
	printf("buf_after1 = |%s|\n", (char *)buf);
	printf("rc = %d\n", rc);
/////////////////////////////////////////////////////////////////////
	DataStr1p Msg2;
	Msg2.callInfo.result = VERR_WRONG_ORDER;
	Msg2.callInfo.u32ClientID = q32ClientId;
	Msg2.callInfo.u32Function = 0;
	Msg2.callInfo.cParms = 1;

	char *buf2;
	buf2 = (char *)malloc( 24*0x00100000);
	memcpy(buf2, "buffer", 8);
	
	Msg.par1.type = VMMDevHGCMParmType_LinAddr;
	Msg.par1.u.Pointer.size = 24*0x00100000;
	Msg.par1.u.Pointer.u.linearAddr = (uintptr_t) buf2;
	rc = ioctl(fd, VBOXGUEST_IOCTL_HGCM_CALL(sizeof(Msg2)), &Msg2);
	printf("buf_after1 = |%s|\n", (char *)buf2);
	printf("rc = %d\n", rc);
///////////////////////////////////////////////////////////////////////////
	DataStr1p Msg3;
	Msg3.callInfo.result = VERR_WRONG_ORDER;
	Msg3.callInfo.u32ClientID = q32ClientId;
	Msg3.callInfo.u32Function = 0;
	Msg3.callInfo.cParms = 1;

	char *buf3;
	buf3 = (char *)malloc( 24*0x00100000+1);
	memcpy(buf3, "buffer", 8);

	Msg.par1.type = VMMDevHGCMParmType_LinAddr;
	Msg.par1.u.Pointer.size = 24*0x00100000+1;
	Msg.par1.u.Pointer.u.linearAddr = (uintptr_t) buf3;
	rc = ioctl(fd, VBOXGUEST_IOCTL_HGCM_CALL(sizeof(Msg3)), &Msg3);
	printf("buf_after1 = |%s|\n", (char *)buf3);
	printf("rc = %d\n", rc);
	return rc;
}
