

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void main5()
{
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	printf("a=%f,b=%f,c=%f\n", a, b, c);
	//���������ʽ���д?







	printf("���ս��a=%f,b=%f,c=%f", a, b, c);
	system("pause");
}


void main4()
{
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	printf("a=%f,b=%f,c=%f\n", a, b, c);
	if (a < b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}
	/*if (a < c)
	{
		a = a + c;
		c = a - c;
		a = a - c;
	}*/
	if (b < c)
	{
		b = b + c;
		c = b - c;
		b = b - c;
	}

	if (a < b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}




	printf("���ս��a=%f,b=%f,c=%f", a, b, c);
	system("pause");
}
void main3()
{
	int a, b,t;
	scanf("%d%d", &a, &b);
	printf("��a=%d,b=%d\n", a, b);
	a > b ? (t = a, a = b, b = t) : 0;
	printf("���ս����a=%d,b=%d", a, b);

	system("pause");
}
void main2()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("a=%d,b=%d\n", a, b);
	if (a > b)
	{
		int t = a;
		a = b;
		b = t;
	}



	printf("���ս��a=%d,b=%d", a, b);
	system("pause");
}

void main1()
{
	if (0)
	{

		system("ipconfig");

	}



	system("pause");
}