
#include<conio.h>
#include<stdio.h>
void cf()
{
 clrscr();
 float temp;
 printf("Enter the temperature in celsius:");
 scanf("%f",&temp);
 printf("Temperature in Fahrenheit:%f",(temp*9/5)+32);

}
void fc()
{
 clrscr();
 float temp;
 printf("Enter the temperature in Fahrenheit:");
 scanf("%f",&temp);
 printf("Temperature in Celsius:%f",(temp-32)*5/9;

}
void main()
{
 clrscr();
 int n;
 printf("Enter a choice:");
 scanf("%d".&n);
 switch(n)
  {
  case 1:cf();break;
  case 2:fc();break;
  case 3:goto exit;
  default:printf("Enter a valid choice");
  }
exit:
 getch();

}
