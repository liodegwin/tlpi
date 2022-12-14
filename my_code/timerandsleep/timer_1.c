#include <stdio.h>
#include <signal.h>
#include <errno.h>
#include <sys/time.h>
static void sigalrmHandler(int sig)
{
    static size_t count = 1;
    printf("in %s, count is %d\n",__FUNCTION__ , count++);
}
int main(void)
{
    //set SIGALRM handler
    struct sigaction sa;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0;
    sa.sa_handler = sigalrmHandler;
    if (sigaction(SIGALRM, &sa, NULL) == -1)
    {
        printf("err in func %s line %s, errno is %d\n",__FUNCTION__ ,__LINE__,errno);
        return 0;
    };
    //set itimer
    struct itimerval itv;
    itv.it_interval.tv_sec = 1;
    itv.it_value.tv_sec = 5;
    if(setitimer(ITIMER_REAL,&itv,NULL) == -1){
        printf("err in func %s line %s, errno is %d\n",__FUNCTION__ ,__LINE__,errno);
        return 0;
    };
    //
    for(;;){

    }

}