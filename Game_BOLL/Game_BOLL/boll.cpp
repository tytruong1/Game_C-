#include "boll.h"
/*lớp quả bóng*/
//phương thức di chuyển của quả bóng
bool boll::dichuyen(vatthe a[], int n, int &viTri, Tuong wall)
{
	int t = inputKey();
	if (t == 1075) // qua trái
	{
		if (check_VaChamTuong_Trai_KhiRoi(a, n, viTri, wall) == false)
		{
			set_XCu_YCu();
			xoaBoll();
			x--;

			this->xuathien();
		}
	}
	else if (t == 1077)
	{
		if (check_VaChamTuong_Phai_KhiRoi(a, n, viTri, wall) == false)
		{
			set_XCu_YCu();
			xoaBoll();

			x++;
			this->xuathien();
		}

	}
	else if (t == 'p' || t == 'P')
		return true;
	return false;

}
void boll::xoaBoll()
{
	gotoXY(xcu, ycu);
	cout << " ";
}
bool boll::check_VaChamTuong_Trai_KhiRoi(vatthe a[], int n, int viTri, Tuong wall)
{
	for (int i = viTri; i < n; i++)
	{
		if (x - 1 == a[i].get_xmax() && a[i].get_y() == y || x - 1 == wall.xmin)
			return true;
	}
	return false;
}
bool boll::check_VaChamTuong_Phai_KhiRoi(vatthe a[], int n, int viTri, Tuong wall)
{
	for (int i = viTri; i < n; i++)
	{
		if (x + 1 == a[i].get_xmin() && a[i].get_y() == y || x + 1 == wall.xmax)
			return true;
	}
	return false;
}
//xuất hiện khi bắt đầu
void boll::xuathien()
{
	gotoXY(x, y);
	cout << (char)2;
}
void boll::ranDomViTriBoll(vatthe a[], int n, int &viTri, Tuong wall)
{

	viTri = 2;
	x = (rand() % (a[viTri].get_xmax() - a[viTri].get_xmin() + 1) + a[viTri].get_xmin());
	y = (a[viTri].get_y() - 1);
}
void boll::set_XCu_YCu()
{
	xcu = x;
	ycu = y;
}
