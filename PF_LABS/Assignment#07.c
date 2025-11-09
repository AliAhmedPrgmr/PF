#include <stdio.h>
#include <string.h>
int main()
{
//Question 1
printf("Question 1\n\n");
	
	int sum=0, count=0,a,b;
	printf("How many numbers you want to store? ");
	scanf("%d",&a);
	int arr[a];
	
	printf("Please enter the numbers \n");
	for (b=0;b<a;b++)
	scanf("%d",&arr[b]);
	
	for (b=0;b<a;b++)
	{
		if (arr[b]>0)
		{
			sum+=arr[b];
			count++ ;
		}
	}
	printf("The sum of positive numbers is: %d\n",sum);
	printf("The average of positive numbers is: %.2f\n",(double)sum/count);


//Question 2
printf("\n\n\nQuestion 2\n\n");

	int r,c,i,j,Zero=0;
	
	printf("Enter rows and columns of the matrix: \n");
	scanf("%d %d",&r ,&c);
	int m1[r][c];
	puts("Enter values of the matrix ");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",& m1[i][j]);
			if (m1[i][j]==0)
			Zero++ ;
			
		}
		puts("");
	}
	 
	if ( Zero >= ((double)( r*c )/2) ) 
	printf("It is a sparse matrix");
	else
	printf("It is not a sparse matrix");
	

//Question 3
printf("\n\n\nQuestion 3\n\n");	
	
	char name1[20], name2[20], FullName[40];
	
	printf("Enter your first name: ");
	scanf("%s", name1);
	printf("Enter your second name: ");
	scanf("%s", name2); 
	FullName[0]='\0';
	strcat(FullName,name1);
	strcat(FullName," ");
	strcat(FullName,name2);
	
	puts(FullName);


//Question 4
printf("\n\n\nQuestion 4\n\n");
	
	int r1,c1,f,g;
	puts("Enter the rows and columns of the square matrix");
	scanf("%d %d",&r1,&c1);
	
	if (r1==c1)
	{
		int mat[r1][c1], Tmat[r1][c1], Trans=0;
		puts("Enter values of the matrix ");
		for (f=0;f<r1;f++)
		{
		for (g=0;g<c1;g++)
			{
				scanf("%d",& mat[f][g]);
				Tmat[g][f] = mat[f][g] ;
			}
			puts("");
		}		
		
		for (f=0;f<r1;f++)
		{
		for (g=0;g<c1;g++)
			{ 
				if (Tmat[f][g] != mat[f][g])
				Trans=1;
			}
		}
		
		for (f=0;f<r1;f++)
		{
		for (g=0;g<c1;g++)
			printf("%d ",Tmat[f][g]);
		puts("");
		}	
		
		if (Trans == 1)
			puts("Matrix is asymmetric");
		else
			puts("Matrix is symmetric");
	}
	else
	puts("It is not a square matrix");



//Question 5
printf("\n\n\nQuestion 5\n\n");

	int r2,c2,h,k,max;
	printf("Enter rows and columns of the matrix: \n");
	scanf("%d %d",&r2 ,&c2);
	int matrix[r2][c2];
	puts("Enter values of the matrix ");
	
	
	for (h=0;h<r2;h++)
	{
		for (k=0;k<c2;k++)
		{
				scanf("%d",& matrix[h][k]);
				
				if (h==0 && k==0)
				max = matrix [h][k];
				
				if (matrix[h][k] > max)
				max = matrix [h][k];
		}
		puts("");
	}
	
	printf("The greatest value in your matrix is %d",max);

	return 0;
}