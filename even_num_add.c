#include<stdio.h>
int main(){
    int i=1;
    int c;
    int result = 0;
    printf("Enter value :");
    scanf("%d",&c);
    while (i<=c)
    {
        if (i%2==0)
        {
        result +=i;
        }
        i++;
    }
    printf("total = %d",result);
    return 0;
}