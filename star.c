#include<stdio.h>
int main(){
    int row,col,num=1;
    printf("enter a col:");
    scanf("%d",&col);
    printf("enter a row:");
    scanf("%d",&row);
    for(int i = 1;i <= row;i++){
        for(int j=1;j <=col;j++){
             printf("%d",num);
             num++;
}
      printf("\n");
        }
      return 0;
    }