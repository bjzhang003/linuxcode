/*************************************************************************
    > File Name: four_005.c
    > Author: bjzhang03
    > Mail: bjzhang03@outlook.com
    > Created Time: 2016年09月22日 星期四 18时58分13秒
 ************************************************************************/

#include<stdio.h>
#include "apue.h"
#include<fcntl.h>

int main(void)
{
	if(open("tempfile",O_RDWR)<0)
		err_sys("open error");
	if(unlink("tempfile")<0)
		err_sys("unlink error");
	printf("file unlinked\n");
	sleep(15);
	printf("done\n");
	exit(0);
}
