#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(int argc, char *argv[]) {
    printf("\t|Starting process PID <<%d>> whose parent PID <<%d>>.\n", getpid(), getppid());
    printf("\t|----------------------------------------------------.\n");
    for (int i = 0; i < 3; ++i) {
        int return_code = fork();

        if (return_code == 0) {// code executed by child
            printf("\t|Child process PID <<%d>> created by parent PID <<%d>>.\n", getpid(), getppid());
            printf("\t|----------------------------------------------------.\n");
            sleep(rand() % 10);
        } else {
            int w = wait(NULL);
            if (w == -1) {
                perror("\t|Error waiting for child to terminate!\n\t|");
                exit(EXIT_FAILURE);
            } else {
                printf("\t|Child process with PID <<%d>> terminates successfully!\n", w);
            }
        }
    }
    return 0;
}
