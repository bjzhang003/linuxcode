/*************************************************************************
    > File Name: three_002.c
    > Author: bjzhang03
    > Mail: bjzhang03@outlook.com
    > Created Time: 2016年09月10日 星期六 16时09分17秒
 ************************************************************************/

#include<stdio.h>
#include"apue.h"
#include<fcntl.h>

char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";

int main()
{
	int fd;

	if((fd = creat("file.hole.test",FILE_MODE))<0)
		err_sys("creat error");
	
	if(write(fd,buf1,10)!=10)
		err_sys("buf1 write error");
	/*offset now = 10*/
	if(lseek(fd,16384,SEEK_SET)==-1)
		err_sys("lseek error");
	/*offset new = 16384*/
	if(write(fd,buf2,10)!=10)
		err_sys("buf2 write error");
	/*offset new = 16394*/
	exit(0);
}
