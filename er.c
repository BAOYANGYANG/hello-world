#include<stdio.h>
#include<stdlib.h>

int jia(int num)
{
	if (num == 1)
	{
		return 1;
	}
	else
	{
		return jia(num - 1) + num;
	}
}
void main()
{
	printf("%d", jia(100));
	getchar();
}