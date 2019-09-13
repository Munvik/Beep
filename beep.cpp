// beep.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <Windows.h>

int main(int argc, char *argv[], char** envp)
{
	std::cout << "Sciezka = " << *envp << std::endl;

	int min;

	if (argc == 2)
	{
		min = atoi(argv[1]);
	}

	else
	{
		std::cout << "Wpisz minuty do odliczenia ";
		std::cin >> min;
	}

	int minsRemained = min;
	int secsRemained = 0;
	int secs = min * 60;
	system("cls");
	
	//odliczanie
	for (int i = secs; i>0; i--)
	{
		minsRemained = i / 60;
		secsRemained = i % 60;
		std::cout << "Zostalo " << minsRemained << " : " << secsRemained;
		Sleep(1000);
		system("cls");
	}
	

	int count = 4;

	for (int i = 0; i < count; i++)
	{
		Beep(2700, 500);
		Beep(1900, 400);
		Beep(2700, 300);
	}

	return 0;
}
