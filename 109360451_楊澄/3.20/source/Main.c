#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	// 在這裡撰寫程式
	int hour = 0;

	printf("Enter # of worked (-1 to end):");
	scanf("%d", &hour);
	if (hour == -1)
	{
		system("pause");
		return 0;
	}
	do
	{	
		float sala = 0;
		float rate = 0;
		printf("Enter hourly rate of the woker: ");
		scanf("%f", &rate);
		if (hour < 40)
		{
			sala = hour * rate;
			printf("Salary is $%.2f\n", sala);
		}
		else
		{
			sala = 40 * rate + (hour - 40) * 1.5 * rate;
			printf("Salary is $%.2f\n", sala);
		}
		printf("Enter # of worked (-1 to end):");
		scanf("%d", &hour);
	} while (hour != -1);

	system("pause");
	return 0;
}
