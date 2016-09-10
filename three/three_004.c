/*************************************************************************
    > File Name: three_004.c
    > Author: bjzhang03
    > Mail: bjzhang03@outlook.com
    > Created Time: 2016年09月10日 星期六 16时29分29秒
 ************************************************************************/

#include<stdio.h>
#include"apue.h"
#include<fcntl.h>

int main(int argc,char * argv[])
{
	int val;
	if(argc!=2)
		err_quit("usage:unix.test <descriptor #>");

	if((val = fcntl(atoi(argv[1]),F_GETFL,0))<0)
		err_sys("fcntl error for fd %d",atoi(argv[1]));

	switch(val & O_ACCMODE)
	{
		case O_RDONLY:
			printf("read only");
			break;

		case O_WRONLY:
			printf("write only");
			break;

		case O_RDWR:
			printf("read write");
			break;

		default:
			err_dump("unknown access mode");
	}

	if(val & O_APPEND)
		printf(",append");
	if(val & O_NONBLOCK)
		printf(",nonblocking");

#if defined(O_SYNC)
	if(val & O_SYNC)
		printf(",synchronous writes");
#endif

#if !defined(_POSIX_C_SOURCE) && defined(O_FSYNC)
	if(val & O_FSYNC)
		printf(",synchronous writes");
#endif
	putchar('\n');
	exit(0);
}
