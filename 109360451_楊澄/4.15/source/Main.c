#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	// 在這裡撰寫程式
	float inv,invo =0;

	printf("Enter investment (-1 to end) :");
	scanf("%f", &inv);
	
	for (float y = 10; y <= 12; y=y + 0.5)
	{
		invo = inv;
		for (int i = 0; i < 15; i++)
		{
			
			invo = invo * (1 + (y/100));
			printf("%.2f\n", invo);
		}
		printf("%.2f percent Compound-interest for 15 years : %.2f \n", y,invo);
	}
	system("pause");
	return 0;
}
