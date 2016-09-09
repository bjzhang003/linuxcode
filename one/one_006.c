/*************************************************************************
    > File Name: one_006.c
    > Author: bjzhang03
    > Mail: bjzhang03@outlook.com
    > Created Time: 2016年09月09日 星期五 10时11分57秒
 ************************************************************************/

#include<stdio.h>
#include"apue.h"
#include<errno.h>

int main(int argc,char *argv[])
{
	fprintf(stderr,"EACCES:%s\n",strerror(EACCES));
	errno=ENOENT;

	perror(argv[0]);
	exit(0);
}
