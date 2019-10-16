#include "VatThe.h"
void vatthe::hiendien()
{
	for (int i = x_min; i <= x_max; i++)
	{
		gotoXY(i, y);
		setTextColor(9);
		cout << "=";
		setTextColor(15);

	}
	cout << endl;
}
void vatthe::xoaVatThe()
{
	for (int i = x_min; i <= x_max; i++)
	{
		gotoXY(i, y);
		cout << ' ';
	}
}
