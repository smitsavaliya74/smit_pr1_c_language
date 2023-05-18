#include<stdio.h>
#include<conio.h>

void main ()
{
   float a;
   float b;
   float c;

   clrscr();

   printf("Enter the first angle of triangle: ");
   scanf("%f",&a);

   printf("Enter the second angle of triangle: ");
   scanf("%f",&b);

   c=180-(a+b);

   printf("The third angle of triangle is:%.2f",c);

   getch();

}