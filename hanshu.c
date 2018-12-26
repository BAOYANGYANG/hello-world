#include<stdio.h>
#include<stdlib.h>
void notepad()
{
	system("notepad");


}
void calc()
{
	system("calc");
}
void main()
{
	notepad();
	system("notepad");
	system("calc");
	calc();
}