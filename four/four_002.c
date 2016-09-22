/*************************************************************************
    > File Name: four_002.c
    > Author: bjzhang03
    > Mail: bjzhang03@outlook.com
    > Created Time: 2016年09月22日 星期四 18时30分17秒
 ************************************************************************/

#include<stdio.h>
#include "apue.h"
#include <fcntl.h>

int main(int argc,char *argv[])
{
	if(argc!=2)
		err_quit("usage:a.unix.test <pathname>");
	if(access(argv[1],R_OK)<0)
		err_ret("access error for %s",argv[1]);
	else
		printf("read access OK\n");

	if(open(argv[1],O_RDONLY)<0)
		err_ret("open error for %s",argv[1]);
	else
		printf("open for reading OK\n");
	exit(0);
}
