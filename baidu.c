#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void open(char *str)
{
	ShellExecuteA(0, "open", str, 0, 0, 1);
}

void close()
{
	system("taskkill /f /im 360se.exe");
}
void input()
{
	keybd_event('Z', 0, 0, 0);
	keybd_event('Z', 0, 2, 0);
	Sleep(50);
	keybd_event('H', 0, 0, 0);
	keybd_event('H', 0, 2, 0);
	Sleep(50);
	keybd_event('E', 0, 0, 0);
	keybd_event('E', 0, 2, 0);
	Sleep(50);
	keybd_event('N', 0, 0, 0);
	keybd_event('N', 0, 2, 0);
	Sleep(50);
	keybd_event('G', 0, 0, 0);
	keybd_event('G', 0, 2, 0);
	Sleep(50);


	keybd_event('R', 0, 0, 0);
	keybd_event('R', 0, 2, 0);
	Sleep(50);
	keybd_event('O', 0, 0, 0);
	keybd_event('O', 0, 2, 0);
	Sleep(50);
	keybd_event('N', 0, 0, 0);
	keybd_event('N', 0, 2, 0);
	Sleep(50);
	keybd_event('G', 0, 0, 0);
	keybd_event('G', 0, 2, 0);
	Sleep(50);


	keybd_event('1', 0, 0, 0);
	keybd_event('1', 0, 2, 0);
	Sleep(50);

	keybd_event(0x0D, 0, 0, 0);
	keybd_event(0x0D, 0, 2, 0);
	Sleep(50);


}

void click()
{
	mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE, 300 * 65535 / 1366, 300 * 65535 / 768,0,0);
	Sleep(50);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
}



void main()
{
	open("http://www.baidu.com");
	Sleep(18000);
	input();
	Sleep(15000);
	click();
	Sleep(50000);
	close();
}