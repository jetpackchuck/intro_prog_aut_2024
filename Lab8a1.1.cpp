#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <windows.h>
#include "fonction.h"

using namespace std;

#define fichier "C:/Users/charl/OneDrive/Documents/Intro_Prog/Labo8a/degres.txt"

int f;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	float mot;
	float mot2;
	//ofstream fichierE(fichier);
	ifstream fichierL(fichier);

	if (!fichierL.is_open())
	{
		fichierL.open(fichier);
	}
	if (fichierL)
	{
		cout << "Utilisation de la fonction CelciusToFahrenheit(): \n";
		while (fichierL >> mot)
		{
			cout << mot << " °C" << " = ";
			CelciusToFahrenheit(mot);
		}
		fichierL.close();
		fichierL.open(fichier);
		cout << "\nUtilisation de la fonction FahrenheitToCelcius(): \n";
		while (fichierL >> mot2)
		{
			cout << mot2 << " °F" << " = ";
			FahrenheitToCelcius(mot2);
		}
	}
	else
	{
		cout << "ERREUR: Impossible d'accéder au fichier!" << endl;
		exit(1);
	}
}