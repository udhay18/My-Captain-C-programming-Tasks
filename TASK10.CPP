#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 long int a=12345;
 for(i=1;a/10!=0;i++)
 {
 printf("%ld",a);
 a/10;
 }
 getch();
}
