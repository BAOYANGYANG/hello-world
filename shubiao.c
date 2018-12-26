#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void main()
{
	SetCursorPos(30, 30);
	Sleep(200);
	mouse_event(MOUSEEVENTF_LEFTDOWN , 0, 0, 0, 0);
	//mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	Sleep(200);
	system("pause");
}