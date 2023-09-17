#include<stdio.h>
#include<unistd.h>

int main(int argc, char* argv[]){
    fork();
    printf("Using Multi fork() calls.\n");
    fork();
    fork();
}
