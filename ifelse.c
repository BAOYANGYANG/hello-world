#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
void main4()
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

		printf("��ֱ����볤����ĳ�������");
		/*float  X;
		float   Y;
		float   Z;*/
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