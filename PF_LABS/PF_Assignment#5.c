#include <stdio.h>

int main()
{

//Question 1
printf("Question 1\n\n");
	char choi;
	printf("Are you sure you want to delete\nPress Y/y to proceed\nPress N/n to cancel : ");
	scanf("%c",&choi);
	
	switch (choi){
	
	case 'Y':
	case 'y':
		{
		printf("Deleted successfully");
		break;
		}
	case 'N':
	case 'n':
		{
		printf("Deletion cancelled");
		break; 
		}
	default :
		{
			printf("Invalid Input");
		break;
		}
	}
	
//Question 2
	printf("\n\n\n");
	printf("Question 2\n");
	char ch,si ;
	float time;
	printf("Enter W for White coffee or B for Black coffee: \n");
	scanf(" %c",&ch);
	printf("Enter S for single size or D for double\n");
	scanf(" %c",&si);
	time = 0 ;
	switch(ch) 	
	{
		case 'B':
		case 'b':
			time = 20+20+25+15+25 ;
			break;
		case 'W':
		case 'w':
			time = 15+15+20+2+4+20 ;
			break;
		default :
		printf("Invalid Input");
	}
	if (time != 0 )
	{
		if (si == 'D' || si == 'd')
			printf("The total required time is %.1f minutes",time*1.5);
		else
			printf("The total required time is %.1f minutes",time);
	}

//Question 3
printf("\n\n\n Question 3 \n");
	
	float nts,fs;
	puts("Please input your NTS marks: ");
	scanf("%f",&nts);
	puts("Please enter your FSc percentage: ");
	scanf("%f",&fs);
	
	if (fs>=0 && fs<=100 && nts>=0 && nts<=100)
	{
	if (fs > 70)
	{
		if (nts >= 70)
			printf("You are selected for IT in Oxford");
		else if (nts >= 60 && nts< 70)
			printf("You are selected for Electronics in Oxford");
		else if (nts >= 50 && nts< 60)
			printf("You are selected for Telecommunication in Oxford");
		else 
			printf("Your NTS marks are very low, you can't go to any University");
	}
	else
	{
	
		if (fs>= 60 && nts>=50)
				printf("You are selected for IT in MIT");
		else if (fs>= 50 && fs < 60 && nts>=50)
				printf("You are selected for Chemical in MIT");
		else if (fs>40 && fs<50 && nts>=50)
				printf("You are selected for Computer in MIT");
		else if (fs>40 && nts<50)
			printf("Your NTS marks are very low, you can't go to any University");	
		else 
			printf("You are a total failure");	
	}
    }
    else 
    printf("Invalid Input");

//Question 4
	printf("\n\n\n");
	printf("Question 4\n");
	int pri,quan,num,bill;
	char choice;
	bill=0;
	num=1;
	printf("\n\nPlease select from the following items\n") ;
	printf("B= Burger \n") ;
	printf("F= French Fries \n") ;
	printf("P= Pizza \n") ;
	printf("S= Sandwiches \n") ;
	scanf(" %c",&choice) ;
	
	switch (choice)
	{
		case 'b':
		case 'B':
			printf("Enter Number of Burgers you want to order: ");
			scanf("%d",&quan);
			pri = quan * 200 ;
			break;
		case 'f':
		case 'F':
			printf("Enter Number of French Fries you want to order: ");
			scanf("%d",&quan);
			pri = quan * 50 ;
			break;
		case 'p':
		case 'P':
			printf("Enter Number of Pizzas you want to order: ");
			scanf("%d",&quan);
			pri = quan * 500 ;
			break;
		case 's':
		case 'S':
			printf("Enter Number of Sandwiches you want to order: ");
			scanf("%d",&quan);
			pri = quan * 150 ;
			break;
		default:
			printf("Invalid Input\n");
			num=0 ;
	}
	bill = bill + pri ;
	pri = 0 ;

	if (num != 0)
	printf("Your total bill is %d",bill);
	else 
	printf("There was an invalid input, please restart the program");
}