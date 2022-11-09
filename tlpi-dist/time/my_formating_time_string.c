//
// Created by liode on 2022/9/18.
//
#include <stdio.h>
#include <time.h>
int main(){
    time_t t = time(NULL);
    struct tm * cur_time = gmtime(&t);

    char time_arr[1000];
    strftime(time_arr,1000,"%Y %m %d",cur_time);
    printf("formatting time string is %s\n", time_arr);
    return 0;
}