#include <stdio.h>

int main ()
{
	int i, j, temp,len ;
	
	printf("Enter the length of array: ");
	scanf("%d",&len);
	
	int array[len];
	printf("Enter %d numbers",len);
	for (i=0; i<len; i++)
	scanf("%d",&array[i]);
	
	for ( i=0; i<len; i++ )
	{
		j=i;
		while( j>0 && array[j-1] >array[j])
		{
			temp = array[j-1];
			array[j-1] = array[j];
			array[j] = temp;
			j--;
		}
	}
	
	for (i=0; i<len; i++)
	printf("%d ",array[i]);
}
