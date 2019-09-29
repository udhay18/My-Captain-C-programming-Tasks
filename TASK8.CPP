#include<conio.h>
#include<stdio.h>
void main()
{
 int n;
 clrscr();
 printf("Enter a number:");
 scanf("%d",&n);
 for(int i=1;i<=12;i++)
  printf("\n%d X %d = %d",i,n,i*n);
 getch();
}

