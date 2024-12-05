#include <iostream>
#include "fonctions.h"

using namespace std;

int main() 
{
	int x;
	cout << "Entre un nombre entier: ";
	cin >> x;
	CompositionNombresPremiers(x);
	cout << endl;
	EstNombrePremier(x);
}