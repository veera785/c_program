#include<stdio.h>
void factorial(int n);
int sum = 0;
int main(){
    int n;
    printf("enter the value:");
    scanf("%d",&n);
    factorial(n);
    return 0;
}
void factorial(int n){
   int sum = 1;
   for(int i = n;i>0;i--){
   sum =sum * i;
   }
   printf("factorial of %d is %d",n,sum);
}
