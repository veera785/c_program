    #include <stdio.h>

    void convert_to_bit(int n);
    int change_bit(int n);
    int main() {
        int n;
        printf("Enter the value of n :");
        scanf("%d",&n);
        n = change_bit(n);
        printf("chnaged binary value :");

        if ( n==0) {
            printf("0");
        }else{
            convert_to_bit(n);
        }
        return 0;
    }
    void convert_to_bit(int n){
        if(n==0){
            return;
        }
        convert_to_bit(n/2);
        printf("%d",n%2);
    }

    int change_bit(int n){
        return n^1;
    }

