#include <stdio.h>

void dprint(double);

int main(void)
{
    dprint(123);
    dprint(123.0);
    return 0;
}

void dprint(double d)
{
    printf("%f\n", d);
}