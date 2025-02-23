#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()

{
	int n=0;
	scanf("%d", &n);
	int arr[81][81] = { 0 };
	int i = 0,j=0,m=0;
	/*for (m = 1; m <= 2 * n / 2; m++)
	{

	}*/
	/*for (i = 0; i < n; i++)
	{
		arr[i][0] = 1;
		arr[i][4] = 1;

	}
	for (j = 0; j < n; j++)
	{
		arr[0][j] = 1;
		arr[4][j] = 1;
	}*/

	for (m = 0; m < 2 * n / 2; m++)
	{
		for (i =m ; i < n-m; i++)
		{
			arr[i][m] = m+1;
			arr[i][n-m-1] = m+1;

		}
		for (j = m; j < n-m; j++)
		{
			arr[m][j] = m+1;
			arr[n-m-1][j] = m+1;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j != n - 1)
			{
				printf("%d ", arr[i][j]);
			}
			else
				printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}