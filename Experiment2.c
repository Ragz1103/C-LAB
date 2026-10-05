#include<stdio.h>
int main()
{
int a,b,choice,res;
printf("\n BITWISE OPERATIONS");
printf("\n Enter your First Number:");
scanf("%d",&a);
printf("\n Enter your Second Number:");
scanf("%d",&b);
printf("\n MENU");
printf("\n 1.Bitwise AND(&)");
printf("\n 2.Bitwise OR(|)");
printf("\n 3.Bitwise XOR(^)");
printf("\n 4.Bitwise NOT(~)");
printf("\n 5.Left Shift(<<)");
printf("\n 6.Right Shift(>>)");
printf("\n Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
    res=a&b;
    printf("\n Bitwise AND Result=%d",res);
    break;
case 2:
    res=a|b;
    printf("\n Bitwise OR Result=%d",res);
    break;
case 3:
    res=a^b;
    printf("\n Bitwise XOR Result=%d",res);
    break;
case 4:
    res=~a;
    printf("\n Bitwise NOT Result=%d",res);
    break;
case 5:
    res=a<<b;
    printf("\n Left Shift Result=%d",res);
    break;
case 6:
    res=a>>b;
    printf("\n Right Shift Result=%d",res);
    break;
default:
    printf("\n Invalid Choice");
}
return 0;
}
