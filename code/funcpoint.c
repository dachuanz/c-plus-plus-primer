# include <stdio.h>
# include <string.h>
/**
函数指针示例

*/
void check(char* a, char* b, int(*cmp)(const char*, const char*));

int main( void)
{
    char s1[80], s2[80];
    int(*p)(const char*, const char*);     
    p = strcmp;   
    printf("输入两个字符串:\n");
    gets(s1);    
    gets(s2);   
}

void check(char* a, char* b, int(*cmp)(const char*, const char*))
{
    printf("测试是否相等\n");
    if(!cmp(a, b))
        {
            printf("结果：相等\n");
        }
    else
        {
            printf("结果：不相等\n");
        }
}