#pragma once
#include <iostream>
using namespace std;
#include "boll.h"
#include <ctime>





class game
{
private:
		boll P;
		vatthe* D;
		Tuong wall;
		int n;
		int diem;
		int life;
		int chieuDai;
		int viTri;// vi tri khi vien bi dung tren toa y cua mot vat the
		bool flag = false;
public:
	void khoiChayGame(); // Phần Chạy Game
	bool vungAnToan();// Kiểm tra xem boll có nằm trong vùng an toàn hay không
	bool checkBienTuong();// nếu đụng biên dưới thì mất một mạng
	
	int kiemTraViTriY(); // tra ve gia tri y cua boll
	void hienThiVatCan(); // xuat mang vat can
	void xoaCacVatCan();
	bool checkPhamViBoll(int a); // kiem tra boll nam trong pham vi cua boll[a]
	void khoiTaoCacGiaTri();// Khởi tạo các giá trị của boll, vật cản, tuong
	void khoiTao_VatThe();// khởi tạo mặc định 5 vật thể
	
	bool xuLyFlag();


	vatthe random_VatThe(); // tạo ra 1 vật thể mới
	void themVatTheVaoMang(vatthe a); // xoa dau mang, them vat the moi vao cuoi
	void diChuyenVatCan();
	bool kiemTraLife(clock_t &a);

	~game()
	{
		delete[] D;
	}
	int getLife()
	{
		return life;
	}
	void ketThuc()
	{
		xoaCacVatCan();
		P.xoaBoll();
		gotoXY((wall.xmax - wall.xmin) / 2 + wall.xmin - 4, (wall.ymax-wall.ymin)/2 + wall.ymin);
		setTextColor(7);
			cout << "GAME OVER";
			setTextColor(15);
	}
	void setFlag(bool a)
	{
		flag = a;
	}
	bool getFlag(){ return flag; }
};


