#include <stdio.h>
#include <math.h>

int GiaiThua(int i)
{
	int temp = 1;
	while (i > 1)
	{
		temp = temp*i;
		i--;
	}
	return temp;
}

void Abs(float *x)
{
	if (x < 0)
	{
		*x *= -1;
	}
}

float Eps(int x, int i)
{
	float temp;
	temp = (float)(pow(x,2*i + 1))/(GiaiThua(2*i + 1));
	Abs(&temp);
	return temp;
}

int main()
{
	int x,i,dau;
	float eps,dapan;
	printf("Nhap x: ");
	scanf("%d", &x);
	
	printf("Nhap eps: ");
	scanf("%f", &eps);
	
	i = 3;
	dapan = (float)x;
	dau = -1;
	while (Eps(x,i) > eps)
	{
		dapan += (float)(dau * pow(x,i))/(GiaiThua(3));
		i += 2;
		dau *= -1;
	}
	
	printf("%.10f \n", dapan);
}
