#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
void main1()
{
	printf("����������Ҫ�����ͼ�εı�ţ�1����Բ�Σ�2���������Σ�3��������");
	int num;
	scanf("%d", &num);
	if (num == 1)
	{
		printf("������Բ�İ뾶R=");
		float R;
		scanf("%f", &R);
		printf("Բ�����=%f", R*R*3.1415926);
	}
	else if (num == 2)
	{
		printf("�����������εı߳�X=");
		float X;
		scanf("%f", &X);
		printf("�����ε����=%f", X*X);
	}
	else if (num == 3)
	{
		printf("��ֱ�������εĳ����");
		float X, Y;
		scanf("%f,%f", &X, &Y);
		printf("���ε����=%f", X*Y);
	}
	else
		printf("�������������������");

	system("pause");
}
void main2()
{
	printf("��������Ҫ���������ı�ţ�1Ϊ���壬2Ϊ�����壬3Ϊ������");
	int num;
	scanf("%d", &num);
	if (num == 1)
	{
		printf("����������İ뾶R=");
		float R;
		scanf("%f", &R);
		printf("������=%f", 3.1415926 * 4 / 3 * R*R*R);
	}
	else if (num == 2)
	{
		printf("��������������ⳤ=");
		float X;
		scanf("%f", &X);
		printf("����������=%f", X*X*X);
	}
	else if (num == 3)
	{
		printf("��ֱ����볤����ĳ���������");
		
		float  X, Y, Z;
		scanf("%f,%f,%f", &X, &Y, &Z);
		printf("����������=%f", X*Y*Z);
	}
	else
	{
		printf("���������");
	}
	system("pause");
}
void mainA()
{
	printf("��������������ģ�0Ϊ�������0Ϊ���");
	int num;
	scanf("%d", &num);
	if (num)
	{
		main2();
	}
	else
	{
		main1();
	}
}