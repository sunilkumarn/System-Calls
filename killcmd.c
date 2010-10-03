#include <stdio.h>
main (int argc, char * argv[])
{
	if(kill(atoi(argv[1]),9)!=0) printf("Process does not exist\n");
}
