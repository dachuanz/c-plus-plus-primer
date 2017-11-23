# include <stdio.h>

int main(void)
{
    int* p;
    int begin, end;
    begin = 10;
    p = &begin;
    end = *p;
    printf("begin = %d\n", begin);
    printf("end = %d\n", end);
    printf("p = %p\n", p);
    printf("%zd\n", sizeof(p));
    printf("*p = %d\n", *p);
    return 0;
}