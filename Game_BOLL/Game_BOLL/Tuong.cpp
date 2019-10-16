/*lop tuong*/
#include "Tuong.h"
void Tuong::khoitaoTuong()
{
	xmin = 15;
	xmax = xmin + 30;
	ymin = 5;
	ymax = ymin + 17;

}
void Tuong::hienthiTuong()
{
	setTextColor(12);
	for (int j = ymin; j <= ymax; j++)
	{
		for (int i = xmin; i <= xmax; i++)
		{


			if ((j == ymin) || (j == ymax) || (i == xmin) || (i == xmax))
			{
				gotoXY(i, j);
				cout << (char)176;
			}
		}
	}
	cout << endl;
	setTextColor(15);
}

