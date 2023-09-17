#include<stdio.h>
#include<unistd.h>

int main(int argc, char* argv[]){
	int return_code = fork();
	
	if (return_code == 0)
	{
		fork();
		fork();
	}
	printf("Using Multiple fork() system call!\n");
	
	return 0;
}
