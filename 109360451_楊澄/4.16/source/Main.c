#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	// 在這裡撰寫程式
	
	//(A)
	printf("(A)\n");
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%s","*");
		}
		printf("\n");
	}
	//B
	printf("(B)\n");
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 10; j >= i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	//C
	printf("(C)\n");
	for (int i = 0; i <= 10; i++)
	{
		
		if (i == 1)
		{
			for (int j = 10; j >= i; j--)
			{
				printf("*");
			}
		}
		if (i>1)
		{
			for (int j = 0; j <i-1; j++)
			{
				printf(" ");
			}
			for (int j = 10 - i; j >= 0; j--)
			{
				printf("%s", "*");
			}

		}
		printf("\n");
	}
	//D
	printf("(D)\n");
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 10 - i; j > 0; j--)
		{
			printf("%s", " ");
		}
		for (int j = 0; j < i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
