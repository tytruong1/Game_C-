#pragma once
#include "Tuong.h"

class vatthe
{
private:
	int x_min;
	int x_max;
	int y;
public:
	void hiendien();
	void xoaVatThe();
	int get_xmin()
	{
		return x_min;
	}
	int get_xmax()
	{
		return x_max;
	}
	int get_y()
	{
		return y;
	}
	friend class game;
};