#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int a=0, flag=0, flag2=0, flag3=0,flag4=0, i , empty, use=1;
	char email[5][50]={"ghufran@gmail.com","aina@gmail.com","Saif@gmail.com"}; 
	char passwords[5][50]={"Hello12345","Onepieceisreal","xyz987654321"}; 
	char chke[50], chkp[50];
	
	while(use==1)		
	{
	puts("===== Welcome to the Login System =====");
	puts("1.Sign In");
	puts("2. Sign Up");
	printf("Enter your choice: ");
	scanf("%d", &a);

	switch(a)
	{
		case 1: 
			printf("Enter your email: ");
			scanf("%s", chke);
			
			printf("Enter your password: ");
			scanf("%s", chkp);
			flag = 0;
			for(i=0;i<5;i++)
			{
				if (strcmp(chke, email[i])==0)
				{
					if (strcmp(chkp, passwords[i])==0)
					{
					flag=1;
					break;
				 	}
				}
			}
			if (flag==1)
			puts("Sign in successful!");
			else
			puts("Invalid email or password.");
			printf("Press 0 if you want to terminate the program or 1 to continue.");
			scanf("%d",&use);
			break;
		
		case 2:
			for (i=0;i<5;i++)
			{
				if (email[i][0]=='\0')
				flag=1;
			}
			if (flag==0)
			{
				puts("User limit reached. Cannot register more users.");
				break;
			}
			
			while (1)
			{
				flag=0;  flag2 =0;
				printf("Enter a new email: ");
				scanf("%s", chke);
				
				printf("Enter password: ");
				scanf("%s", chkp);
				
				flag=0;
				for (i=0;i<5;i++)
				{
					if (strcmp(chke,email[i])==0)
					flag=1;
				}
				if (strlen(chkp)>7)
				{	
					flag2=0; flag3=0; flag4=0;
					for (i=0; i < strlen(chkp);i++)
					{
						if (isalpha(chkp[i])!=0 )
						 	flag3=1;
						if	(isdigit(chkp[i]) != 0) 
						flag4=1;
						if (flag3==1 && flag4==1)
						flag2=1;
					}
				}
				if (flag==1)
				puts("Email already exists, enter a new one");
				if (flag2==0)
				puts("Password must be at least 8 characters long and alphanumeric!, enter a new one");
				if (flag==0 && flag2== 1)
				break;
			}
			if (flag==0 && flag2==1)
			{
				for (i=3;i<5;i++)
				{ 
					if (email[i][0]=='\0'){
					empty=i;
					break;
					}
				}
				strcpy(email[empty], chke);
				strcpy(passwords[empty], chkp);
				puts("Account created successfully!");
				
			}
			
			printf("Press 0 if you want to terminate the program or 1 to continue.");
			scanf("%d",&use);
			break;
		
		default:
			puts("Invalid Input");	
			break;
	}
	}
	return 0;
}