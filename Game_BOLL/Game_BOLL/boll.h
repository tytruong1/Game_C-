#pragma once
#include "VatThe.h"

class boll
{
private:
	int x, y;
	int xcu, ycu;
public:
	bool dichuyen(vatthe a[], int n, int &viTri, Tuong wall);
	void xuathien();
	bool check_VaChamTuong_Trai_KhiRoi(vatthe a[], int n, int viTri, Tuong wall);
	bool check_VaChamTuong_Phai_KhiRoi(vatthe a[], int n, int viTri, Tuong wall);
	void ranDomViTriBoll(vatthe a[], int n, int &viTri, Tuong wall);
	void xoaBoll();
	
	void set_XCu_YCu();
	friend class game;
};