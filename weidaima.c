#include<stdio.h>
#include<stdlib.h>

void main()
{
	char ch = getchar();
	ch == 'Y' ? system("tasklist") : system("notepad");

	system("pause");
}