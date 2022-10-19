#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	// 在這裡撰寫程式
	int len, wid = 0;
	printf("Enter lenth  of the rectangle (-1 to end):\n");
	scanf("%d", &len);
	if (len == -1)
	{
		system("pause");
		return 0;
	}
	printf("Enter breadth of the rectangle (-1 to end):\n");
	scanf("%d", &wid);
	if (wid == -1)
	{
		system("pause");
		return 0;
	}
	////////////////////////////////////////////////////////////////
	for (int i = 0; i < len; i++)
	{
		printf("+");
	}
	for (int i = 0; i < wid - 2; i++)
	{
		printf("\n+");
		for (int j = 0; j < len - 2; j++)
		{
			printf(" ");
		}
		printf("+\n");
	}
	for (int i = 0; i < len; i++)
	{
		printf("+");
	}
	system("pause");
	return 0;
}
