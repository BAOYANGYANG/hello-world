#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void opentaobao()
{
	ShellExecuteA(0, "open", "http://www.taobao.com", 0, 0, 3);
}
void closetaobao()
{
	system("taskkill /f /im  360se.exe");
}
void clicktaobao()
{
	SetCursorPos(40, 40);
	Sleep(4000);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);

}
void main()
{

	clicktaobao();



	while (1)
	{
		opentaobao();
		Sleep(9000);
		closetaobao();
		Sleep(2000);

	}
}
