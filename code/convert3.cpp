#include <stdio.h>

struct A
{
    double x;
    A (double d)
    {
        printf ("A::A(double)\n");
        x = d;
    }

};

void f (const A& a )
{
    printf("f:%f\n", a.x);
}

int main(void)
{
    A a(1);
    f(a);
    f(2);
    return 0;
}