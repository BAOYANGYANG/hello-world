#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int wei(int a)
{
	if (a / 2 == 0)
	{
		return 1;
	}
	else
	{
		return wei(a / 2) + 1;
	}
}

double x10n(int n)
{
	double res = 1;
	for (int i = 0;i < n; i++)
	{
		res *= 10;
	}
	return res;
}

void main()
{
	int t;
	double res = 0.0;
	scanf("%d", &t);
	int n1 = wei(t);
	for (int i = 0;i < n1;i++)
	{
		res += t % 2 * x10n(i);
		t /= 2;
	}
	printf("%.0f", res);

	//printf("%d", wei());
	//printf("%f", x10n(4));

	getchar();
	getchar();
}