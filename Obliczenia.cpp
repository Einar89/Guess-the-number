#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <math.h>
#include <conio.h>
#include <time.h>
#include "F_pomocnicze.h"

using namespace std;

void Arytmetyczny(int pierwszy, int r, int &zgadnij)
{
	int wyraz = pierwszy;
	cout << wyraz << " ";
	for (int i = 1; i < 5; ++i)
	{
		wyraz = pierwszy + (i * r);
		cout << wyraz << " ";
	}
	cout << endl << endl;
	zgadnij = pierwszy + 5 * r;
}

void Geometryczny(int pierwszy, int r, int &zgadnij)
{
	int wyraz = pierwszy;
	cout << wyraz << " ";
	for (int i = 1; i < 5; ++i)
	{
		wyraz = pierwszy * pow(r, i);
		cout << wyraz << " ";
	}
	cout << endl << endl;
	zgadnij = pierwszy * pow(r, 5);	
}

void Struktura(char wybor, int r, int pierwszy, int ciag, int wynik, int zgadnij, int &punktacja)
{
	while (wybor == 't'){
		system("cls");
		Losowanie_ciagu(ciag);
		Losowanie_pierwszy(pierwszy);
		Losowanie_r(r);
	
		if (ciag == 1)
		{
			Arytmetyczny(pierwszy, r, zgadnij);
		}
		if (ciag == 2)
		{
			Geometryczny(pierwszy, r, zgadnij);
		}

		wynik = Kontrola();

		if (wynik == zgadnij)
		{
			cout << "Wygrana!" << endl << endl;
			punktacja++;
		}
		else
		{
			cout << "Niepoprawna odpowiedz :(" << endl << endl;
			if(punktacja > 0)
				punktacja--;
		}
		cout << "Twoja aktualna punktacja: " << punktacja << endl;
		cout << "Jeszcze raz? (t/n)" << endl;
		cin.clear();
		cin.sync();
		cin >> wybor;

	}
}