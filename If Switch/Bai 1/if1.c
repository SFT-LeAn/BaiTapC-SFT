#include <stdio.h>

int main()
{
	int a,b,c,max,min;
	printf("Nhap so thu 1: ");
	scanf("%d", &a);
	printf("Nhap so thu 2: ");
	scanf("%d",&b);
	printf("Nhap so thu 3: ");
	scanf("%d",&c);
	max = a;
	min = a;
	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}
	if (b < min)
	{
		min = b;
	}
	if (c < min)
	{
		min = c;
	}
	printf("So lon nhat la %d \n",max);
	printf("So nho nhat la %d \n",min);
	printf("Trung binh cong la %d.%d \n",(a+b+c)/3,(a+b+c)%3*1000/3);
	
}
