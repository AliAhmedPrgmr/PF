#include <stdio.h>

int main()
{
	int i, n ;
	printf("Please enter a number: ");
	scanf("%d",&n);
	puts("");
	for (i=1;i<=n;i++)
	{
		if ( i%2 != 0 )
		printf("%d is Odd\n",i);
		else
		printf("%d is Even\n",i);
	}
	return 0;
}


