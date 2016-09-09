/*************************************************************************
    > File Name: one_003.c
    > Author: bjzhang03
    > Mail: bjzhang03@outlook.com
    > Created Time: 2016年09月09日 星期五 09时32分07秒
 ************************************************************************/

/*
 *实现了文件的复制操作
 * */
#include<stdio.h>
#include"apue.h"

int main(void)
{
	int c;
	while((c=getc(stdin))!=EOF)
		if(putc(c,stdout)==EOF)
			err_sys("output error");

	if(ferror(stdin))
		err_sys("input error");
	exit(0);
}
