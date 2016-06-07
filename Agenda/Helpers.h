#pragma once
#include <Windows.h>


int centerWindow(HWND parent, int& width, int& height);

HWND CreateListViewAddressBook(HWND parent, HINSTANCE instance, int x, int y, int width, int height);