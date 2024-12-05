#include <iostream>
#include <fstream>
#include <string>
#include "fonctions.h"

using namespace std;

int main()
{
    float c1 = 0.193651;
    float h1 = 0.032504;
    float o1 = 0.773846;
    float masse1 = 248.096;
    float c2 = 0.326549;
    float h2 = 0.075364;
    float o2 = 0.598087;
    float masse2 = 294.253;
    float c3 = 0.588008;
    float h3 = 0.098695;
    float o3 = 0.313297;
    float masse3 = 204.7949;
    
    int nC = 0, nH = 0, nO=0;

    if (CHO(c1, h1, o1, masse1, nC, nH, nO)==true)
        cout << "C" + to_string(nC) + "H" + to_string(nH) + "O" + to_string(nO);
    cout << endl;
    cout << endl;
    cout << CHO(c2, h2, o2, masse2, nC, nH, nO);
    cout << endl;
    cout << endl;
    cout << CHO(c3, h3, o3, masse3, nC, nH, nO);
    
}