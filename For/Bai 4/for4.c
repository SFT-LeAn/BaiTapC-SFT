#include <stdio.h>

int main()
{
	int n, i, max, min, MaxPos, MinPos, temp;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	printf("Nhap phan tu thu %d: ",1);
	scanf("%d", &temp);
	
	max = min = temp;
	MaxPos = MinPos = 1;
	
	for (i = 2; i < n+1; i++)
	{
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d", &temp);
		if (min > temp)
		{
			min = temp;
			MinPos = i;
		}
		if (max < temp)
		{
			max = temp;
			MaxPos = i;
		}
	}
	printf("Max la: %d la phan tu thu %d\n",max,MaxPos);
	printf("Min la: %d la phan tu thu %d\n",min,MinPos);
}
