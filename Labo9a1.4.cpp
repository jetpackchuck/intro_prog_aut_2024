#include <iostream>
#include <iomanip>
#include "fonctions.h"

using namespace std;

int main()
{
	double n;
	double p;
	cout << "Quelle est la valeur de p? : "; 
	cin >> p;
	cout << "Quelle est la valeur de n? : ";
	cin >> n;
	cout << endl;
	cout << setw(2) << right << "p" << setw(6) << right << "n" << "!" << setw(9) << right << p << setw(6) << right << n << "!" << endl;
	cout << "c = -------- = c = -------- = " << Combinaison(p, n) << endl;
	cout << setw(2) << right << "n" << setw(10) << right << "(n-p)!p!" << setw(6) << right << n << setw(2) << right << "(" << n << "-" << p << ")!" << p << "!" << endl;
	cout << endl;
	cout << "Avec " << p << " numeros = " << Combinaison(p, n) << endl;
	p = 43;
	cout << "Avec " << p << " numeros = " << Combinaison(p, n) << endl;
	cout << "Au denominateur, nous obbservons que la valeur de p et celle a l'interieur de la parentese, sont complementaires a 49. ";
	cout << "Par exemple, dans cet exercice, 6 et 43 sont complementaire par addition a 49.";
	cout << "Donc, puisque ce sont les memes valeur et qu'il y a une addition, on peut les interchanger par le principe de commutativite mathematique. 6+43 et 43+6" << endl;
}
