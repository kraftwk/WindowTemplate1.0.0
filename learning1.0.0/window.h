#pragma once

#include <windows.h>

LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

class window
{
public:
	window();
	window(const window&) = delete;
	window& operator =(const window&) = delete;
	~window();

	bool processmessages();
private:
	HINSTANCE m_hInstance;
	HWND m_hWnd;
};

