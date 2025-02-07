#include<stdio.h>
void main()
{
    int i=1,n,sum=0;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        

    }
    printf("The sum of the first %d numbers is %d\n", n, sum);
    

}