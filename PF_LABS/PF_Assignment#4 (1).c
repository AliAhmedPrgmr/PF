#include <stdio.h>
#include <math.h>

int main () 
{
 
//Question 1
puts("Question 1");	
	char alpha;
	printf ("Please enter a character: ");
	scanf("%c",&alpha);
	
	if (alpha >= 'A' && alpha <= 'Z')
		printf("It is a Capital Alphabet\n\n\n");
	else if (alpha >= 'a' && alpha <= 'z')
		printf("It is a Small Aplhabet\n\n\n");
	else if (alpha >= '0' && alpha <= '9')
		printf("It is a digit\n\n\n");
	else 
		printf("It is a Special Character\n\n\n");	

		
//Question 2
puts("Question 2");
	float price, discount ;
	puts("Please enter purchase value");
	scanf("%f",&price);
	
	if (price <= 1999)
		discount = 0 ;
	else if (price >=2000 && price <= 4000)
		discount = price * 0.2;
	else if (price > 4000 && price <= 6000)
		discount = price * 0.3;
	else
		discount = price * 0.5;

	printf("The actual price was %.2f\n\n",price);
	printf("Discount amount is %.2f\n\n",discount);
	printf("Price after discount is %.2f\n\n\n",price - discount);

	
//Question 3	
puts("Question 3");
	double a, b, c, root1, root2, discri ;
	puts("Please enter values of a, b and c");
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);

discri = (b * b)-(4 * a *c);

	if (discri > 0)
	{
		root1 = (-b + sqrt(discri))/ (2 * a) ;
		root2 = (-b - sqrt(discri))/ (2 * a) ;
		puts("The roots are real and distinct");
		printf("Root 1 = %lf\n",root1);
		printf("Root 2 = %lf\n\n\n",root2);
	}
	else if (discri == 0)
	{
		root1 = root2 = -b / 2*a ;
		puts("The roots are real and equal");
		printf("Root = %lf\n\n\n",root1);
	}
	else 
	{
		double real = -b / 2 * a ;
		double imag = sqrt(-discri)/ (2 * a) ;
		puts("The roots are complex");
		printf("Root 1 = %lf + %lfi\n",real,imag);
		printf("Root 2 = %lf - %lfi\n\n\n",real,imag);
	}


//Question 4
puts("Question 4");
	int num, steps ;
	steps = 0 ;
	puts("Please enter a number to check its divisibility by 7");
	scanf("%d",&num);
	while (num != 7 && num != 0 && num != -7 && steps < 100 )
	{
		num = (num/10) - ( 2 * (num%10) ) ;
		steps = steps + 1 ;
	}
	
	if (num == 7 || num == 0 || num == -7 )
		printf("It is divisible by 7\n\n\n");
	else
		printf("It is not divisible by 7\n\n\n");


//Question 5
puts("Question 5");
	float cal, fat ;
	puts("Please enter number of Calories in food");
	scanf("%f",&cal);
	puts("Please enter number of fat grams in food");
	scanf("%f",&fat);
	
	if (cal <= 0 || fat <= 0 || (fat * 9) > cal)
		puts("Invalid input");
	else
		{
			cal = ( fat * 9 ) / cal ;
			cal = cal * 100 ;
			printf("%.1f%% Calories are from fat\n",cal);
			if (cal < 30)
				puts ("The food is low in fat");
		}

return 0;

}