#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Function for Question 2
void MaxChar(char *array)
{
	int c,d,i=0;
	c = strlen(array);
	int arr[26][2]={0};
	
	while(array[i]!= '\0')
	{
		array[i] = toupper(array[i]);
		i++;
	}
	
	for (int i=0;i<c;i++)
	{
		d = (int)array[i];
		for (int j=0;j<=i;j++)
		{
			if ( arr[j][0]==0 )
			{
				arr[j][0]= d;
				arr[j][1] = 1;
                break;
			}
			else if ( arr[j][0]==d )
			{	arr[j][1] += 1;
                break;
            }    
		
        	else 
				continue;
		}
	}
	int high=-99,j=0,x ;
	while ( arr[j][0] != 0)
	{
		if (arr[j][1]>high)
		{
			high=arr[j][1];
			x=arr[j][0];
		}
		j++;
	}
	if (high==1)
		printf("No characters appeared twice in the name\n");
	else
		printf("Maximum occurence was of %c with %d times.\n",x,high);

}


int main ()
{
//Question1
printf("Question 1\n\n");
	
	int a=0, b=0; 
	char firstname[50], secondname[50], fullname[100]="" ;
	printf("Enter your first name: ");
	scanf("%s",firstname);
	printf("Enter your second name: ");
	scanf("%s",secondname);
	
	while (firstname[a] != '\0')
	{
		fullname[a] = firstname[a];
		a++;
	}
	
	while (secondname[b] != '\0')
	{
		fullname[a] = secondname[b];
		b++;
		a++;
	}
	
	for(int i = a-1;i>=0;i--)
	printf("%c",fullname[i]);
	
//Question 2
printf("\n\n\nQuestion 2\n\n");
	char name[80]="", course1[80]="", course2[80]="";
	
	
	printf("Enter your name without spaces: ");
	scanf("%s", name);
	MaxChar(name);
	
	printf("Enter your first course name without spaces: ");
	scanf("%s", course1);
	MaxChar(course1);
	
	printf("Enter your second course name without spaces: ");
	scanf("%s", course2);
	MaxChar(course2);

//Question 3
printf("\n\nQuestion 3\n\n");
	
	fflush(stdin);
	char str1[50]="", str2[50]="";
	int flag = 0, i=0, e;
	printf("Enter first string: ");
	fgets(str1, sizeof(str1), stdin);
	printf("Enter second string: ");
	fgets(str2, sizeof(str2), stdin);
	
	e=strlen(str1)-1;
	str1[e]='\0';
	e=strlen(str2)-1;
	str2[e]='\0';
	
	while ( str1[i] != '\0' && str2[i] != '\0' )
	{
		if ( str1[i]==str2[i] )
		{
			i++;
			continue;
		}
		else if ( str1[i]>str2[i] )
		{
			puts("First String is greater than the second string");
			flag=1;
			break;
		}
		else
			{
				puts("Second string is greater than the first string");
				flag=1;
				break;
			}
	}
	
	if (flag==0)
	{
		if ( (str1[i] == '\0' && str2[i] != '\0') || (str1[i] != '\0' && str2[i] == '\0') )
		printf("The 2 strings didn't had same number of characters and were equal upto that point");
		else
		printf("Both of the strings are same");
	}
	
	return 0;
}