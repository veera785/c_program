#include<stdio.h>

int main()
{
   int a,b,choice,result;
   printf("enter num:");
   scanf("%d%d",&a,&b);
   printf("the choice are 1.add 2.sub 3.mod");
   printf("enter your choice");
   scanf("%d",&choice);
   switch (choice)
   {
      case 1:
      result=(a+b);
      printf("the add of %d and %d is %d" ,a,b,result);
      break;

      case 2:
      result=(a-b);
      printf("the sub of %d and %d is %d" ,a,b,result);
      break;

      case 3:
      result=(a%b);
      printf("the mod of %d and %d is %d",a,b,result);
      break;
   
      default:
      printf("enter a vaild choice");
      break;
   } 
   return 0;
}

   


   
   
   
   
   
   
   
   
   
   
   
   
   

