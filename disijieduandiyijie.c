#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a;
	a = 3;
	printf("%x,%d", &a,a);
	{
		int a;
		a = 5;
		printf("\n%x,%d", &a,a);
	}

	{
		int a;
		a = 9;
		printf("\n%x,%d", &a,a);

	}


	getchar();

}