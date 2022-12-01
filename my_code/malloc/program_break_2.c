#include <stdio.h>
#include <unistd.h>
int main(int argc, char* argv[])
{
    int *p1 = sbrk(0);
    int *p2= sbrk(0x1000);
    int *p3 = sbrk(0);
    int *p4 = sbrk(-0x1000);
    int *p5 = sbrk(0);
    printf("p1 is %p\r\n",p1);
    printf("p2 is %p\r\n",p2);
    printf("p3 is %p\r\n",p3);
    printf("p4 is %p\r\n",p4);
    printf("p5 is %p\r\n",p5);

    printf("pid : %d\n", getpid());

    while (1);
    return 0;
}
