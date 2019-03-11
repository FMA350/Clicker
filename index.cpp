
#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <Windowsx.h>
#include <iostream>
#include <winuser.h>
using namespace std;

int main()
{
	int x, y, temp_x, temp_y, time;
	POINT p;

	cin >> time;
	if (GetCursorPos(&p))
	{
		x = p.x;
		y = p.y;
	}
	while (true) {
		Sleep(time);
		if (GetCursorPos(&p))
		{
			temp_x = p.x;
			temp_y = p.y;
		}
		SetCursorPos(x, y);
		mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0,0,0,0);
		SetCursorPos(temp_x, temp_y);
	}	
}
