#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
void main()
{
	int num;
	scanf("%d", &num);
	if (num == 1)
	{
		system("write");
	}
	else if (num == 2)
	{
		system("calc");
	}
	else if (num == 3)
	{
		system("mspaint");
	}
	else
	{
		MessageBoxA(0, "ÂèÂô±Æ", "ÀÏ×Ó¾¯¸æÄã", 1);
	}
}