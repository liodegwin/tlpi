#include <time.h>
#include <stdio.h>
#include <sys/time.h>
#include <errno.h>
int main(){
    time_t t;
    t = time(NULL);
    printf("calendar time is %ld s, got by func time\n",t);
    struct timeval tv;
    if(gettimeofday(&tv,NULL) == -1){
        printf("error in gettimeofday errno is %d\n",errno);
        return 0;
    };
    printf("calendar time is %ld s, got by gettimeofday\n",tv.tv_sec);
    return 0;
}
