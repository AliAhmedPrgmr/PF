#include<stdio.h>

struct student{
	char name[50];
	int roll;
	int	mark[3];
};

int main()
{
	struct student data[5];
	float avg[5]={0};
	for (int i=0;i<5;i++)
	{
		printf("Please enter name of student %d: ",i+1);
		scanf("%s",&data[i].name);
		printf("Please enter roll number of student %d: ",i+1);
		scanf("%d",&data[i].roll);
		for (int j=0;j<3;j++)
		{
			printf("Please enter marks of student %d in subject %d: ",i+1,j+1);
			scanf("%d",&data[i].mark[j]);
			avg[i] += data[i].mark[j];
		}
		avg[i] = avg[i] / 3;
	}

	puts("");
	for (int i=0;i<5;i++)
		printf("%s's average marks were %.2f\n",data[i].name,avg[i]);
	
	float high=avg[0]; 
	int add = 0;
	for (int i=0;i<5;i++)
	{
		if (avg[i] > high)
		{
			high = avg[i];
			add = i;
		}
	}
	printf("%s had the highest average marks \n",data[add].name);
	
	return 0;
}

































/*
struct Employee {
    int id;
    char name[50];
    int salary;
};


int main ()
{
	struct Employee e[3];
	
	for (int i=0; i<3;i++)
	{
		printf("Please enter ID of employee %d: ",i+1);
		scanf("%d",&e[i].id);
		printf("Please enter Name of employee %d: ",i+1);
		scanf("%s",&e[i].name);
		printf("Please enter Salary of employee %d: ",i+1);
		scanf("%d",&e[i].salary);
		puts("");
	}
	
	puts("	    Employee Table");
	printf("%-12s %-12s %-12s %-12s\n", "Employee No.", "Employee ID", "Name", "Salary");
		
	for (int i=0; i<3;i++)
	{
		printf("%-12d %-12d %-12s %-12d\n",i+1,e[i].id,e[i].name,e[i].salary);
	}
	return 0; 
}
*/