#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(void)
{
	//int i, j, k = 0;
	// 在這裡撰寫程式
	for (int i = 1; i <= 500; i++)
	{
		for (int j = 1; j <= 500; j++)
		{
			for (int k = 1; k <= 500; k++)
			{
				if (pow(i,2) == pow(j,2) + pow(k,2)&&(i>j)&&(j>k)&&(i>k))
				{
					printf("%d\t%d\tand\t%d \n", k, j, i);
				}
				else
					continue;
			}
		}
	}
	system("pause");
	return 0;
}
