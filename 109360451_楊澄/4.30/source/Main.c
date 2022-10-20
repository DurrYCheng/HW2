#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(void)
{
	// 在這裡撰寫程式
	for (int i = 0; i <5; i++)
	{
		for (int j = 4 - i; j > 0; j--)
		{
			printf(" ");
		}
		for (int j = 1; j <=2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 4; i >= 0; i--)
	{
		for (int j =i; j <= 4; j++)
		{
			printf(" ");
		}
		for (int j = 2*i-1; j >0; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
