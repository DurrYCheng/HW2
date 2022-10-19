#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int acc_number = 0;
	float initial_balance = 0;
	float total_charges = 0;
	float total_credits = 0;
	float credit_limit = 0;
	float NB = 0;
	printf("Enter account number (-1 to end) :\n");
	scanf("%d", &acc_number);
	while (acc_number >= 0)
	{
		
		printf("Enter beginning balance :\n");
		scanf("%f", &initial_balance);
		printf("Enter total charges :\n");
		scanf("%f", &total_charges);
		printf("Enter total credits :\n");
		scanf("%f", &total_credits);
		printf("Enter credit limit :\n");
		scanf("%f", &credit_limit);
		printf("Account:%d\n", acc_number);
		printf("Credits limit :%.2f\n", credit_limit);
		NB = initial_balance + total_charges - total_credits;
		printf("Balance : %.2f\n", NB);
		if (NB > credit_limit)
			printf("Credit limit exceeded.\n");
		else
			continue;
		printf("Enter account number (-1 to end) :\n");
		scanf("%d", &acc_number);
	}

	system("pause");
	return 0;
}
