#include <iostream>
#include <random>
#include <string>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <Windows.h>

#define CARRE 219
#define MENU "MENU\n" << "A) Ecrire\n" << "B) Lire\n" << "Q) Quitter\n"
#define fichier "C:\\Users\\charl\\OneDrive\\Documents\\Intro_Prog\\Labo6a\\couleurs.txt"

using namespace std;

int main()
{
	char choix;
	string output;
	int ligne;
	ofstream fichierE(fichier);
	ifstream fichierL(fichier);

	choix = 'A';
	while (choix != 'Q')
	{
		cout << MENU;
		choix = _getche();
		choix = toupper(choix);
		cout << endl;
		if (choix == 'A')
		{
			if (!fichierE.is_open())
			{
				fichierE.open(fichier);
			}
			if (fichierE)
			{
				for (int i = 0; i < 10; i++)
				{
					for (int j = 0; j < 30; j++)
					{
						fichierE << rand() % 15 + 1 << " ";
					}
					fichierE << "\n";
				}
				fichierE.close();
			}
			else
			{
				cout << "ERREUR : Impossible d'acceder au fichier";
			}
		}
		if (choix == 'B')
		{
			if (!fichierL.is_open())
			{
				fichierL.open(fichier);
			}
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			char carre(219);
			if (fichierL)
			{
				int i = 0;
				while (!fichierL.eof())
				{
					fichierL >> ligne;
					if (!fichierL.fail()) {
						
							
							SetConsoleTextAttribute(hConsole, ligne);
							if(i%30==0)
								cout << "\n";
							cout << carre;
							
							i++;

						
						
					}
				}
				int couleur(15);
				SetConsoleTextAttribute(hConsole, couleur);
				fichierL.close();
			}
			else
			{
				cout << "ERREUR : Impossible d'acceder au fichier";
			}
			cout << "\n";
		}
	}
	exit(1);
}