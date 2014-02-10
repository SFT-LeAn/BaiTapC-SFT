#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Nhap nam: ");
	scanf("%d", &a);
	printf("Nhap thang: ");
	scanf("%d", &b);
	printf("Nhap ngay: ");
	scanf("%d", &c);
	
	
	int SoNgayThang[13];
	SoNgayThang[1] = SoNgayThang[3] = SoNgayThang[5] = SoNgayThang[7] = SoNgayThang[8] = SoNgayThang[10] = SoNgayThang[12] = 31;
	SoNgayThang[4] = SoNgayThang[6] = SoNgayThang[9] = SoNgayThang[11] = 30;
	if (b%4 == 0)
	{
		SoNgayThang[2] = 28;
	}
	else
	{
		SoNgayThang[2] = 29;
	}
	
	int i,x;
	i = 1;
	x = 0;
	while (i < b)
	{
		x += SoNgayThang[i];
		i += 1;
	}
	x += c - 1;
	
	printf("Ngay %d/%d/%d la ngay thu %d cua nam %d \n",c,b,a,x,a);
}
