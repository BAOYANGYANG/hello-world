#include<stdio.h>
int jia(int a, int b)
{
	return a + b;
}
int jian(int a, int b)
{
	return a - b;
}
int cheng(int a, int b)
{
	return a*b;
}
int chu(int a, int b)
{
	return a/b;
}
int yu(int a, int b)
{
	return a%b;
}


void main()
{
	int num1 = 390;
	int num2 = 30;
	printf("%d", yu(num1, num2));
	getchar();
}
