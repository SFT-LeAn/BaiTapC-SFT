#include <stdio.h>

int main()
{
	int i,n,GiaiThua;
	float S;
	printf("Nhap n: ");
	scanf("%d", &n);
	GiaiThua = 1;
	S = 0;
	for (i = 1; i < n + 1; i++)
	{
		GiaiThua = GiaiThua * i;
		S = S + (float)(1)/(GiaiThua);
	}
	printf("S = %f\n",S);
}
