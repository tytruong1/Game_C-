#include <iostream>
using namespace std;
#include"game.h"
#include "welcome.h"
void inASK()
{
for (int i = 0; i < 256; i++)
	cout << i << ": " << (char)i << endl;
}

void xuatTen_Tua_De()
{
	int i = 3;
	int j = 18;
	gotoXY(j, ++i);
	setTextColor(2);
	cout << "########     ###    ##       ##       " << endl; gotoXY(j, ++i);
	cout << "##     ##   ## ##   ##       ##       " << endl; gotoXY(j, ++i);
	cout << "##     ##  ##   ##  ##       ##       " << endl; gotoXY(j, ++i);
	cout << "########  ##     ## ##       ##       " << endl; gotoXY(j, ++i);
	cout << "##     ## ######### ##       ##       " << endl; gotoXY(j, ++i);
	cout << "##     ## ##     ## ##       ##       " << endl; gotoXY(j, ++i);
	cout << "########  ##     ## ######## ######## " << endl; gotoXY(j, ++i);
	setTextColor(15);
	


}
void xuatMenu(int x, int y, int tmpY)
{
	xuatTen_Tua_De();
	setTextColor(6);
	gotoXY(x + 2, tmpY);
	cout << "BAT DAU";
	gotoXY(x + 2, tmpY + 2);
	cout << "TIEP TUC";
	gotoXY(x + 2, tmpY + 4);
	cout << "THOAT";
	setTextColor(15);
	gotoXY(x, y);
	cout << char(16);

	gotoXY(x, y + 6);
	cout << "Nhan O de chon chuc nang" << endl;
	
	
}
void menuGame(game &a)
{

	int tmpY = 15;
	int x = 27, y = tmpY;
	xuatMenu(x, y, tmpY);
	while (true)
	{
		int k = inputKey();
		if (k == KEY_DOWN)
		{
			if (y < tmpY + 4)
			{
				gotoXY(x, y);
				cout << " ";
				y += 2;
				gotoXY(x, y);
				cout << char(16);
			}
		}
		else if (k == KEY_UP)
		{
			if (y > tmpY)
			{
				gotoXY(x, y);
				cout << " ";
				y -= 2;
				gotoXY(x, y);
				cout << char(16);
			}
		}
		else if (k == 'O' || k == 'o') // BAT DAU
		{
			if (y == tmpY)
			{
				
				clrscr();
				loading();
				countdown();
				Sleep(1000);
				clrscr();
				a.khoiTaoCacGiaTri();
				a.setFlag(1);
				a.khoiChayGame();
				
				xuatMenu(x, y, tmpY);
			}
			else if (y == tmpY + 2 && a.getFlag())// TIEP TUC
			{
				clrscr();
				a.khoiChayGame();
				xuatMenu(x, y, tmpY);
			}
			else if (y == tmpY + 4)
			{
				exit(0);
			}

		}
	}
}
int main()
{
	noCursorType();
	
	game a;
	

	/*inASK();*/
	menuGame(a);
	system("pause");
	return 0;
}