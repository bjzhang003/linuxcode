/*************************************************************************
    > File Name: four_003.c
    > Author: bjzhang03
    > Mail: bjzhang03@outlook.com
    > Created Time: 2016年09月22日 星期四 18时40分56秒
 ************************************************************************/

#include<stdio.h>
#include "apue.h"
#include <fcntl.h>

#define RWRWRW (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)

int main(void)
{
	umask(0);
	if(creat("foo.test",RWRWRW)<0)
		err_sys("creat error for foo.test");
	umask(S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH);
	if(creat("bar.test",RWRWRW)<0)
		err_sys("creat error for bar");
	exit(0);
}
