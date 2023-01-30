#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>
#include <fstream>

using namespace std;

char menu;
int t = 0;
char tablica[9];
int komorka, tura;
char gracz[2];
int graczy = 2;
bool win;
char kom_znak;



int main()
{

	while (true)
	{
		win = false;
		tura = 1;
		cout << "\n\n\n           1. Nowa Gra\n           2. Instrukcja\n           3. Wyjscie\n\n\n";
		menu = _getch();

		switch (menu)
		{
			// -------------------------------------------nowa gra
		case '1':
										// w przyszlosci zmienic na petle > petla wpisujaca konkretne liczby w kolejnych komorkach tablicy w zmiennej CHAR
			tablica[0] = '1';
			tablica[1] = '2';
			tablica[2] = '3';
			tablica[3] = '4';
			tablica[4] = '5';
			tablica[5] = '6';
			tablica[6] = '7';
			tablica[7] = '8';
			tablica[8] = '9';

			gracz[0] = 'O';
			gracz[1] = 'X';

		
			system("cls");


			while (win == false)
			{
				system("cls");

				cout << "\n TURA: " << tura << "        gracz:  " << gracz[tura % graczy] << endl;
				cout << "\n          NOWA GRA:";
				cout << "\n\n";
				cout << "          |      |     \n";
				cout << "       " << tablica[0] << "  |   " << tablica[1] << "  |  " << tablica[2] << "  \n";
				cout << "          |      |     \n";
				cout << "    --------------------\n";
				cout << "          |      |     \n";
				cout << "       " << tablica[3] << "  |   " << tablica[4] << "  |  " << tablica[5] << "  \n";
				cout << "          |      |     \n";
				cout << "    --------------------\n";
				cout << "          |      |     \n";
				cout << "       " << tablica[6] << "  |   " << tablica[7] << "  |  " << tablica[8] << "  \n";
				cout << "          |      |     \n" << endl << endl;


				cin >> kom_znak;
				while (isdigit(kom_znak) == 0)
				{
					cout << "niepoprawny znak. uzyj numeracji 1-9:  ";
					cin >> kom_znak;
				}

				komorka = kom_znak - '0';
					if ((tablica[komorka - 1] == gracz[0]) || (tablica[komorka - 1] == gracz[1])) cout << "";
					else
					{

						if (tura % graczy == 1) tablica[komorka - 1] = gracz[1];
						else tablica[komorka - 1] = gracz[0];
						tura++;
					}
					if ((tablica[0] == tablica[1] && tablica[1] == tablica[2]) || (tablica[3] == tablica[4] && tablica[4] == tablica[5]) || (tablica[6] == tablica[7] && tablica[6] == tablica[8]) || (tablica[0] == tablica[3] && tablica[0] == tablica[6]) || (tablica[1] == tablica[4] && tablica[1] == tablica[7]) || (tablica[2] == tablica[5] && tablica[2] == tablica[8]) || (tablica[6] == tablica[4] && tablica[6] == tablica[2]) || (tablica[0] == tablica[4] && tablica[0] == tablica[8]))
					{
						system("cls");
						win = true;
						cout << "\n\n\n WYGRYWA GRACZ:  " << gracz[(tura - 1) % graczy] << endl << endl;
						cout << "Aby kontynuowac, nacisnij dowolny przycisk.\n";
						getchar();

					}
						if (tura > 9)
						{
						
							system("cls");
							win = true;
							cout << "\n\n\n REMIS!!!!" << endl << endl;
							cout << "Aby kontynuowac, nacisnij dowolny przycisk.\n";
							getchar();

						}
				
				
			}
				getchar();
				break;

			// ---------------------------------------------instrukcja gry
		case '2':								
			system("cls");
			cout << "INSTRUKCJA:\n______________\n\n\n";
			cout << "1. Do gry potrzebnych jest dwoje graczy.";
			cout << "\n2. Na zmiane wpisujcie liczby odpowiadajace numerom komorek.";
			cout << "\n3. Po zakonczeniu gry wcisnij dowolny przycisk";
			cout << "\n\n";
			cout << "          |      |     \n";
			cout << "       1  |   2  |  3  \n";
			cout << "          |      |     \n";
			cout << "    --------------------\n";
			cout << "          |      |     \n";
			cout << "       4  |   5  |  6  \n";
			cout << "          |      |     \n";
			cout << "    --------------------\n";
			cout << "          |      |     \n";
			cout << "       7  |   8  |  9  \n";
			cout << "          |      |     \n";
			cout << "\n\n\n";
			menu = _getch();
			break;

			// ----------------------------------------------wyjscie
		case '3':
			system("cls");
			cout << "\n\ndziekuje za zagranie w gre. Autor: K. Kogut\n\n\n";
			exit(0);
			break;

		default:	cout << "";

		}
		system("cls");
	}
}