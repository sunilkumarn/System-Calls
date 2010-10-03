#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
main(int argc,char *argv[1])
{
char buf[BUFSIZ];
int n,fo,fi;
fi=open(argv[1],O_RDONLY);
fo=creat(argv[2],00070);
while((n = read(fi, buf, BUFSIZ))>0)
	write(fo, buf, n);
}

