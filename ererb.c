#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
void main1()
{
	printf("请输入你想要计算的图形的编号，1代表圆形，2代表正方形，3代表矩形");
	int num;
	scanf("%d", &num);
	if (num == 1)
	{
		printf("请输入圆的半径R=");
		float R;
		scanf("%f", &R);
		printf("圆的面积=%f", R*R*3.1415926);
	}
	else if (num == 2)
	{
		printf("请输入正方形的边长X=");
		float X;
		scanf("%f", &X);
		printf("正方形的面积=%f", X*X);
	}
	else if (num == 3)
	{
		printf("请分别输入矩形的长与宽");
		float X, Y;
		scanf("%f,%f", &X, &Y);
		printf("矩形的面积=%f", X*Y);
	}
	else
		printf("你输入错误，请重新输入");

	system("pause");
}
void main2()
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
void mainA()
{
	printf("请输入你所想求的，0为面积，非0为体积");
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