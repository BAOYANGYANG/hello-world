#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#define �������Ե÷� 83
#define �������Է����� 80
#define �ۺ����Ե÷� 90
#define �ۺ����Է����� 80
void main()
{
	int x, y, x1, y1;
	scanf("%d%d", &x, &y);
	if (x < 0)
	{
		x1 = -1 * x;
	}
	else
	{
		x1 = x;
	}
	if (y < 0)
	{
		y1 = -1 * y;
	}
	else
	{
		y1 = y;
	}
	//x1 < y1 ? printf("%d", y) : printf("%d", x);

	printf("%d", x1 < y1 ? y : x);




	system("pause");
}
void main14()
{
	if (�������Ե÷� < �������Է�����)
	{
		printf("�ؼҵ���̥�ȵ绰");
	}
	else
	{
		printf("������һ��");
		if (�ۺ����Ե÷� < �ۺ����Է�����)
		{
			printf("��н����");
		}
		else
		{
			printf("��н������");
		}
	}

	system("pause");
}
void main11()
{
	if (1)
	{
		system("notepad");
	}
	/*else
	{
		system("ipconfig");

	}*/
	system("pause");
}