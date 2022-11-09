//
// Created by liode on 2022/9/18.
//

#include <time.h>
#include <stdio.h>
int main(){
    time_t cur_time;
    cur_time = time(NULL);
    printf("cur_time is %ld\n",cur_time);
}