#include<stdio.h>
void main1()
{
	int num1 = 250;
	int num2 = 5;
	num1 += num2;
	printf("%d", num1);
	num1 -= num2;
	printf("%d", num1);
	num1 /= num2;
	printf("%d", num1);
	num1 %= num2;
	printf("%d", num1);
	getchar();

}