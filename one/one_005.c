/*************************************************************************
    > File Name: one_005.c
    > Author: bjzhang03
    > Mail: bjzhang03@outlook.com
    > Created Time: 2016年09月09日 星期五 09时43分38秒
 ************************************************************************/

/*
 *从键盘得到输入，然后输出运行结果
 * */
#include<stdio.h>
#include"apue.h"
#include<sys/wait.h>

int main(void)
{
	char buf[MAXLINE]; /*from apue.h*/
	pid_t pid;
	int status;

	printf("%%");/*print prompt (print requires %% to print)*/
	while(fgets(buf,MAXLINE,stdin)!=NULL)
	{
		if(buf[strlen(buf)-1]=='\n')
			buf[strlen(buf)-1]=0;/*replace newline with null*/

		if((pid=fork())<0)
		{
			err_sys("fork error");
		}
		else if(pid ==0)
		{
			/*child*/
			execlp(buf,buf,(char *)0);
			/*
			 * 执行结束之后，推出子进程
			 * */
			err_ret("couldn't execute:%s",buf);
			exit(127);
		}

		/*parent*/
		if((pid=waitpid(pid,&status,0))<0)
			err_sys("waitpid error");
		printf("%%");
	}
	exit(0);

}
