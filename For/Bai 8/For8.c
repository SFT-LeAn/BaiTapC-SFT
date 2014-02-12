#include <stdio.h>

int main()
{
	int n, i, j, dem, nhay, k;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int a[n][n];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			a[i][j] = 0;
		}
	}
	
	i = 0;
	j = 0;
	for (dem = 1; dem < n + 1; dem++)
	{
		a[i][j] = dem;
		j++;
	}
	j--;
	nhay = n - 1;
	
	for (dem = n+1; nhay > 0;)
	{
		for (k = 0; k < nhay; k++)
		{
			i++;
			a[i][j] = dem;
			dem++;
		}
		for (k = 0; k < nhay; k++)
		{
			j--;
			a[i][j] = dem;
			dem++;
		}
		nhay--;
		for (k = 0; k < nhay; k++)
		{
			i--;
			a[i][j] = dem;
			dem++;
		}
		for (k = 0; k < nhay; k++)
		{
			j++;
			a[i][j] = dem;
			dem++;
		}
		nhay--;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
