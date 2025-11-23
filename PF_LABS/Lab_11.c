#include <stdio.h>
#include <string.h>

//Question 1 Structure
struct employee{
	int id;
	char name[60];
	float salary;
	char department[100];
};

//Question 3 Structure
struct phone{
	int area;
	int exchange;
	int number;
};

//Question 4 Structures
struct course{
	char name[60];
	float gpa;
};

struct add{
	char street[50];
	char city[50];
	char town[50];
	int  zip;
};
struct student{
	float          cgpa;
	struct course  subject[5];
	struct add     address;
};

//Question 5 Structure
struct complex{
	float real;
	float imag;
};

//Question 5 Functions
struct complex ReadComplex()
{
	struct complex a;
	printf("Enter the real part: ");
	scanf("%f",&a.real);
	printf("Enter the imaginary part: ");
	scanf("%f",&a.imag);
	return a;
}

void WriteComplex(struct complex a)
{
	if (a.imag >= 0)
        printf("%.2f + %.2fi\n", a.real, a.imag);
    else
        printf("%.2f - %.2fi\n", a.real, -a.imag);
}

struct complex AddComplex(struct complex a,struct complex b)
{
	struct complex c;
	c.real = a.real + b.real  ;
	c.imag = a.imag + b.imag ;
	return c;
}

struct complex MultiplyComplex(struct complex a,struct complex b)
{
	struct complex c;
	c.real = (a.real * b.real) - (a.imag * b.imag) ;
	c.imag = (a.imag * b.real) + (a.real * b.imag) ;
	return c;
}

int main ()
{
//Question 2
printf("Question 2\n");
	struct employee e1;
	printf("Enter your ID: ");
	scanf("%d",&e1.id);
	printf("Enter your name: ");
	getchar();
	fgets(e1.name,59,stdin);
	printf("Enter your salary: ");
	scanf("%f",&e1.salary);
	printf("Enter your Department: ");
	getchar();
	fgets(e1.department,99,stdin);
	
	
	printf("\n\nEmployee ID: %d\n",e1.id);
	printf("Employee Name: %s",e1.name);
	printf("Employee Salary: %.2f\n",e1.salary);
	printf("Employee Department: %s",e1.department);
	
//Question 3
printf("\n\n\nQuestion 3\n");
	struct phone p1,p2;
	p1 = (struct phone) {313,786,5510};
	
	printf("Enter your area code: ");
	scanf("%d",&p2.area);
	printf("Enter your exchange: ");
	scanf("%d",&p2.exchange);
	printf("Enter your number: ");
	scanf("%d",&p2.number);

	printf("My number is (%d) %d-%d\n",p1.area,p1.exchange,p1.number);	
	printf("Your number is (%d) %d-%d",p2.area,p2.exchange,p2.number);
	
//Question 4
printf("\n\n\nQuestion 4\n");
	struct student s[2];
	float hg[2]={0.0}, hc[2];
	char high[2][60];
	
	for(int i=0;i<2;i++)
	{
		printf("Please enter CGPA of student %d: ",i+1);
		scanf("%f",&s[i].cgpa);
		hc[i] = s[i].cgpa;
		
		for (int j=0;j<5;j++)
		{
			printf("Please enter name of subject %d: ",j+1);
			getchar();
			fgets(s[i].subject[j].name, sizeof s[i].subject[j].name, stdin);
			printf("Please enter GPA of subject %d: ",j+1);
			scanf("%f",&s[i].subject[j].gpa);
			s[i].subject[j].name[strcspn(s[i].subject[j].name,"\n")] = '\0' ;
			
			if (s[i].subject[j].gpa > hg[i])
			{
				hg[i] = s[i].subject[j].gpa ;
				strcpy(high[i], s[i].subject[j].name) ;
			}
		}
		
		printf("Please enter street name of student %d: ",i+1);
		getchar();
		fgets(s[i].address.street, 49, stdin);
		printf("Please enter city of student %d: ",i+1);
		getchar();
		fgets(s[i].address.city, 49, stdin);
		printf("Please enter town of student %d: ",i+1);
		getchar();
		fgets(s[i].address.town,49,stdin);
		printf("Please enter zip of student %d's address: ",i+1);
		scanf("%d",&s[i].address.zip);
		puts("");
	}
	
	printf("Student 1 had the highest GPA in %s\n",high[0]);
	printf("Student 2 had the highest GPA in %s\n",high[1]);
	
	if (hc[0] > hc[1])
		printf("Student 1 had higher CGPA\n");
	else
		printf("Student 2 had higher CGPA\n");
	
	
	
//Question 5
printf("\n\n\nQuestion 5\n");
	
	struct complex d,e,f,g;
	d = ReadComplex();
	e = ReadComplex();
	WriteComplex(d);
	WriteComplex(e);
	f = AddComplex(d,e);
	g = MultiplyComplex(d,e);
	printf("The result of the addition is: ");
	WriteComplex(f);
	printf("The result of the multiplication is: ");
	WriteComplex(g);

}

