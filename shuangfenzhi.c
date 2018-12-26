#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#define 技术面试得分 83
#define 技术面试分数线 80
#define 综合面试得分 90
#define 综合面试分数线 80
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
	if (技术面试得分 < 技术面试分数线)
	{
		printf("回家当备胎等电话");
	}
	else
	{
		printf("进入下一轮");
		if (综合面试得分 < 综合面试分数线)
		{
			printf("高薪减半");
		}
		else
		{
			printf("高薪等着你");
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