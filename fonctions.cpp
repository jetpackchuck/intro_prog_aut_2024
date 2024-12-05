#include <iostream>
#include <string>
#include "fonctions.h"

using namespace std;

int fibonacci(int n, int& i)
{
	i++;
	int total = 0;
	if (n < 0)
	{
		return NULL;
	}
	else if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		total = fibonacci(n - 1, i) + fibonacci(n - 2, i);
		return total;
	}
}

void detailCalculFibonacci(int n, string& result)
{
	int q = n;
	int i = 0;
	int passageDetail = 0;
	string result1;
	if (n < 0)
	{
		cout << "Il n'y a pas de valeur a cette position";
	}
	else if (n == 0)
	{
		cout << "0";
	}
	else if (n == 1)
	{
		cout << "1";
	}
	else
	{
		while (q >= 0)
		{
			passageDetail++;
		result1 = result1 + "/" + to_string(fibonacci(n-q, i));
		q--;
		}
	}
	cout << "La suite de Fibonacci jusqu'a " << n << " est " << result1 << endl;
	cout << "Il a fallu " << passageDetail << " passages dans Detail" << endl;
	cout << "Il a fallu " <<  i << " passages dans Fibonacci" << endl;
}