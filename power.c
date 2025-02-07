#include<stdio.h>
int main()
{
    int n=3,power=2,answer=2;
      while(power>0)
    {
        answer=answer*n;
        power--;
    }
    printf("%d",answer);
    return 0;
}