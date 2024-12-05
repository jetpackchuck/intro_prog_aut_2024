#include <iostream>

using namespace std;
int main()
{
    int k(0);
	int q(0);
	for (int i = 0; i < 10; i++)
	{
		k = k++;
		q = q + 2;
		for (int j = i; j < 9; j++)
		{
			cout << "  ";
		}
		
		for (int e = 0; e < 10; e++)
		{
			cout << "* ";
		}
		for (int a = 0; a < 2; a++)
		{
			for (int h = i; h < q - 2; h++)
			{
				cout << "  ";
			}
		}
		for (int b = 0; b < 10; b++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}