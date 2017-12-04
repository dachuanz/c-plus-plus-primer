#include <limits.h>
#include <stdio.h>


int main(void)

{
    char c_min = SCHAR_MIN;
    char c_max = SCHAR_MAX;
    unsigned char uc_max = UCHAR_MAX;
    long  l_min = LONG_MIN;
    short s_min = SHRT_MIN;
    long long  ll_min = LLONG_MIN;//C99增加long long 类型
    long long  ll_max = LLONG_MAX;
    unsigned long long  ull_max = ULLONG_MAX;
    printf ("max of  unsigned char:%d\n", uc_max);
    printf("min of char:%d\n", c_min);
    printf("max of char:%d\n", c_max);
    printf("min of short:%d\n", s_min);
    printf("min of long:%ld\n", l_min);
    printf("min of long long : %lld\n", ll_min);
    printf("max of long long : %lld\n", ll_max);
    printf ("max of unsigned long long : %llu\n", ull_max);
    return 0;
}