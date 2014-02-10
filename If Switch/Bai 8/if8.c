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
	x %= 7;
	
	printf("Ngay %d/%d/%d la ngay thu ",c,b,a);
	
	switch(x) 
	{
    	case 1:
    		printf("hai \n");
    		break;
    	case 2:
    		printf("ba \n");
    		break;
    	case 3:
    		printf("tu \n");
    		break;
    	case 4:
    		printf("nam \n");
    		break;
    	case 5:
    		printf("sau \n");
    		break;
    	case 6:
    		printf("bay \n");
    		break;
    	case 0:
    		printf("chu nhat \n");
    		break;	
	}
}
