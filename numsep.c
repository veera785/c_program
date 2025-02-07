#include<stdio.h>
int main(){
    int n,result ,reverse = 0;
    printf("Enter value :");
    scanf("%d",&n);
    while (n>0){
        result = n%10;
        reverse = reverse *10 + result;
        n /=10;
    }
    printf("%d",reverse);
    return 0;
}
