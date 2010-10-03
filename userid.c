#include<stdio.h>
main(int argc,char *argv[])
{
	char *args[]={"id","-u",argv[1],(char *)0};
	execvp("id",args);
}


