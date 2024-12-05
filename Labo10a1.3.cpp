#include <iostream>
#include "fonctions.h"

using namespace std;

int main()
{
    int n = 0;
    int i = 0;
    string result ;

    cout << "Entre un nombre entier pour determiner le n-ieme nombre de Fibonacci : ";
    cin >> n;
    cout << "Le " << n << "eme nombre de Fibonacci est : " << fibonacci(n, i) << endl;
	cout << "Il a fallu " << i -1 << " passages dans Fibonacci" << endl;
    detailCalculFibonacci(n, result);
}