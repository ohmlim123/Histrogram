
#include<stdio.h>
int main()
{
	int A[100][100]  ;
	int B[100] = {};
	int N = 0, M = 0;
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0;
	scanf_s("%d %d", &N, &M);
	for (int i = 0;i < N;i++)
	{
		for (int j = 0;j < M;j++)
		{
			scanf_s("%d", &A[i][j]);
		}
	}
	printf("\n");
	for (int i = 0;i < N;i++)
	{
		for (int j = 0;j < M;j++)
		{
			for (int h = 0;h <= 9;h++)
			{
				if (A[i][j] == h)
				{
					B[h]++;
				}
			}

		}
	}
	for (int i = 0;i <= 9;i++)
	{
		printf("%d ", i);
		for (int j = 1;j <= B[i];j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}