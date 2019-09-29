#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int age;
 char phone[10];
 char name[50];
 printf("Enter your Name:");
 scanf("%s",&name);
 printf("Enter your age:");
 scanf("%d",&age);
 printf("Enter your phone number:");
 scanf("%s",&phone);
 printf("Name:%s \n Age:%d \n Phone Number:%s",name,age,phone);
 getch();
}

