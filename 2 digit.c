#include<stdio.h>
int main(){
    int n1,n2,value1,value2,res1 = 0,res2=0;
    printf("Enter the value of the first 2-digit number: ");
    scanf("%d", &n1);
    printf("Enter the value of the second 2-digit number: ");
    scanf("%d", &n2);

    while(n1>0){
        value1 = n1%10;
        res1 +=value1;
        n1= n1 /10;
    }
    while(n2>0){
        value2 = n1%10;
        res2 +=value2;
        n2= n2 /10;
    }

        if(res1>res2){
            printf("output : %d",res1);
        }else{
            printf("output : %d",res2);
        }
        return 0;
}


    