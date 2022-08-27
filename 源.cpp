#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	int i, j, a[6][6], p=99;
	srand((unsigned int)time(NULL));
	for (i=0;i<=5;i++)
		for (j = 0; j <= 5; j++)
		{
			a[i][j] = rand() % 90+10;
		}
	for (i = 0; i <= 5; i++)
	{
		a[i][i] = 0;
		a[i][5 - i] = 0;
	}
	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j <= 5; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i <= 5; i++)
		for (j = 0; j <= 5; j++)
		{
			if (a[i][j] <= p)
				p = a[i][j];
		}
	printf("最小值为%d\n", p);
	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j <= 5; j++)
		{
			if (a[i][j] == p)
				printf("最小值位于%d行%d列\n", i, j);
			break;
		}
	}
	printf("此程序由胡仙编写");
	return 0;
}