#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    printf("\t|Starting process PID <<%d>> whose parent PID <<%d>>.\n",getpid(),getppid());
    printf("\t|----------------------------------------------------.\n");
     char* command = "ps";
     char* argument_list[] = {"ps","-FH",NULL};
     printf("\t|Before calling execvp()\n");
     // Calling the execvp() system call
     int status_code = execvp(command, argument_list);
     if (status_code == -1) {
	        printf("\t|Process with <<%d>> did not terminate correctly!\n\t|",getpid());
			perror("\t|");
			exit(1);
	}
    printf("\t|This line will not be printed if execvp() runs correctly\n");
    return 0;
}
