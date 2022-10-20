#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(void)
{
	// 在這裡撰寫程式
	float t=0;
	float sala = 0;
	float h_rate = 0;
	float gross = 0;
	int c=0;
	printf("Enter the paycode (-1 to end) :");
	scanf("%d", &c);
	//printf("%d", c);
	if (c == -1)
	{
		system("pause");
		return 0;
	}
	do
	{
		
		switch (c)
		{
		case 1:
			
			printf("Constant $ for managers\n");
			break;
		case 2:
			printf("Enter the time of worker :");
			scanf("%f", &t);
			printf("Enter the hourly rate of worker :");
			scanf("%f", &h_rate);
			if (t <= 40)
			{	
				sala = h_rate * t;
				printf("%.2f $ for hourly workers\n",sala);
			}
			else
			{
				sala = h_rate * 40 + h_rate*(1.5*(t-40));
				printf("%.2f $ for hourly workers\n", sala);
			}
			break;
		case 3:
			printf("Enter the weakly gross of worker :");
			scanf("%f", &gross);
			sala = 250 + gross * 0.057;
			printf("%.2f $ for commission workers\n",sala);
			break;
		case 4:
			printf("Enter how much items be done :");
			scanf("%f", &t);
			printf("Enter the pay for each item:");
			scanf("%f", &h_rate);
			sala = t * h_rate;
			printf("%.2f $ for pieceworkers\n",sala);
			break;
		}
		printf("Enter the paycode (-1 to end) :");
		scanf("%d", &c);

	} while (c != -1);
	system("pause");
	return 0;
}
