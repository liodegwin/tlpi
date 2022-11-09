//
// Created by liode on 2022/7/31.
//
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
extern int errno;
int main(int argc ,char* argv[]){

    int res = open("sdfadfasf",O_RDWR);
    printf("res is %d , erron is %d\r\n",res,errno);
    return 0;
}