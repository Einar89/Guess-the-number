// Zgadnij_wyraz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <math.h>
#include <conio.h>
#include <time.h>
#include "F_pomocnicze.h"
#include "Obliczenia.h"

using namespace std;

int main()
{
	srand(time(NULL));
	int pierwszy = 0;
	int r = 0;
	int zgadnij = 0;
	int ciag = 0;
	int wynik = 0;
	char wybor = 't';
	int punktacja = 0;
	
	Start();
	Struktura(wybor, r, pierwszy, ciag, wynik, zgadnij, punktacja);
	
	return 0;
}

