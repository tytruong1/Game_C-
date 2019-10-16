#pragma once
#include <iostream>
using namespace std;
#include "Console.h"
class Tuong
{
private:
	int xmin;
	int xmax;
	int ymin;
	int ymax;

public:
	void khoitaoTuong();
	void hienthiTuong();


	friend class game;
	friend class boll;
};