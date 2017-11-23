#include <stdio.h>

typedef  char uint9_t;



extern void swapdata(uint9_t dat_x,uint9_t day_y);

int main(void)
{
uint9_t x,y;
printf("请输入x,y:");
scanf("%c,%c",&x,&y);

printf("交换前：x=%c,y=%c\n",x,y);
swapdata(x,y);
printf("交换后：x=%c,y=%c\n",x,y );
return 0;
}

