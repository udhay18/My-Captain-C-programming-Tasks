#include<conio.h>
#include<stdio.h>
void main()
{
 clrscr();
 int m1,m2,m3;
 printf("Enter the Marks in English,Maths,Science:");
 scanf("%d %d %d",&m1,&m2,&m3);
 printf("Sum of three subject mark=%d \n Average=%d",m1+m2+m3,(m1+m2+m3)/3);
 getch();
}