/*************************************************************************
    > File Name: three_003.c
    > Author: bjzhang03
    > Mail: bjzhang03@outlook.com
    > Created Time: 2016年09月10日 星期六 16时03分44秒
 ************************************************************************/

#include<stdio.h>
#include"apue.h"

int main(void)
{
	if(lseek(STDIN_FILENO,0,SEEK_CUR)==-1)
		printf("cannot seek\n");
	else
		printf("seek OK\n");
	exit(0);
}
