#include<stdio.h>
int main(){
    int n1,n2,sum1,sum2,res;
    printf("Enter the value of the first 3-digit number: ");
    scanf("%d", &n1);
    printf("Enter the value of the second 3-digit number: ");
    scanf("%d", &n2);

    sum1 =(n1 / 100);
    sum2 =(n2 / 100);
    if (sum1>sum2){
          printf("output = %d",sum1 -sum2);
     } else{
          printf("output = %d ",sum2-sum1) ;
     
     } 
     return 0;
}    
