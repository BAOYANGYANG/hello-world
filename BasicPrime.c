//素数是只有1和本身是因子的数
//2018/11/14 更新
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//to do sth
	int n;
	int j = 0;
	scanf("%d", &n);
	for (int i = 2;i < n;i++)
	{
		if (n%i == 0)
		{
			printf("%d不是素数\n", n);
			j = 1;
			break;
		}
	}
	if (j == 0)
	{
		printf("%d是素数\n", n);
	}
	system("pause");
	return 0;
}
