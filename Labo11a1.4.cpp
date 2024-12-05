#include <iostream>

using namespace std;

int main()
{
	int t1[8] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		t1[i] = rand() % 101 - 50;
	}
	for (int i = 0; i < 5; i++)
	{
		t1[5] += t1[i];
	}
	for (int i = 0; i < 5; i++)
		if (t1[i] > t1[6])
		{
			t1[6] = t1[i];
		}
	for (int i = 0; i < 5; i++)
		if (t1[i] < t1[7])
		{
			t1[7] = t1[i];
		}
	for (int i = 0; i < 5; i++)
	{
		cout << "#" << i+1 << " : " << t1[i] << endl;
	}
	cout << "Somme : " << t1[5] << endl;
	cout << "Max : " << t1[6] << endl;
	cout << "Min : " << t1[7] << endl;
}