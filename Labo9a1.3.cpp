#include <iostream>
#include "fonctions.h"

using namespace std;

int main()
{
    int x;
    cout << "Inscrit une valeur: ";
    cin >> x;
    cout << endl;
    cout << x << "! = " << Factorielle(x) << endl;

}