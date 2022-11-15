//
// Created by liode on 2022/11/15.
//

#include "stdio.h"
#include "unistd.h"
int main(void){
    printf("now program break is 0x%p\n",sbrk(0));
    printf("now program break is 0x%p\n",sbrk(0));
    printf("now program break is 0x%p\n",sbrk(0));
    printf("now program break is 0x%p\n",sbrk(0));
    printf("now program break is 0x%p\n",sbrk(0));
    sbrk(0x1000);
    printf("after increse 0x1000 program break is 0x%p\n",sbrk(0));
    sbrk(-0x1000);
    printf("after decreace 0x1000 program break is 0x%p\n",sbrk(0));
    return 0;
}
