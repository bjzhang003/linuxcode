/*************************************************************************
    > File Name: one_002.c
    > Author: bjzhang03
    > Mail: bjzhang03@outlook.com
    > Created Time: 2016年09月09日 星期五 09时21分49秒
 ************************************************************************/
/*
 *从标准输入获得数据，然后输出到标准输出
 * */
#include<stdio.h>
#include"apue.h"
#define BUFFSIZE 4096

int main()
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
