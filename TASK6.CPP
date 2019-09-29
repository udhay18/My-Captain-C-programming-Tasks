#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
 clrscr();
 long int no,sum=0,a,b,i;
 int n;
 printf("Enter a number :");
 scanf("%ld",&no);
 printf("Enter the number of digits in given number:");
 scanf("%d",&n);
 a=no;
 for(i=1;i<=n;i++)
  {
   b=a%10;
   a=a/10;
   sum+=pow(b,n);
  };
 if(no==sum)
	    printf("The given number %d is armstrong number",no);
 else
	   printf("The given number %d is not a armstrong number",no);


 getch();
}