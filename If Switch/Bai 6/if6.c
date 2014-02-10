#include <stdio.h>

int main()
{
	int a,b;
	printf("Nhap nam: ");
	scanf("%d", &a);
	printf("Nhap thang: ");
	scanf("%d", &b);
	
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
	
	printf("Thang %d nam %d co %d ngay \n",b,a,SoNgayThang[b]);
	
}
