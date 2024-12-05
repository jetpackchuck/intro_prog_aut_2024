#include <iostream>

using namespace std;

void displayBoard(char c1, char c2, char c3, char c4, char c5, char c6, char c7, char c8, char c9)
{
	cout << " " << c1 << " | " << c2 << " | " << c3 << endl;
	cout << "---+---+---" << endl;
	cout << " " << c4 << " | " << c5 << " | " << c6 << endl;
	cout << "---+---+---" << endl;
	cout << " " << c7 << " | " << c8 << " | " << c9 << endl;
}

bool checkWin(char a, char b, char c)
{
	if (a == b && b == c)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool play(char &caseRef, char joueur)
{
	if (caseRef != 'X' && caseRef != 'O')
	{
		caseRef = joueur;
		return true;
	}
	else
	{
		return false;
	}
}