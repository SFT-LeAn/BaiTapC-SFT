#include <stdio.h>

int main()
{
	int n, i, temp, TongDuong, TongAm, nDuong, nAm, Tong;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	TongDuong = TongAm = nDuong = nAm = Tong = 0;

	for (i = 1; i < n+1; i++)
	{
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d", &temp);
		Tong += temp;
		if (temp != 0)
		{
			if (temp > 0)
			{
				TongDuong += temp;
				nDuong++;
			}
			else
			{
				TongAm += temp;
				nAm++;
			}
		}
	
	}
	printf("Tong so duong la: %d\n",TongDuong);
	printf("Trung binh cong cac so duong la: %f\n",(float)TongDuong/nDuong);
	printf("Tong so am la: %d\n",TongAm);
	printf("Trung binh cong cac so am la: %f\n",(float)TongAm/nAm);
	printf("Trung binh cong ca day so la: %f\n",(float)Tong/n);
}
