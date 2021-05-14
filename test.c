#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//字符串比较
int mycpm(const char *s1, const char *s2)
{
    while (*s1 == *s2 && s1 != "\0")
    {
        /* code */
        s1++;
        s2++;
    }
    return *s1 - *s2;
};
enum color
{
    red,
    yellow,
    green
};
int main()
{
    // int a=0;
    // printf("%d",a);

    // void *p;
    // int cnt = 0;
    // while ((p = malloc(100 * 1024 * 1024)))
    // {
    //     /* code */
    //     cnt++;
    // }
    // printf("分配了%d00MB的空间\n", cnt);

    // char *p = 0;
    // char *q = 0;
    // char *r = 0;
    // p = (char *)malloc(0);
    // q = (char *)malloc(sizeof(char));
    // r = (char *)malloc(sizeof(char));
    // printf("p=%p ", p);
    // printf("q=%p ", q);
    // printf("r=%p ", r);
    // free(p);
    // free(q);
    // free(r);

    char s1[] = "abv";
    char s2[] = "a";
    printf("%d\n", mycpm(s1, s2));

    //结构（也可以放到main函数外）
    struct date
    {
        int month;
        int day;
        int year;
    };

    // struct date today;
    // today.month=7;
    // today.day=31;
    // today.year=2014;
    struct date today={7,31,2014};
    
    printf("Today is %i-%i-%i.\n",today.year,today.month,today.day);

    return 0;
}