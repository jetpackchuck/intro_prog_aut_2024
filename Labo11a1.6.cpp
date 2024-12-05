#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

int main()
{
    int t1[10] = { 0 };
	double t2[10] = { 0 };
	int valeuratraiter = 0;
	int valeur = 0;
	float pourcentage = 0;

	cout << "Combien de valeurs voulez-vous traiter ? ";
	cin >> valeuratraiter;
	cout << endl;

	for (int i = 0; i < valeuratraiter; i++)
	{
		valeur = rand() % 99;
		if (valeur < 10)
		{
			t1[0]++;
		}
		else if (valeur < 20)
		{
			t1[1]++;
		}
		else if (valeur < 30)
		{
			t1[2]++;
		}
		else if (valeur < 40)
		{
			t1[3]++;
		}
		else if (valeur < 50)
		{
			t1[4]++;
		}
		else if (valeur < 60)
		{
			t1[5]++;
		}
		else if (valeur < 70)
		{
			t1[6]++;
		}
		else if (valeur < 80)
		{
			t1[7]++;
		}
		else if (valeur < 90)
		{
			t1[8]++;
		}
		else
		{
			t1[9]++;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		t2[i] = (t1[i] * static_cast<double>(100)) / valeuratraiter;
	}

	cout << "Voici les resultats : " << endl;
	cout << "00-09 : " << setw(11) << t1[0] << " => " << setw(8) << t2[0] << "%" << endl;
	cout << "10-19 : " << setw(11) << t1[1] << " => " << setw(8) << t2[1] << "%" << endl;
	cout << "20-29 : " << setw(11) << t1[2] << " => " << setw(8) << t2[2] << "%" << endl;
	cout << "30-39 : " << setw(11) << t1[3] << " => " << setw(8) << t2[3] << "%" << endl;
	cout << "40-49 : " << setw(11) << t1[4] << " => " << setw(8) << t2[4] << "%" << endl;
	cout << "50-59 : " << setw(11) << t1[5] << " => " << setw(8) << t2[5] << "%" << endl;
	cout << "60-69 : " << setw(11) << t1[6] << " => " << setw(8) << t2[6] << "%" << endl;
	cout << "70-79 : " << setw(11) << t1[7] << " => " << setw(8) << t2[7] << "%" << endl;
	cout << "80-89 : " << setw(11) << t1[8] << " => " << setw(8) << t2[8] << "%" << endl;
	cout << "90-99 : " << setw(11) << t1[9] << " => " << setw(8) << t2[9] << "%" << endl;
	
}