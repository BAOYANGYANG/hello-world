#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int su(int num)
{
	if (num == 1)
	{
		return 1;
	}
	else if (num == 2)
	{
		return 0;
	}
	else
	{
		int i = 2;
	A:	if (i < num)
	{
		if (num%i == 0)
		{
			return num;
		}
		else
		{
			i++;
			goto A;
		}
	}
		else
			return 0;
	}
}

void fj(int num)
{
	int i=1 ;
	int t = num - i;
	for (;su(i) || su(t);i++, t = num - i)
	{

		if (i+1 >= num)
		{
			goto B;
		}
	}
	if (i < num)
	{
		printf("%d=%d+%d", num, i, t);
	}
	else
	{
B:		printf("无法分解");
	}
}


void main1()
{
	time_t ts;
	srand((unsigned int)time(&ts));
	int i = rand();
	if (i % 2 == 0)
	{
	}
	system("pause");
}

void main()
{
	int num;
	scanf("%d", &num);
	if (num >= 4 && num % 2 == 0)
	{
		fj(num);
	}
	else
	{
		printf("孩子，你输入的数据不符合规则");
	}
	//printf("%d", su(1));
	system("pause");

}