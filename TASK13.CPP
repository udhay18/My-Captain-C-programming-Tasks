#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
 clrscr();
 int i,a[50],b,c,n;
 printf("Enter number of elements:");
 scanf("%d",&n);
 printf("\nEnter a number:");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);

 b=c=a[0];
 for(i=1;i<n;i++)
   {
    if(a[i]>b)
	b=a[i];
    if(a[i]<c)
	c=a[i];
   }
 printf("Largest element=%d \nSmallest Element=%d",b,c);
 getch();
}
