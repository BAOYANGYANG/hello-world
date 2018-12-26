
/*满足下列条件的自然数称为超级素数:该数本身,所有数字之和,
所有数字之积以及所有数字的平方和都是素数.例如113就是一个超级素数.
求[100,9999]之内:(1)超级素数的个数.(2)所有超级素数之和.(3)最大的超级素数.*/
//2018/11/14 更新
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int bit(int num)
{
	int n = num;
	for (int i = 2;i < n;i++)
	{
		if (n%i == 0)
		{
			return 0;
			break;
		}
		if (i == n - 1 && n%i != 0)
		{
			return 1;
		}
	}
}
int sum_bit(int num)
{
	int n;
	n = num / 1000 + (num % 1000) / 100 + (num % 100) / 10 + num % 10;
	for (int i = 2;i < n;i++)
	{
		if (n%i == 0)
		{
			return 0;
			break;
		}
		if (i == n - 1 && n%i != 0)
		{
			return 1;
		}
	}
}
int multi_bit(int num)
{
	int n;
	n = (num / 1000) *((num % 1000) / 100) *((num % 100) / 10) *(num % 10);
	for (int i = 2;i < n;i++)
	{
		if (n%i == 0)
		{
			return 0;
			break;
		}
		if (i == n - 1 && n%i != 0)
		{
			return 1;
		}
	}
}
int square_sum_bit(int num)
{
	int n;
	n = (num / 1000)*(num / 1000) + ((num % 1000) / 100)*((num % 1000) / 100)
		+ ((num % 100) / 10)*((num % 100) / 10) + (num % 10)*(num % 10);
	for (int i = 2;i < n;i++)
	{
		if (n%i == 0)
		{
			return 0;
			break;
		}
		if (i == n - 1 && n%i != 0)
		{
			return 1;
		}
	}
}
bool isprime(int num)
{
	if (num == 0)
		return false;
	if (num == 1)
		return true;
}
int main()
{
	//to do sth
	int q = 0;
	int p = 0;
	int f;
	for (int t = 100;t <= 9999;t++)
	{
		if (isprime(bit(t)) && isprime(sum_bit(t)) && isprime(multi_bit(t))
			&& isprime(square_sum_bit(t)))
		{
			q++;
			p = p + t;
			f = t;
			printf("%d是超级素数\n", t);
		}
	}
	printf("总共有%d个超级素数\n超级素数的和为%d\n最大的超级素数为%d\n", q, p,f);
	system("pause");
	return 0;
}
