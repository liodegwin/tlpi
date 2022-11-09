//
// Created by liode on 2022/9/19.
//
#include <stdio.h>
#include <sys/times.h>
#include <unistd.h>
int main(){
    struct tms t;
    times(&t);
    long  clk_tck = sysconf(_SC_CLK_TCK);
    printf("In point a ,tms_utime is %ld , tms_stime is %ld , user cpu time is %.2f s , system cpu time is %.2f s\n",t.tms_utime,t.tms_stime,\
    (double )t.tms_utime/clk_tck,(double )t.tms_stime/clk_tck);
    sleep(5);
    for(int i = 100000000;i>0;i--){
        getpid();
    }
    times(&t);
    printf("In point b ,tms_utime is %ld , tms_stime is %ld , user cpu time is %.2f s , system cpu time is %.2f s\n",t.tms_utime,t.tms_stime,\
    (double )t.tms_utime/clk_tck,(double )t.tms_stime/clk_tck);
    return 0;

}