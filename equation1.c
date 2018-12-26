//求解一元二次方程的根
//查阅sqrt()函数
//注意有没有解
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
void main()
{
	int a, b, c;
	float  x, x1, x2, y1, y2, p, q;
	scanf("%d%d%d", &a, &b, &c);
	printf("a=%d,b=%d,c=%d\n", a, b, c);
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				printf("x为任意值\n");
			}
			else
			{
				printf("无解\n");
			}
		}
		else
			printf("x=%f", x = -1.0 * c / b);
	}
	else
	{
		if (b*b - 4 * a*c == 0)
		{
			printf("x1=x2=%f\n", x = -1 * b / a / 2.0);
		}
		else if (b*b - 4 * a*c > 0)
		{
			y1 = sqrt(b*b - 4.0 * a*c);
			x1 = (-1 * b - y1) / a / 2.0;
			x2 = (-1 * b + y1) / a / 2.0;
			printf("x1=%f,x2=%f\n", x1, x2);
		}
		else
		{
			y2 = sqrt(4 * a*c - b*b);
			q = y2 / a / 2.0;
			p = -1 * b / a / 2.0;
			printf("x1=%f+%fi", p, q);
			printf("\nx2=%f-%fi\n", p, q);
		}
	}
	system("pause");
}