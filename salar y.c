#include<stdio.h>
#include<conio.h>

void main ()
{
   float base;
   float HRA ;
   float DA;
   float TA;
   float gross;

   clrscr();

   printf("Enter the base salary: ");
   scanf("%f",&base);

   printf("Enter the HRA percentage: ");
   scanf("%f",&HRA);

   printf("Enter the DA percentage: ");
   scanf("%f",&DA);

   printf("Enter the TA percentage: ");
   scanf("%f",&TA);

   gross=base+(base*HRA/100)+(base*DA/100)+(base*TA/100);

   printf("gross salary is:%.2f",gross);

   getch();

}
