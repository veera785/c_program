#include<stdio.h>
int add();
int main()
{
    int result = add();
    printf("%d",result);
    return 0;
}
int add()
{
    int a=5,b=7;
    int c=a+b;
    return c;
}