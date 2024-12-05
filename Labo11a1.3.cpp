#include <iostream>
#include <iomanip> 
#include <random>

using namespace std;

int main()
{
	srand(time(0));

    int t1[5];
	int sum = 0;
	float avg = 0;
	int max = -51;
	int min = 51;
	for (int i = 0; i < 5; i++)
	{
		t1[i] = rand() % 101 - 50;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "#" << i + 1 << " : " << t1[i] << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		sum += t1[i];
	}
	avg = sum / 5;
	for (int i = 0; i < 5; i++)
		if (t1[i] > max) 
		{
			max = t1[i];
		}
	for (int i = 0; i < 5; i++)
		if (t1[i] < min)
		{
			min = t1[i];
		}
	cout << "Somme " << setw(2) << "=" << setw(4) << sum << endl;
	cout << "Moyenne " << "=" << setw(4) << avg << endl;
	cout << "Max " << setw(2) << "=" << setw(4) << max << endl;
	cout << "Min " << setw(2) << "=" << setw(4) << min << endl;
}