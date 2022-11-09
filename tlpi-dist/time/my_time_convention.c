//
// Created by liode on 2022/9/18.
//
#include <stdio.h>
#include <time.h>
int main(){
    time_t cur_time;
    cur_time = time(NULL);
    printf("time_t by time() is\n\t%ld\n",cur_time);

    //time_t -> 固定格式的字符串
    char* fixed_format_string;
    fixed_format_string = ctime(&cur_time);
    printf("time_t to fixed_format_string by ctime() is\n\t%s",fixed_format_string);//自带一个回车一个终止字符

    //time_t -> 分解时间
    struct tm *broken_down_time;
    broken_down_time = gmtime(&cur_time);
    printf("time_t to broken-down time by gmtime() is:\n\t");
    printf("year=%d mon=%d mday=%d hour=%d min=%d sec=%d ", broken_down_time->tm_year,
           broken_down_time->tm_mon, broken_down_time->tm_mday, broken_down_time->tm_hour, broken_down_time->tm_min, broken_down_time->tm_sec);
    printf("wday=%d yday=%d isdst=%d\n", broken_down_time->tm_wday, broken_down_time->tm_yday, broken_down_time->tm_isdst);

    broken_down_time = localtime(&cur_time);
    printf("time_t to broken-down time by localtime() is:\n\t");
    printf("year=%d mon=%d mday=%d hour=%d min=%d sec=%d ", broken_down_time->tm_year,
           broken_down_time->tm_mon, broken_down_time->tm_mday, broken_down_time->tm_hour, broken_down_time->tm_min, broken_down_time->tm_sec);
    printf("wday=%d yday=%d isdst=%d\n", broken_down_time->tm_wday, broken_down_time->tm_yday, broken_down_time->tm_isdst);

    //分解时间 -> time_t
    time_t cur_timeby_mktime = mktime(broken_down_time);
    printf("broken-time to time_t by mktime() is\n\t%ld\n",cur_timeby_mktime);

    //分解时间 -> 固定格式的字符串
    fixed_format_string = asctime(broken_down_time);
    printf("broken-down time to fixed_format_string by astime() is\n\t%s",fixed_format_string);//自带一个回车一个终止字符
    return 0;
}