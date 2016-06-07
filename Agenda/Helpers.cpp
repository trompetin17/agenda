#include "stdafx.h"
#include "Helpers.h"

int centerWindow(HWND parent, int& width, int& height)
{
	RECT clientRect;
	GetClientRect(parent, &clientRect);

	width = (clientRect.right / 2) - (width / 2);
	height = (clientRect.bottom / 2) - (height / 2);

	return 0;
}
