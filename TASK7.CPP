#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
 char a[50],b[50];
 clrscr();
 printf("Enter a string:");
 scanf("%s",&a);
 strcpy(b,a);
 strrev(b);
 if(strcmp(a,b)==0)
	    printf("Given string, %s is  a palindrome",a);
 else
	   printf("Given string, %s is not a palindrome",a);
 getch();
}


