/*************************************************************************
    > File Name: three_003.c
    > Author: bjzhang03
    > Mail: bjzhang03@outlook.com
    > Created Time: 2016年09月10日 星期六 16时19分52秒
 ************************************************************************/

#include<stdio.h>
#include"apue.h"

#define BUFFSIZE 4096

int main(void)
{
	int n;
	char buf[BUFFSIZE];

	while((n=read(STDIN_FILENO,buf,BUFFSIZE))>0)
		if(write(STDOUT_FILENO,buf,n)!=n)
			err_sys("write error");

	if(n<0)
		err_sys("read error");
	exit(0);
}
