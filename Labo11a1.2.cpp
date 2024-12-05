#include <iostream>

using namespace std;

int main()
{
    int t1[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Saisir un entier entre 0 et 100 inclusivement pour la case " << i + 1 << endl;
		cin >> t1[i];
		if (t1[i] < 0 || t1[i] > 100)
		{
			cout << "Valeur invalide. Veuillez reessayer" << endl;
			i--;
		}
	}
	cout << "Les valeurs du tableau sont: ";
	for (int i = 0; i < 5; i++)
	{
		cout << t1[i] << " ";
	}
}