#include <stdio.h>
#include "power.h"

int main()
{
	int a;
	puts("Enter a number");
	scanf("%d",&a);
	printf("The square of the number is %d\n",sqr(a));
	printf("The cube of the number is %d\n",cub(a));
}

