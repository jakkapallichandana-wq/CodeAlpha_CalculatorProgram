/*---------------------------------------------------------------------------------------------------------------------------------------------------------
Name : Chandana Jakkapalli
Internship : CodeAlpha C Programming Internship
Task : Calculator Program
-----------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include<stdio.h>
int main()
{
 int a,b,choice;
 //Taking first number input
 printf("Enter First Number(a):");
 scanf("%d",&a);
 //Taking second number input
 printf("\nEnter Second Number(b):");
 scanf("%d",&b);

 //Displaying Menu
 printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");

 //Taking User Choice
 printf("\nEnter e choice(Number Between 1 to 4):");
 scanf("%d",&choice);

 //Performing operation using switch case
 switch(choice)
 {
   case 1:
   printf("\nAddition =%d",a+b);
   break;
   case 2:
   printf("\nSubtraction =%d",a-b);
   break;
   case 3:
   printf("\nMultiplication =%d",a*b);
   break;
   case 4:
   printf("\nDivision =%d",a/b);
   break;
   default:
   printf("\nInvalid Choice");
 }
 return 0;
 }
