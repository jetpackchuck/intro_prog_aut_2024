#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
    int eq1[6] = { 0 };
	int eq2[6] = { 0 };
	char V1 = NULL;
	char V2 = NULL;
	int n = 0;
	cout << "Pour le quart #1" << endl;
	do
	{
		cout << "Entrez le nombre de buts marques par l'equipe 1: ";
		cin >> eq1[0];
	} while (eq1[0] < 0);
	
	do
	{
		cout << "Entrez le nombre de buts marques par l'equipe 2: ";
		cin >> eq2[0];
	} while (eq2[0] < 0);
	


	cout << endl << "Pour le quart #2" << endl;
	do
	{
		cout << "Entrez le nombre de buts marques par l'equipe 1: ";
		cin >> eq1[1];
	} while (eq1[1] < 0);
	do
	{
		cout << "Entrez le nombre de buts marques par l'equipe 2: ";
		cin >> eq2[1];
	} while (eq2[1] < 0);


	cout << endl << "Pour le quart #3" << endl;
	do
	{
		cout << "Entrez le nombre de buts marques par l'equipe 1: ";
		cin >> eq1[2];
	} while (eq1[2] < 0);
	do
	{
		cout << "Entrez le nombre de buts marques par l'equipe 2: ";
		cin >> eq2[2];
	} while (eq2[2] < 0);


	cout << endl << "Pour le quart #4" << endl;
	do
	{
		cout << "Entrez le nombre de buts marques par l'equipe 1: ";
		cin >> eq1[3];
	} while (eq1[3] < 0);
	do
	{
		cout << "Entrez le nombre de buts marques par l'equipe 2: ";
		cin >> eq2[3];
	} while (eq2[3] < 0);

	eq1[4] = eq1[0] + eq1[1] + eq1[2] + eq1[3];
	eq2[4] = eq2[0] + eq2[1] + eq2[2] + eq2[3];

	if (eq1[4] > eq2[4])
	{
		V1 = '1';
	}
	else if (eq1[4] < eq2[4])
	{
		V2 = '1';
	}
	else
	{
		cout << "Match nul" << endl;
	}

	cout << endl << "Voici les resultats" << endl;
	cout << "             #1 #2 #3 #4 To  V" << endl;
	cout << "Equipe 1 :    " << eq1[0] << "  " << eq1[1] << "  " << eq1[2] << "  " << eq1[3] << "  " << eq1[4] << "  " << V1 << endl;
	cout << "Equipe 2 :    " << eq2[0] << "  " << eq2[1] << "  " << eq2[2] << "  " << eq2[3] << "  " << eq2[4] << "  " << V2 << endl;


}