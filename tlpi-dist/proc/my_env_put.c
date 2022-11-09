#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
extern int errno;
int main(int argc , char* argv[]){

    char environ_greetings[]  ="greetings=hello";

    if(putenv(environ_greetings)!=0){
        printf("putenv error! errno is %d",errno);
    }else{
        puts(getenv("greetings"));
    }

    environ_greetings[10] = 'H';
    puts(getenv("greetings"));


    return 0 ;
}