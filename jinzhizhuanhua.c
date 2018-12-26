#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void zhuan(int num)
{
	if (num == 0)
	{
		return;
	}
	else
	{
		
		 zhuan(num / 2);
		 printf("%d", num % 2);
		 printf("%d", (num + 1) % 2);

	}
}

void main()
{
	int t;
	scanf("%d", &t);
	zhuan(t);
	getchar();
	getchar();
}