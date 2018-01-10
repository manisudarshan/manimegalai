#include<stdio.h>
void main()
{
int n;
printf("\n Enter the number");
scanf("%d",&n);
if(n==0)
{
printf("\n The given number is zero");
}
else
{
if(n<0)
printf("\n The given number is negative");
else
printf("\n The given number is positive");
}
getch();
}
