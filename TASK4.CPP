#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
 clrscr();
 char a[25],b[25];
 printf("Enter your first name:");
 scanf("%s",&a);
 printf("Enter your last name:");
 scanf("%s",&b);
 printf("Name:%s",strcat(a,b));
 getch();
}