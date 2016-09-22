/*************************************************************************
    > File Name: four_004.c
    > Author: bjzhang03
    > Mail: bjzhang03@outlook.com
    > Created Time: 2016年09月22日 星期四 18时50分13秒
 ************************************************************************/

#include<stdio.h>
#include "apue.h"
int main(void)
{
	struct stat statbuf;

	/*turn on set-group-ID and turn off group-execute*/
	if(stat("foo.test",&statbuf)<0)
		err_sys("stat error for foo");
	if(chmod("foo.test",(statbuf.st_mode&~S_IXGRP)|S_ISGID)<0)
		err_sys("chmod error for foo.test");

	/*set absolute mode to "rw-r--r--" */
	if(chmod("bar.test",S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH)<0)
		err_sys("chmod error for bar.test");
	exit(0);
}
