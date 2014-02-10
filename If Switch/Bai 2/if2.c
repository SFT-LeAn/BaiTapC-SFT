#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	if (a == 0)
	{
		if (b == c)
		{
			printf("PT vo so nghiem \n");
		}
		else
		{
			printf("PT vo nghiem \n");
		}
	}
	else
	{
		printf("PT co nghiem la %d.%d \n",(c-b)/a,(c-b)%a*1000/a);
	}
}
