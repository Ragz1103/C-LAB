#include<stdio.h>
int main()
{
int a,b,choice,res;
printf("BRANCHING STATEMENTS");
printf("Enter your first number:");
scanf("%d",&a);
printf("Enter your second number:");
scanf("%d",&b);
printf("\n MENU");
printf("\n1.Check Positive,Negative or Zero");
printf("\n2.Check Even or Odd");
printf("\n3.Find Largest of Two Number");
printf("\n 4.Check Divisible by 5");
printf("\nEnter your Choice:");
scanf("%d",&choice);
printf("RESULT\n");
switch(choice)
{
case 1:
    if(a>0)
        printf("\nPOSITIVE");
    else if(a<0)
        printf("\nNEGATIVE");
    else
        printf("\nZERO");
    break;
case 2:
    if(a%2==0)
        printf("EVEN\n");
    else
        printf("ODD\n");
    break;
case 3:
    if(a>b)
        printf("A is Largest number %d\n");
    else if(a<b)
        printf("B is Largest number %d\n");
    else
        printf("A and B is equal %d\n");
    break;
case 4:
    if(a%5==0)
        printf("\n It is divisible by 5");
    else
        printf(\n It is not divisible by 5);
    break;
default:
    printf("Invalid choice");
}
return 0;
}
