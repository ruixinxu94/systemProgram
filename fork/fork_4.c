#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>


int main(int argc, char* argv[]){
	int code_1 = fork();
	if (code_1 > 0)
	{
		fork();
		fork();
		fork();
	} else {
		int code_2 = fork();
		if ( code_2 == 0) 
		{
			fork();
			fork();
		}

	}

	printf("\t|Using Multiple fork() system call!\n");
	return 0;
}
