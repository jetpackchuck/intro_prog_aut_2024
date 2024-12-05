#include <iostream>
#include <iomanip>
#include "fonctions.h"

#define fichier "C:/Users/charl/OneDrive/Documents/Intro_Prog/Labo8b/Chimie.txt"

using namespace std;

int main()
{
	//Masse moléculaire ( m )
	double mh2o = 18.01528;
	double mh2o2 = 34.01474;
	double mco2 = 44.01;
	double mco = 28.01;
	double mch4 = 16.04;
	double mc6h12o6 = 180.16;
	double mc12h22o11 = 342.3;
	//Quantité en possession ( g )
	double masseh2o = 21.618;
	double masseh2o2 = 11.56476;
	double masseco2 = 220.045;
	double masseco = 1899.078;
	double massech4 = 1445.79516;
	double massec6h12o6 = 612.5304;
	double massec12h22o11 = 171.1486;

	cout << "La masse moleculaire de l'eau est " << mh2o << " g" << endl;
	cout << "Le nombre de moles est " << CalculerNombreMoles(masseh2o, mh2o) << endl;
	cout << "Le nombre de moelcules est de " << CalculerNombreMolecules(CalculerNombreMoles(masseh2o, mh2o)) << endl;

	cout << "La masse moleculaire du peroxyde d'hydrogene est " << mh2o2 << " g" << endl;
	cout << "Le nombre de moles est " << CalculerNombreMoles(masseh2o2, mh2o2) << endl;
	cout << "Le nombre de moelcules est de " << CalculerNombreMolecules(CalculerNombreMoles(masseh2o2, mh2o2)) << endl;
	
	cout << "La masse moleculaire du dioxyde de carbone est " << mco2 << " g" << endl;
	cout << "Le nombre de moles est " << CalculerNombreMoles(masseco2, mco2) << endl;
	cout << "Le nombre de moelcules est de " << CalculerNombreMolecules(CalculerNombreMoles(masseco2, mco2)) << endl;

	cout << "La masse moleculaire du monoxyde de carbone est " << mco << " g" << endl;
	cout << "Le nombre de moles est " << CalculerNombreMoles(masseco, mco) << endl;
	cout << "Le nombre de moelcules est de " << CalculerNombreMolecules(CalculerNombreMoles(masseco, mco)) << endl;

	cout << "La masse moleculaire du methane est " << mch4 << " g" << endl;
	cout << "Le nombre de moles est " << CalculerNombreMoles(massech4, mch4) << endl;
	cout << "Le nombre de moelcules est de " << CalculerNombreMolecules(CalculerNombreMoles(massech4, mch4)) << endl;

	cout << "La masse moleculaire du glucose est " << mc6h12o6 << " g" << endl;
	cout << "Le nombre de moles est " << CalculerNombreMoles(massec6h12o6, mc6h12o6) << endl;
	cout << "Le nombre de moelcules est de " << CalculerNombreMolecules(CalculerNombreMoles(massec6h12o6, mc6h12o6)) << endl;

	cout << "La masse moleculaire du saccharose est " << mc12h22o11 << " g" << endl;
	cout << "Le nombre de moles est " << CalculerNombreMoles(massec12h22o11, mc12h22o11) << endl;
	cout << "Le nombre de moelcules est de " << CalculerNombreMolecules(CalculerNombreMoles(massec12h22o11, mc12h22o11)) << endl;
}