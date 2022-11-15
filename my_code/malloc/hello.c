#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define MAX 1024
int main(int argc, char* argv[])
{

    int *p = sbrk(0);
    int *old = p;


    p = sbrk(MAX*MAX);


    printf("old : %p \np : %p \n", old, p);
    int *new = sbrk(0);
    
    printf("p_new : %p\n", new);
    printf("pid : %d\n", getpid());

    while (1);
    sbrk(-MAX*MAX);
    return 0;
}
