//#include <unistd.h>
main(int argc,char *argv[])
{
		int i;
		char *args[10];
		for(i=1;argc>1;i++,argc--)
				args[i]=argv[i];
		args[0] = "rm";
		args[i] = (char*)0;
		execvp("rm", args);
}
                
