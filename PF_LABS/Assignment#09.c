#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Function for Question 1
void CountFrequency(int *arr,int n)
{
	int i,j,d;
	
	int count[n][2]; //2d array to store the value and number of times it occurred
	for (i=0;i<2;i++)
	{						//Storing -1 in the 2d array
		for (j=0;j<n;j++)	//since variable-length-arrays could not be 
		count[j][i] = -1;	//initialized at run time
	}
	
	for (int i=0;i<n;i++)
	{
		d = arr[i];
		for (int j=0;j<=i ;j++)
		{
			if ( count[j][0] == -1 )
			{
				count[j][0]= d;
				count[j][1] = 1;
				break;
			}
			else if ( count[j][0] == d )
				{
					count[j][1] += 1;
					break;
				}
			else 
				continue;
		}
	}
	
	i=0;
	while (count[i][0] != -1 )
	{												
		printf("%d occurred %d times\n",count[i][0],count[i][1]);
		i++;	 	
	}
}

//Function for Question 2
void Position() 
{
    int marks;
    float experience;

    
    printf("Enter your test marks: ");
    scanf("%d", &marks);

    
    if (marks >= 70) 
	{
        printf("Enter your experience in years: ");
        scanf("%f", &experience);
        if (experience >= 2)
            printf("You are selected as Associate Developer\n");
        else if (experience >= 1)
            printf("You are selected as Assistant Developer\n");
        else
            printf("You are selected as Trainee Engineer\n");
    } 
    else if (marks >= 60) 
	{
        printf("Enter your experience in years: ");
        scanf("%f", &experience);
        if (experience >= 1)
            printf("You are selected as Assistant Developer\n");
        else
            printf("You are selected as Trainee Engineer\n");
    }
    else if (marks >= 50)
	{
        printf("You are selected as Trainee Engineer\n");
    }
    else 
	{
        printf("Sorry, you are not selected.\n");
    }
}
int main ()
{
//Question 1
printf("Question 1\n");
	int len;
	printf("Enter number of elements of the array: ");
	scanf("%d",&len);
	
	int array1[len];
	
	srand(time(NULL));
	
	for (int i=0;i<len;i++)
		array1[i] = rand() % 11;
		
	CountFrequency(array1,len);

//Question 2
printf("\n\n\nQuestion 2\n");
	Position();	
	
}
