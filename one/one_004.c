/*************************************************************************
    > File Name: one_004.c
    > Author: bjzhang03
    > Mail: bjzhang03@outlook.com
    > Created Time: 2016年09月09日 星期五 09时38分49秒
 ************************************************************************/

/*
 *获取进程的ID
 * */
#include<stdio.h>
#include"apue.h"


int main(void)
{
	printf("hello world from process ID %d\n",getpid());
	exit(0);
}
