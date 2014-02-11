#include <stdio.h>

int main()
{
	int n,GiaiThua;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("%d! = ",n);
	GiaiThua = 1;
	for (; n > 1;)
	{
		GiaiThua = GiaiThua * n--;
	}
	printf("%d\n",GiaiThua);
}
