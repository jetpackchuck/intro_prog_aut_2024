#include <iostream>
#include <random>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int pv(0);
    int fv(0);
    int cv(0);
    int po(0);
    int fo(0);
    int co(0);
    string j;
    int h;
    int vous(0);
    int ordi(0);
    for (int i = 1; i <= 10; i++)
    {
        cout << "Tour " << i << "\n";
        cout << "Choisissez Pierre (p), Feuille (f) ou ciseaux (c) : ";
        cin >> j;
        cout << "L'ordinateur a choisi : ";
        h = rand() % 3 + 1;
        switch (h)
        {
        case 1:
            cout << "Pierre\n";
            break;
        case 2:
            cout << "Feuille\n";
            break;
        case 3:
            cout << "Ciseaux\n";
            break;
        }
        if (j == "p" && h == 2)
        {
            ordi++;
        }
        else if (j == "p" && h == 3)
        {
            vous++;
        }
        else if (j == "f" && h == 1)
        {
            vous++;
        }
        else if (j == "f" && h == 3)
        {
            ordi++;
        }
        else if (j == "c" && h == 1)
        {
            ordi++;
        }
        else if (j == "c" && h == 2)
        {
            vous++;
        }
        if (j == "p")
        {
            pv++;
        }
        else if (j == "f")
        {
            fv++;
        }
        else if (j == "c")
        {
            cv++;
        }
        if (h == 1)
        {
            po++;
        }
        else if (h == 2)
        {
            fo++;
        }
        else if (h == 3)
        {
            co++;
        }


        cout << "Score actuel - Vous: " << vous << " | Ordinateur : " << ordi << "\n";
    }
    cout << "Scores finaux - " << vous << " | Ordinateur: " << ordi << "\n";
    cout << "Statistiques : \n";
    cout << setw(25) << right << "Choix Utilisateur" << setw(20) << right << "Ordinateur\n";
    cout << setw(15) << right << "Pierre" << setw(10) << right << pv << setw(13) << right << po << "\n";
    cout << setw(15) << right << "Feuille" << setw(10) << right << fv << setw(13) << right << fo << "\n";
    cout << setw(15) << right << "Ciseaux" << setw(10) << right << cv << setw(13) << right << co;

}