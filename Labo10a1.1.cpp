#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <windows.h>
#include "fonctions.h"

//#define fichier "C:/Users/charl/OneDrive/Documents/Intro_Prog/Labo10a/Mot_Aleatoire.txt"

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    string filePath;
    string word;
    
    cout << "Saisie le chemin du fichier : ";
    cin >> filePath;
    cout << "Saisie le mot en francais cherche : ";
    cin >> word;
    countWordOccurrences(filePath, word);

}