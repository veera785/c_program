


 #include <stdio.h>

    int main() {
    int n, i = 1, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n); 
    while (i <= n) {
        sum = sum + i; 
        i++;            
    }
    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
#include <stdio.h>

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("%d is even\n", a);
    } else {
        printf("%d is odd\n", a);
    }

    return 0;
}