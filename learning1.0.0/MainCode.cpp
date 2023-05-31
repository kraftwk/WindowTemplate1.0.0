#include <iostream>
#include "window.h"
using namespace std;


int main()
{
	// cout << "creating Window\n";

	window* pWindow = new window();

	bool running = true;
	while (running)
	{
		if (!pWindow->processmessages())
		{
			cout << "Closing Window\n";
			running = false;
		}
		 // render

		Sleep(10);
	}

	delete pWindow;
	
	return 0;
}