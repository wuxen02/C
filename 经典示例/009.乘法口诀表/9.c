#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int arr[10][10];
	for (int i = 0; i < 10; i++)
	{
		arr[i][0] = arr[0][i] = i;
	}
	for (int i = 1; i < 10; i++)
	{
		for (int j = i; j < 10; j++)
		{
			arr[i][j] = arr[j][i] = i * j;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf_s("%3d", arr[i][j]);
		}
		printf_s("\n");
	}
	system("pause");
	return 0;
}