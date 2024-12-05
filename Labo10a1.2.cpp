#include <iostream>
#include "fonctions.h"

using namespace std;

int main()
{
	char c1 = '1', c2 = '2', c3 = '3', c4 = '4', c5 = '5', c6 = '6', c7 = '7', c8 = '8', c9 = '9';
	char coup('0');
	bool libre(false);
	char joueur('X');
	int win(0);

	displayBoard(c1, c2, c3, c4, c5, c6, c7, c8, c9);
	while (win == 0)
	{
		libre = false;
		while (libre == false)
		{
			cout << "Joueur " << joueur << ", entrez votre coup (1-9) : ";
			cin >> coup;

			switch (coup)
			{
			case '1':
				libre = play(c1, joueur);

				break;
			case '2':
				libre = play(c2, joueur);

				break;
			case '3':
				libre = play(c3, joueur);

				break;
			case '4':
				libre = play(c4, joueur);

				break;
			case '5':
				libre = play(c5, joueur);
				break;
			case '6':
				libre = play(c6, joueur);
				break;
			case '7':
				libre = play(c7, joueur);


				break;
			case '8':
				libre = play(c8, joueur);
				break;
			case '9':
				libre = play(c9, joueur);
				break;

			}
			displayBoard(c1, c2, c3, c4, c5, c6, c7, c8, c9);
			if (libre == false)
				cout << "Case deja occupee!" << endl;


		}
		if (joueur == 'X')
		{
			joueur = 'O';
		}
		else
		{
			joueur = 'X';
		}

		if (checkWin(c1, c2, c3) == true || checkWin(c4, c5, c6) == true || checkWin(c7, c8, c9) == true || checkWin(c1, c4, c7) == true || checkWin(c2, c5, c8) == true || checkWin(c3, c6, c9) == true || checkWin(c1, c5, c9) == true || checkWin(c3, c5, c7) == true)
		{
			win = 1;
		}
		else if (c1 != '1' && c2 != '2' && c3 != '3' && c4 != '4' && c5 != '5' && c6 != '6' && c7 != '7' && c8 != '8' && c9 != '9')
		{
			win = 2;
		}
		else
		{
			win = 0;
		}
	}
	if (win == 1)
	{
		cout << "Le joueur " << joueur << " a gagne!" << endl;
	}
	else if (win == 2)
	{
		cout << "Match nul!" << endl;
	}
}