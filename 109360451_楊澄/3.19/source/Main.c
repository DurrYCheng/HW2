#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	// 在這裡撰寫程式
	float principal = 0;

	printf("Enter loan principal (-1 to end):");
	scanf("%f", &principal);
	
	do
	{	
		float rate = 0;
		int day = 0;
		float interest = 0;
		printf("Enter interest rate :");
		scanf("%f", &rate);
		printf("Enter term of the loan in days:");
		scanf("%d", &day);
		interest = principal * rate * day / 365;
		printf("The interest charge is : %.2f \n", interest);
		printf("Enter loan principal (-1 to end):");
		scanf("%f", &principal);
	} while (principal != -1);

	system("pause");
	return 0;
}
