#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
 clrscr();
 long int a,b,i;
 printf("Enter a number :");
 scanf("%ld",&a);
 printf("Entered Number :%ld",a);
 printf("\nReverse of a given number:\n");
 for(i=1;(a/10)!=0;i++)
 {
  b=a%10;
  a=a/10;
  printf("%ld",b) ;
  }
  printf("%ld",a);
  getch();
}