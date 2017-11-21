/** C语言可以没有函数原型  */
#include <stdio.h>

int main(void)
{
    dprint(123);
    dprint(123.0);
    return 0;
}
dprint(d)
double d;
{
    printf("%f\n", d);
}