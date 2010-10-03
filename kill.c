#include<stdio.h>
main()
{
	int pid;
	printf("Enter the PID\n");
	scanf("%d",&pid);
	if(kill(pid,9)!=0) printf("Process does not exist\n");
}

