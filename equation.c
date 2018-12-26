//求解如下方程组
//ax + by = c
//dx + ey = f
//注意输入/输出，数据类型
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a, b, c, d, e, f, x, y;
	printf("请依次输入二元一次方程组ax + by = c，dx + ey = f的系数\n");
	scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);
	y = (f - c*d / a) / (e - b*d / a);
	x = (c - b*y) / a;
	printf("x=%f\ny=%f\n", x, y);
	system("pause");
	return 0;
}