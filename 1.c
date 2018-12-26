#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int zheng(int num)
{
	if (num == 0)
	{
		return 0;
	}
	else
	{
		return zheng(num / 10) + 1;
	}
}

void main()
{
	int num;
	scanf("%d", &num);
	printf("%d", zheng(num));
	getchar();
	getchar();
}