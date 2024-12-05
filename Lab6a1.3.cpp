#include <iostream>
#include <random>
#include <string>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <Windows.h>

#define MENU "MENU\n" << "A) Generer les donnees\n" << "B) Afficher les donnees\n" << "Q) Quitter\n"
#define SOUSMENU1 "SOUS-MENU\n" << "A) Nouveau fichier\n" << "B) Ajouter au fichier\n"
#define SOUSMENU2 "SOUS-MENU\n" << "A) Detaille\n" << "B) Global\n"
#define votes "C:\\Users\\charl\\OneDrive\\Documents\\Intro_Prog\\Labo6a\\votes.txt"

using namespace std;

int main()
{
	char choix;
	char choix1;
	char choix2;
	string output;
	int ligne, mot;
	ofstream fichierE(votes);
	ifstream fichierL(votes);
	int r;

	r = rand() % 10 + 20;
	choix = 'A';
	while (choix != 'Q')
	{
		cout << MENU;
		choix = _getche();
		choix = toupper(choix);
		cout << endl;
		if (choix == 'A')
		{
			cout << SOUSMENU1;
			choix1 = _getche();
			choix1 = toupper(choix1);
			cout << endl;
			if (choix1 == 'A')
			{
				fichierE.open(votes);
			}
			if (choix1 == 'B')
			{
				if (fichierE)
				{
					if (!fichierE.is_open())
					{
						fichierE.open(votes);
					}
					for (int i = 0; i < r; i++)
					{
						fichierE << rand() % 4 + 0 << " ";
						fichierE << rand() % 190 + 10 << "\n";
					}
					fichierE.close();
				}
				else 
				{
					cout << "ERREUR : Impossible d'acceder au fichier";
				}
				cout << "Les donnees ont ete generees";
				exit(1);
			}
		}
		if (choix == 'B')
		{
			if (fichierL)
			{
				if (!fichierL.is_open())
				{
					fichierL.open(votes);
				}
				cout << SOUSMENU2;
				choix2 = _getche();
				choix2 = toupper(choix2);
				cout << endl;
				if (choix2 == 'A')
				{
					while (!fichierL.eof())
					{
						fichierL >> mot;
						if (mot >= 0 && mot < 4)
						{
							cout << mot << " ";
						}
					}
				}
				if (choix2 == 'B')
				{

				}
			}
			else
			{
				cout << "ERREUR : Impossible d'acceder au fichier";
			}
		}
	}
	exit(1);
}
	