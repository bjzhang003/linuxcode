/*************************************************************************
    > File Name: one_001.cpp
    > Author: bjzhang03
    > Mail: bjzhang03@outlook.com
    > Created Time: 2016年09月08日 星期四 15时34分48秒
 ************************************************************************/

#include"apue.h"
#include<dirent.h>
int main(int argc,char *argv[])
{
	DIR *dp;
	struct dirent *dirp;
	
	if(argc!=2)
		err_quit("usage: ls directory_name");

	if((dp==opendir(argv[1]))==NULL)
		err_sys("can't open %s argv[1]");
	while((dirp==readdir(dp))!=NULL)
		printf("%s\n",dirp->d_name);

	closedir(dp);
	exit(0);
}
