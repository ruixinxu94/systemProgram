#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(int argc, char* argv[]){
    int return_code =fork();
    if (return_code != 0){
        fork();
        fork();
        fork();
    }
    printf("\t|Message printed by process with PID <<%d>> whose parent PID <<%d>>.\n",getpid(),getppid());
}
