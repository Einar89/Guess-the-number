#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <math.h>
#include <conio.h>
#include <time.h>

using namespace std;

int Losowanie_ciagu(int &ciag)
{
	return (ciag = (rand() % 2) + 1);
}

int Losowanie_pierwszy(int &pierwszy)
{
	return (pierwszy = (rand() % 10) + 1);
}

int Losowanie_r(int &r)
{
	return (r = (rand() % 5) + 1);
}

void Start()
{
	cout << endl;
	cout << endl;
	cout << "================================================================================" << endl;
	cout << "                       Gra - Zgadnij wyraz ciagu           " << endl << endl;
	cout << "                 Otrzymasz piec pierwszych wyrazow ciagu   " << endl;
	cout << "                   geometrycznego badz arytmetycznego.     " << endl << endl;
	cout << "               Twoim zadaniem jest odgadnac nastepny wyraz." << endl << endl << endl;
	cout << "                 Nacisnij dowolny klawisz, by rozpoczac.   " << endl << endl;
	cout << "================================================================================" << endl;
	_getch();
}

int Kontrola()
{
	bool err = false;
	int sprawdz = 0;
	cout << "Podaj nastepny wyraz ciagu: \n";
	do{
		err = false;
		cin >> sprawdz;
		if (!cin.good())
		{
			err = true;
			cout << "Bledny znak!" << endl;	
			cin.clear();
			cin.ignore(100, '\n');
		}
	} while (err);
	return sprawdz;
}

