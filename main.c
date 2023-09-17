#include <stdio.h>
#include <unistd.h>

int main() {
    fork();
    printf("Using Multi fork() calls.\n");
    fork();
    fork();

}
