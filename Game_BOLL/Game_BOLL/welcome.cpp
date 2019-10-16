#include<iostream>
#include"welcome.h"
#include <ctime>
#include"console.h"
void welcome()
{
	//tao tuong
	for (int i = 5; i <= 88; i++)
	{
		for (int j = 5; j <= 15; j++)
		{
			if (j == 5 || j == 15 || i == 5 || i == 88)
			{
				gotoXY(i, j);
				cout << "$";
			}
		}
	}
	//tao ki tu welcome
	for (int i = 5; i <= 88; i++)
	{
		for (int j = 5; j <= 15; j++)
		{
			if (j == 8)
			{
				if (i == 8 || i == 9 || i == 16 || i == 17 || (i >= 28 && i <= 33) || i == 24 || i == 25 || i == 28 || i == 29 || i == 36 || i == 37 || (i >= 46 && i <= 50) || (i >= 55 && i <= 59) || i == 64 || i == 65 || i == 72 || i == 73 || (i >= 76 && i <= 81))
				{
					gotoXY(i, j);
					cout << "$";
				}
			}
			if (j == 9)
			{
				if (i == 9 || i == 10 || i == 15 || i == 16 || i == 17 || i == 18 || i == 23 || i == 24 || i == 28 || i == 29 || i == 36 || i == 37 || i == 44 || i == 45 || i == 53 || i == 54 || i == 60 || i == 61 || (i >= 64 && i <= 67) || (i >= 70 && i <= 73) | i == 76 || i == 77)
				{
					gotoXY(i, j);
					cout << "$";
				}
			}
			if (j == 10)
			{
				if (i == 10 || i == 11 || i == 14 || i == 15 || i == 18 || i == 19 || (i >= 28 && i <= 33) || i == 22 || i == 23 || i == 28 || i == 29 || i == 36 || i == 37 || i == 44 || i == 45 || i == 53 || i == 54 || i == 60 || i == 61 || i == 64 || i == 65 || (i >= 67 && i <= 70) || i == 72 || i == 73 || (i >= 76 && i <= 81))
				{
					gotoXY(i, j);
					cout << "$";
				}
			}
			if (j == 11)
			{
				if (i == 11 || i == 12 || i == 13 || i == 14 || i == 19 || i == 20 || i == 21 || i == 22 || i == 28 || i == 29 || i == 36 || i == 37 || i == 44 || i == 45 || i == 53 || i == 54 || i == 60 || i == 61 || i == 64 || i == 65 || i == 68 || i == 69 || i == 72 || i == 73 | i == 76 || i == 77)
				{
					gotoXY(i, j);
					cout << "$";

				}
			}
			if (j == 12)
			{
				if (i == 12 || i == 13 || i == 20 || i == 21 || (i >= 28 && i <= 33) || (i >= 36 && i <= 41) || (i >= 46 && i <= 50) || (i >= 55 && i <= 59) || i == 64 || i == 65 || i == 72 || i == 73 || (i >= 76 && i <= 81))
				{
					gotoXY(i, j);
					cout << "$";

				}
			}

		}
	}
	loading();
	Sleep(3000);
	system("cls");
}

void gameover()
{
	//tao ki tu the end
	for (int i = 5; i <= 88; i++)
	{
		for (int j = 5; j <= 15; j++)
		{
			if (j == 8)
			{
				if ((i >= 8 && i <= 19) || i == 22 || i == 23 || i == 28 || i == 29 || (i >= 32 && i <= 38) || (i >= 44 && i <= 50) || i == 53 || i == 54 || i == 60 || i == 61 || (i >= 64 && i <= 68))
				{
					gotoXY(i, j);
					cout << "$";
				}
			}
			if (j == 9)
			{
				if (i == 13 || i == 14 || i == 22 || i == 23 || i == 28 || i == 29 || i == 32 || i == 33 || i == 44 || i == 45 || (i >= 53 && i <= 56) || i == 60 || i == 61 || i == 64 || i == 65 || i == 68 || i == 69)
				{
					gotoXY(i, j);
					cout << "$";
				}
			}
			if (j == 10)
			{
				if (i == 13 || i == 14 || (i >= 22 && i <= 27) || i == 22 || i == 23 || i == 28 || i == 29 || (i >= 32 && i <= 38) || (i >= 44 && i <= 50) || i == 53 || i == 54 || i == 56 || i == 57 || i == 60 || i == 61 || i == 64 || i == 65 || i == 69 || i == 70)
				{
					gotoXY(i, j);
					cout << "$";
				}
			}
			if (j == 11)
			{
				if (i == 13 || i == 14 || i == 22 || i == 23 || i == 28 || i == 29 || i == 32 || i == 33 || i == 44 || i == 45 || i == 53 || i == 54 || (i >= 58 && i <= 61) || i == 64 || i == 65 || i == 68 || i == 69)
				{
					gotoXY(i, j);
					cout << "$";
				}
			}
			if (j == 12)
			{
				if (i == 13 || i == 14 || i == 22 || i == 23 || i == 28 || i == 29 || (i >= 32 && i <= 38) || (i >= 44 && i <= 50) || i == 53 || i == 54 || i == 60 || i == 61 || (i >= 64 && i <= 68))
				{
					gotoXY(i, j);
					cout << "$";
				}
			}

		}
	}
}

//tao thanh loading
void loading()
{
	srand(time(NULL));
	int n;
	int z;
	int start = 8;
	int l = start + 50;
	int ymin = 0, ymax = ymin + 2;
	for (int i = start; i <= l; i++)
	{
		for (int j = ymin; j <= ymax; j += 2)
		{
			if (j == ymin)
			{
				gotoXY(i, j);
				cout << (char)196;
			}
			if (j == ymax)
			{
				gotoXY(i, j);
				cout << (char)196;
			}
		}
	}
	gotoXY((l - start) / 2 + start - 4, ymax + 1);
	cout << "Loading: ";

	for (int i = start; i <= l; i++)
	{
		n = rand() % 701 + 100;
		gotoXY(i, ymin + 1);
		setTextColor(10);
		cout << (char)219;
		z = (i * 100) / l;
		gotoXY((l - start) / 2 + start + 5, ymax + 1);
		cout << z << "%" << endl;
		Sleep(n);
		setTextColor(15);

	}

}
//dem nguoc
void countdown()
{
	setTextColor(RED_COLOR);
	//xuat so 3
	for (int j = 5; j <= 22; j++)
	{
		for (int i = 15; i <= 45; i++)
		{
			if (((j >= 8 && j <= 9) || (j >= 13 && j <= 14) || (j >= 18 && j <= 19)) && (i >= 19 && i <= 41))
			{
				gotoXY(i, j);
				cout << "$";

			}
			if ((j >= 8 && j <= 19) && (i >= 38 && i <= 41))
			{
				gotoXY(i, j);
				cout << "$";
			}
		}
	}
	Sleep(500);
	//xoa so 3
	for (int j = 5; j <= 22; j++)
	{
		for (int i = 15; i <= 45; i++)
		{
			if (((j >= 8 && j <= 9) || (j >= 13 && j <= 14) || (j >= 18 && j <= 19)) && (i >= 19 && i <= 41))
			{
				gotoXY(i, j);
				cout << " ";

			}
			if ((j >= 8 && j <= 19) && (i >= 38 && i <= 41))
			{
				gotoXY(i, j);
				cout << " ";
			}
		}
	}
	Sleep(500);
	//xuat so 2

	for (int j = 5; j <= 22; j++)
	{
		for (int i = 15; i <= 45; i++)
		{
			if (((j >= 8 && j <= 9) || (j >= 13 && j <= 14) || (j >= 18 && j <= 19)) && (i >= 19 && i <= 41))
			{
				gotoXY(i, j);
				cout << "$";

			}
			if ((j >= 8 && j <= 12) && (i >= 38 && i <= 41))
			{
				gotoXY(i, j);
				cout << "$";
			}
			if ((j >= 15 && j <= 17) && (i >= 19 && i <= 22))
			{
				gotoXY(i, j);
				cout << "$";
			}
		}
	}
	Sleep(500);
	//xoa so 2
	for (int j = 5; j <= 22; j++)
	{
		for (int i = 15; i <= 45; i++)
		{
			if (((j >= 8 && j <= 9) || (j >= 13 && j <= 14) || (j >= 18 && j <= 19)) && (i >= 19 && i <= 41))
			{
				gotoXY(i, j);
				cout << " ";

			}
			if ((j >= 8 && j <= 12) && (i >= 38 && i <= 41))
			{
				gotoXY(i, j);
				cout << " ";
			}
			if ((j >= 15 && j <= 17) && (i >= 19 && i <= 22))
			{
				gotoXY(i, j);
				cout << " ";
			}
		}

	}
	Sleep(500);
	//xuat so 1
	for (int j = 5; j <= 22; j++)
	{
		for (int i = 15; i <= 45; i++)
		{
			if ((j >= 8 && j <= 19) && (i >= 28 && i <= 31))
			{
				gotoXY(i, j);
				cout << "$";

			}
		}
	}
	Sleep(500);
	// xoa so 1
	for (int j = 5; j <= 22; j++)
	{
		for (int i = 15; i <= 45; i++)
		{
			if ((j >= 8 && j <= 19) && (i >= 28 && i <= 31))
			{
				gotoXY(i, j);
				cout << " ";

			}
		}
	}
	setTextColor(WHITE_COLOR);
}