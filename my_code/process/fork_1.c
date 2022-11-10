//
// Created by liode on 2022/11/11.
//
#include <unistd.h>
#include <stdlib.h>
#include "stdio.h"
#include "fcntl.h"
static int idata = 111;             /* Allocated in data segment */

int
main(int argc, char *argv[])
{
    int istack = 222;               /* Allocated in stack segment */
    pid_t childPid;

    switch (childPid = fork()) {
        case -1:
            printf("error\n");

        case 0:
            idata *= 3;
            istack *= 3;
            break;

        default:
            sleep(3);                   /* Give child a chance to execute */
            break;
    }

    /* Both parent and child come here */

    printf("PID=%ld %s idata=%d istack=%d\n", (long) getpid(),
           (childPid == 0) ? "(child) " : "(parent)", idata, istack);

    exit(EXIT_SUCCESS);
}
