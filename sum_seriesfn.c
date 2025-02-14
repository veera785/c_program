#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Sum of series = %d", sum(n));
    return 0;
}

int sum(int n){
    int sum = 0;
    for (int i=0;i<n;i++){
        sum = sum + i;
    }
    return sum;
}