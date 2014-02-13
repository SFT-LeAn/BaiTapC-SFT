#include <stdio.h>


int main()
{
	int n,i,temp;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	struct phantu
	{
		int data;
		struct phantu *next;
		struct phantu *back;	
	};
	typedef struct phantu *pointer;

	pointer p;
	pointer q;
	p = (pointer)malloc(sizeof(struct phantu));
	p->back = NULL;
	
	//Co so 2
	i = n;
	while (i > 0)
	{
		temp = i % 2;
		i /= 2;
		p->data = temp;
		q = p;
		p = (pointer)malloc(sizeof(struct phantu));
		p->back = q; 
	}
	
	printf ("%d doi sang co so 2 la: ",n);
	while (p->back != NULL)
	{
		p = p->back;
		printf("%d",p->data);
	}
	printf("\n");
	
	//Co so 8
	i = n;
	while (i > 0)
	{
		temp = i % 8;
		i /= 8;
		p->data = temp;
		q = p;
		p = (pointer)malloc(sizeof(struct phantu));
		p->back = q; 
	}
	
	printf ("%d doi sang co so 8 la: ",n);
	while (p->back != NULL)
	{
		p = p->back;
		printf("%d",p->data);
	}
	printf("\n");
	
	//Co so 16
	i = n;
	while (i > 0)
	{
		temp = i % 16;
		i /= 16;
		p->data = temp;
		q = p;
		p = (pointer)malloc(sizeof(struct phantu));
		p->back = q; 
	}
	
	printf ("%d doi sang co so 16 la: ",n);
	while (p->back != NULL)
	{
		p = p->back;
		if (p->data < 10)
		{
			printf("%d",p->data);
		}
		else
		{
			printf("%c",p->data+55);
		}
	}
	
	printf("\n");
}
