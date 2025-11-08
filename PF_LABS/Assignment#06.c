#include <stdio.h>
int main()
{
//Question 1
puts("Question 1");
	int x,y,fac;
	fac=1,y=1;
	printf("Please enter any number less than 13 to find its factorial: ");
	scanf("%d",&x);
	if (x<13)
	{
	while (y<=x && x!=-1)
	{
		fac=fac*y;
		y++;
	}
	printf("The factorial of %d is %d",x,fac);
	}
	else
	printf("The integer data type cannot store values greater than the factorial of 12");

//Question 2	
printf("\n\n\nQuestion2\n");
	int n1,n2,n3,s;
	n1=0,n2=1,n3=0,s=0;
	char ch;
	printf("Press F to print Fibonacci numbers upto 1000 using for loop\n		OR\nPress W to print them using While loop: ");
	scanf(" %c",&ch);
	
	switch (ch){
	
	case 'f':
	case 'F':
		{
		
		for (;n3<1000;)
		{
			printf("%d ",n3);
			n1 = n2;
			n2 = n3;
			n3 = n1 + n2 ;
			if (n3%3==0||n3%5==0||n3%7==0)
			s+=n3;
		}
		printf("\nThe sum of numbers divisible by 3,5 or 7 is %d",s);
		printf("\n\nBoth seem equally efficent to me since the number of lines they require is the same\nand they take almost equal time to run");
		break;
		}	
	case 'w':
	case 'W':
		{
		while (n3<1000)
		{
			printf("%d ",n3);
			n1 = n2;
			n2 = n3;
			n3 = n1 + n2 ;
			if (n3%3==0||n3%5==0||n3%7==0)
			s+=n3;
		}
		printf("\nThe sum of numbers divisible by 3,5 or 7 is %d",s);
		printf("\n\nBoth seem equally efficent to me since the number of lines they require is the same\nand they take almost equal time to run");
		break;
		}
	default:
		printf("Invalid Input");	
	}
		
//Both seem equally efficent to me since the number of lines they require is the same and they take almost equal time to run		
	
	

//Question 3
printf("\n\n\nQuestion 3\n");
	int a,b,c,d,e,f,g;
	
	printf("Please input a 5 digit number: ");
	scanf("%d",&g);
	f=g;
	
    a = f % 10;
	f = f / 10;
		
	b = f % 10;
	f = f / 10;
	
	c = f % 10;
	f = f / 10;
	
	d = f % 10;
	f = f / 10;
	
	e = f % 10;
	
	if ((a+b+c+d+e)%2==0)
	{ int prime = 1,i;
		for (i=2;i<=(g/2);i++)
		{
			if (g%i == 0)
			{
			prime = 0 ;
			break;
			}
			
		}
		if (prime == 1)
		 printf("It is a prime number");
		else
		 printf("It is not a prime number");	
	}	
	else
	{
		if (a==e && b==d)
		printf("The number is a palindrome");
		else
		printf("The number is odd and not palindrome");
	}		


printf("\n\nQuestion 4 and 5 left because of Sir Furqan's instructions");

//Question 6
printf("\n\n\nQuestion 6\n");
	int j,k,l,m;
	printf("Please enter the number of rows of the pyramid you want to see: ");
	scanf("%d",&j);
	
	for(k=1;k<=j;k++)
	{
		for (l=j-k;l>0;l--)
		{
			printf(" ");
		}
		
		for (m=1;m<=2*k-1;m++)
		{
			printf("*");
		}
		
		printf("\n");
	}		
		
}