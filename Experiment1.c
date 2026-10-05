#include<stdio.h>
int main()
{
int a,b,choice,res;
printf("\n OPERATORS AND EXPRESSIONS");
printf("\n Enter your First Number:");
scanf("%d",&a);
printf("\n Enter your Second Number:");
scanf("%d",&b);
printf("\n MENU");
printf("\n 1.ADDITION");
printf("\n 2.SUBTRACTION");
printf("\n 3.MULTIPLICATION");
printf("\n 4.DIVISION");
printf("\n 5.MODULUS");
printf("\n Enter your Choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
         res=a+b;
         printf("Result=%d",res);
          break;
case 2:
         res=a-b;
         printf("Result=%d",res);
          break;
case 3:
          res=a*b;
          printf("Result=%d",res);
           break;
case 4:
           if(b!=0)
          {
                  res=a/b;
                  printf("Result=%d",res);
           }
           else
          {
                  printf("Division by zero is not possible");
          }
            break;
          
case 5:
           if(b!=0)
            {
                  res=a%b;
                  printf("Result=%d",res);
             }
           else
            {
                  printf("Modulus by zero is not possible");
            }
           break; 
default:
       printf("Invalid choice");
          
            
}
return 0;
}
