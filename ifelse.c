#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
void main4()
{
	printf("请输入你要计算的体积的编号，1为球体，2为正方体，3为长方体");
	int num;
	scanf("%d", &num);
	if (num == 1)
	{
		printf("请输入球体的半径R=");
		float R;
		scanf("%f", &R);
		printf("球的体积=%f", 3.1415926 * 4 / 3 * R*R*R);
	}
	else if (num == 2)
	{
		printf("请输入正方体的棱长=");
		float X;
		scanf("%f", &X);
		printf("正方体的体积=%f", X*X*X);
	}
	else if (num == 3)
	{

		printf("请分别输入长方体的长，宽，高");
		/*float  X;
		float   Y;
		float   Z;*/
		float  X, Y, Z;

		scanf("%f,%f,%f", &X, &Y, &Z);
		printf("长方体的体积=%f", X*Y*Z);
	}
	else
	{
		printf("你输入错误");
	}
	system("pause");
}