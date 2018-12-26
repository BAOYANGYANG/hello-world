#include<stdio.h>
void main()
{
	printf("%d", (1+2)*3);
	int j, k;
	j = 3;
	k = j++;
	printf("%d,%d", k, j);
	int a = 3, b = 5;
	printf("%d", (++a)*b);
	printf("\n%d", (a++)*b);
	printf("%d", -a++);
	printf("%d", a);


	printf("%d", a+(++b));
	printf("%d", a++ + b);
	printf("%d", a*b--);





	getchar();
}