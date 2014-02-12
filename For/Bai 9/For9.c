#include <stdio.h>

int main()
{
	int n1 , n2, i, j, temp;
	printf("Nhap so phan tu day thu nhat: ");
	scanf("%d", &n1);
	int a1[n1];
	
	for (i = 0; i < n1; i++)
	{
		printf("Nhap phan tu thu %d: ",i + 1);
		scanf("%d", &temp);
		a1[i] = temp;
	}

	printf("Nhap so phan tu day thu hai: ");
	scanf("%d", &n2);
	int a2[n2];
	
	for (i = 0; i < n2; i++)
	{
		printf("Nhap phan tu thu %d: ",i + 1);
		scanf("%d", &temp);
		a2[i] = temp;
	}
	
	printf("Day sau khi nhap la: \n");
	for (i = j = 0; (i < n1) || (j < n2); i++)
	{
		if (a1[i] > a2[j])
		{
			printf("%d ",a2[j]);
			j++;
			i--;
		}
		else
		{
			printf("%d ",a1[i]);
		}
	}
	
	printf("\nDay thu nhat la: \n");
	for (i = 0; i < n1; i++)
	{
		printf("%d ",a1[i]);
	}
	
	printf("Day thu hai la: \n");
	for (i = 0; i < n2; i++)
	{
		printf("%d ",a2[i]);
	}
	
}
