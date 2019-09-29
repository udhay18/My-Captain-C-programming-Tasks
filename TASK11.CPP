#include<conio.h>
#include<stdio.h>
struct book
 {
  char title[50];
  char author[50];
  char genre[50];
 };

void gd()
{
 struct book bk1;
 printf("Enter the Title:");
 scanf("%s",bk1.title);
 printf("Enter the Author:");
 scanf("%s",bk1.author);
 printf("Enter the Genre:");
 scanf("%s",bk1.genre);
 printf("Title:%s\n",bk1.title);
 printf("Author:%s\n",bk1.author);
 printf("Genre:%s\n",bk1.genre);
}

void main()
{
 clrscr();
 gd();
 getch();
}



