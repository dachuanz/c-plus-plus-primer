#include <climits>
#include <cstdio>
//g++  -std=c++03 -pedantic lim.cpp 无法通过便宜，c++1998 不支持 long long 类型


using namespace std;

int main()

{
    long  l_min = LONG_MIN;//long int 简写为long
    short s_min=SHRT_MIN;//short int 简写为 short 
    long long  ll_min = LLONG_MIN;//long long int 简写为long long
    long long  ll_max = LLONG_MAX;
    unsigned long long  ull_max = ULLONG_MAX;
    printf ("min of short:%d\n",s_min);
    printf("min of long:%ld\n", l_min);
    printf("min of long long : %lld\n", ll_min);
    printf("max of long long : %lld\n", ll_max);
    printf ("max of unsigned long long : %llu\n", ull_max);
    return 0;
}