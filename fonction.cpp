#include "fonction.h"
#include <iostream>
#include <iomanip>

using namespace std;

void  CelciusToFahrenheit(float c)
{
	c = c * (1.8) + 32;
	cout << fixed << setprecision(1) << c << " °F" << endl;
}

void FahrenheitToCelcius(float f)
{
	f = (f - 32) / (1.8);
	cout << fixed << setprecision(1) << f << " °C" << endl;
}