#include <stdio.h>
#include <pthread.h>
//定义线程要执行的函数，arg 为接收线程传递过来的数据
void* Thread1(void* arg)
{
    printf("This is Thread1\n");
    return "Thread1 return";
}
//定义线程要执行的函数，arg 为接收线程传递过来的数据
void* Thread2(void* arg)
{
    printf("This is Thread2\n");
    return "Thread2 return";
}

int main()
{
    int res;
    //创建两个线程变量
    pthread_t mythread1, mythread2;
    void* thread_result;
    //创建 mythread1 线程，执行 Thread1() 函数
    res = pthread_create(&mythread1, NULL, Thread1, NULL);
    if (res != 0) {
        printf("Thread 1 creat failed\n");
        return 0;
    }
    //创建 mythread2 线程，执行 Thread2() 函数
    res = pthread_create(&mythread2, NULL, Thread2, NULL);
    if (res != 0) {
        printf("Thread 2 creat failed\n");
        return 0;
    }
    //阻塞主线程，直至 mythread1 线程执行结束，用 thread_result 指向接收到的返回值，阻塞状态才消除。
    res = pthread_join(mythread1, &thread_result);
    //输出线程执行完毕后返回的数据
    printf("%s\n", (char*)thread_result);
    //阻塞主线程，直至 mythread2 线程执行结束，用 thread_result 指向接收到的返回值，阻塞状态才消除。
    res = pthread_join(mythread2, &thread_result);
    printf("%s\n", (char*)thread_result);
    printf("主线程执行完毕\n");
    return 0;
}