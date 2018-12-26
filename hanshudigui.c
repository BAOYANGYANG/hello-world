#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void calc(int a)
{
	if (a > 0)
	{
		printf("老妹呀%d\n",a);
		Sleep(100);
		calc(a - 1);
	}
}

int jia(int a, int b)
{
	if (a >= 0)
	{
		printf("%d,%d\n", a, b);
		Sleep(100);
		jia(a - 1, a + b);
	}
	//printf("最终结果=%d\n", b);
	return ;
}
int add(num)
{
	if (num == 0)
	{
		return 0;
	}
	else
	{
		return add(num - 1) + num;
	}


}






void main()
{
	//jia(100, 0);
	printf("%d", add(100));
	system("pause");

}




void main1()
{
	calc(100);
	system("pause");
}