#include <stdio.h>

int main(){
	
	int choice, amount;
	printf("Press 1 to Check Balance");
	printf("\nPress 2 to Withdraw Money");
	printf("\nPress 3 to Deposit Money\n");
	
	scanf("%d",&choice);
	
	switch (choice) {
		case 1:
			printf("Your current balance is not available due to the under development of this program ");
			break;
		case 2:
			printf("\nEnter amount to withdraw\n");
			scanf("%d",&amount);
			printf("\nPlease collect your cash");
			break;
		case 3:
			printf("\nPlease deposit the cash through the given slot");
			printf("\nYour cash has been successfully deposited");
			break;
		default:
			printf("Invalid Option");
			break;
				
	}

}

