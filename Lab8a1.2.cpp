#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <windows.h>
#include "fonctions.h"

using namespace std;

int main()
{
	int d;
	cout << "Entez un nombre decimal: ";
	cin >> d;
	cout << endl;
	DecimalToBinary(d);
	DecimalToOctal(d);	
	DecimalToHexadecimal(d);
	DecimalToX(d);
}