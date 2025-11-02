#include <stdio.h>

int main(){

// Q1

int a,b,temp;
printf("Q1\n\n\n");
printf("Enter Value to be stored in A: ");
scanf("%d",&a);
printf("Enter Value to be stored in B: ");
scanf("%d",&b);
temp = a;
a = b;
b = temp;
printf("Values after swapping A = %d, B = %d",a,b);

// Q2

printf("\n\n\n\n\nQ2\n\n\n");
float salary,tax,tax_amt ;

printf("Please Enter  Your Salary: ");
scanf("%f",&salary);
printf("Please Enter Tax Rate: ");
scanf("%f",&tax);
tax = tax / 100 ;
tax_amt = salary *tax ;
salary = salary - tax_amt ;
printf("The tax amount you have to pay is: %.3f\n",tax_amt);
printf("Your salary after tax is: %.3f",salary);

//Q3

printf("\n\n\n\n\nQ3\n\n\n");

float hrs, dist, speed ;
printf("Please enter number of hours travelled\nNote: Value cant be negative\n      Value should be between 1 to 5 hours\n");
scanf("%f",&hrs);
printf("\nPlease enter number of miles travelled\nNote:Value cant be negative\n");
scanf("%f",&dist);
speed = dist / hrs ;
printf("The average speed of the entire journey is: %.3f Miles Per Hour\n",speed);


//Q4
printf("\n\n\n\nQ4\n\n\n");
int testInteger = 3000000000;
printf ("Number is %d",testInteger);

/* Integer Overflow has occured because int stores values in 32 bit registers.
The value we are trying to store in it is more than the registers maximum value,
so it just displays a random two's complement value.
*/























}