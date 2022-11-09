//
// Created by liode on 2022/9/19.
//
#include <stdio.h>
#include <time.h>
#include <unistd.h>
int main(){
    clock_t t;
    t = clock();
    printf("In point a, clock_t is %ld, second is %.2f s\n",t,(double )t/CLOCKS_PER_SEC);
    for(int i = 100000000;i>0;i--){
        getpid();
    }
    t = clock();
    printf("In point b, clock_t is %ld, second is %.2f s\n",t,(double )t/CLOCKS_PER_SEC);
    return 0;
}