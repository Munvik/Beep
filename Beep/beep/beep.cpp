// beep.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <Windows.h>

int main()
{
	std::cout << "Wpisz minuty do odliczenia ";

	int min;
	std::cin >> min;
	
	Sleep(min * 60 * 1000);

	int count = 4;

	for (int i = 0; i < count; i++)
	{
		Beep(2700, 300);
		Beep(1900, 200);
		Beep(2700, 300);
	}

	return 0;
}
