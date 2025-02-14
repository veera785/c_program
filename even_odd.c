#include<stdio.h>

int main(){
    int a;
    printf("Enter the number: ");
    
    if (scanf("%d", &a) != 1) {
        printf("Invalid input! Please enter a valid integer.\n");
        return 1; 
    }

    switch(a % 2){
        case 0:
            printf("Number is even\n");
            break;

        case 1:
            printf("Number is odd\n");
            break;
    
        default:
            printf("Invalid\n");
            break;
    }

    return 0;
}
