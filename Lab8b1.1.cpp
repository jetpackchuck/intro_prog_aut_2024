#include <iostream>
#include "fonctions.h"
#include <string>

#define fichier "C:/Users/charl/OneDrive/Documents/Intro_Prog/Labo8b/Chimie.txt"

using namespace std;

int main()
{
	string symbole;
	double masseH(0.0);
	if (fichier)
	{

		cout << "La masse moleculaire de l'eau est ";
		masseH = masseH + TrouverMasseElement("H");
		masseH = masseH * 2;
		masseH = masseH + TrouverMasseElement("O");
		cout << masseH << " g" << endl;

		cout << "La masse moleculaire du peroxyde d'hyrdogene est ";
		
		masseH = 0;
		masseH = masseH + TrouverMasseElement("H");
		masseH = masseH * 2;
		
		double masseO;
		masseO = TrouverMasseElement("O");
		masseO = masseO * 2;
		masseH = masseH + masseO;
		cout << masseH << " g" << endl;

		cout << "La masse moleculaire du dioxyde de carbonne est ";
		masseH = 0;
		masseH = masseH + TrouverMasseElement("C");
		
		masseO = 0;
		masseO = TrouverMasseElement("O");
		masseO = masseO * 2;
		masseH = masseH + masseO;
		cout << masseH << " g" << endl;

		cout << "La masse moleculaire du monoxyde de carbonne est ";
		masseH = 0;
		masseH = masseH + TrouverMasseElement("C");
		masseO = 0;
		masseO = TrouverMasseElement("O");
		masseH = masseH + masseO;
		cout << masseH << " g" << endl;

		cout << "La masse moleculaire du methane est ";
		masseH = 0;
		masseH = masseH + TrouverMasseElement("C");
		
		masseO = 0;
		masseO = TrouverMasseElement("H");
		masseO = masseO * 4;
		masseH = masseH + masseO;
		cout << masseH << " g" << endl;

		cout << "La masse moleculaire du glucose est ";
		masseH = 0;
		masseH = masseH + TrouverMasseElement("C");
		masseH = masseH * 6;
		
		masseO = 0;
		masseO = TrouverMasseElement("H");
		masseO = masseO * 12;
		
		double masseQ;
		masseQ = TrouverMasseElement("O");
		masseQ = masseQ * 6;
		masseH = masseH + masseO + masseQ;
		cout << masseH << " g" << endl;

		cout << "La masse moleculaire du saccharose est ";
		masseH = 0;
		masseH = TrouverMasseElement("C");
		masseH = masseH * 12;
		masseO = 0;
		masseO = TrouverMasseElement("H");
		masseO = masseO * 22;
		masseQ = 0;
		masseQ = TrouverMasseElement("O");
		masseQ = masseQ * 11;
		masseH = masseH + masseO + masseQ;
		cout << masseH << " g" << endl;

		cout << "La masse moleculaire du bacon est ";
		masseH = 0;
		masseH = TrouverMasseElement("Ba");
		masseO = 0;
		masseO = TrouverMasseElement("Co");
		masseQ = 0;
		masseQ = TrouverMasseElement("N");
		masseH = masseH + masseO + masseQ;
		cout << masseH << " g" << endl;
	}
	else
	{
		cout << "ERREUR : Acces au fichier Cimie.txt impossible!";
	}
}