#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	// 在這裡撰寫程式
	float inc =0 ;
	printf("Enter sales in dollar(-1 to end) :\n");
	scanf("%f", &inc);
	if (inc == -1)
	{
		system("pause");
		return 0;
	}
	do
	{	
		float total = 0;
		total = 200 + 0.09 * inc;
		printf("Salary is : %.2f\n", total);
		printf("Enter sales in dollar (-1 to end):\n");
		scanf("%f", &inc);
	} while (inc != -1);
	system("pause");
	return 0;
}
