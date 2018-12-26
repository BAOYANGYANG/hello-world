#include<stdio.h>
#include<stdlib.h>
double tc(int a)
{
	if (a == 1)
	{
		return 1;
	}
	else if (a == 2)
	{
		return 2;
	}
	else
	{
		return tc(a - 1) + tc(a - 2);
	}
}
double tt(int a)
{
	int a1 = 1, a2 = 2,res=0;
	for (int i = 2;i < a;i++)
	{
		res = a1 + a2;
		a1 = a2;
		a2 = res;
	}
	//printf("%d", res);
	return res;
}


void main()
{

	        //printf("%f",tc(10));
	printf("%f", tt(10));
	system("pause");

}