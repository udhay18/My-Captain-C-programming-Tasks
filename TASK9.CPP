#include<conio.h>
#include<stdio.h>
void main()
{
 clrscr();
 long int p=1;
 int i,n;
 printf("Enter a number to find FACTORIAL:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)

   p=p*i;

 printf("Factorial of %d:%ld",n,p);
 getch();
}