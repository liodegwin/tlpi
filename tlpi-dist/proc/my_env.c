#include<stdio.h>
#include<stdlib.h>
int main(int argc , char* argv[]){
    char * p ;
    p = getenv("SHELL");
    if(p!=NULL){
        puts(p);
    }else{
        printf("no environ name is SHELL");
    }
    return 0 ;
}