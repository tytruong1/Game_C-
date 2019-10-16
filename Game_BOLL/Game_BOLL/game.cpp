#include "game.h"

 /*Lớp Game*/

 void game::khoiTaoCacGiaTri()
 {
	 srand(time(NULL));
	
	 //khoi tao tuong
	 wall.khoitaoTuong();

	 //Khởi Tạo Vật Thể 
	
	 chieuDai = (wall.xmax - wall.xmin)/4;

	 int soluong = wall.ymax - (wall.ymin + 3); // sl ô trống tính từ ymin +2 đến ymax
	 int b1 = soluong /3 ;// số lượng ô khoảng cách là 3
	 int b2 = (soluong % 3) /2; // số lượng ô khoảng cách là 2 
	 n=b1 + b2 + 1;

	 D = new vatthe[n];
	 for(int j = 0,i = wall.ymin + 2; j < b1+1;j++,i+=3)
	 {
		 D[j].y = i;
		D[j].x_min=(rand() % (wall.xmax  - wall.xmin - chieuDai) + wall.xmin +1);
		D[j].x_max = D[j].x_min + chieuDai - 2;
	 }
	 D[n-1].y = wall.ymax-1;
	 D[n-1].x_min=(rand() % (wall.xmax  - wall.xmin - chieuDai) + wall.xmin +1);
	 D[n-1].x_max = D[n-1].x_min + chieuDai - 2;
	 //khởi tạo boll

	 P.ranDomViTriBoll(D, n, viTri, wall);

	 //
	 diem = 0;
	 life = 3;

	

 }
 void game::khoiChayGame()
 {
	 wall.hienthiTuong();
	 hienThiVatCan();
	 P.xuathien();
	 clock_t start=clock(), end;
	 long t=0;
	 bool flag = false;// cờ hiệu cho biết boll đang ở trạng thái rơi hay đứng yên
	 int time_move_wall = 300;
	 gotoXY(wall.xmax - 9, wall.ymin - 1);
	 cout << "Score: " << diem;
	 gotoXY(wall.xmin, wall.ymin - 1);
	 cout << "Life: " << life;
	 while (true)
	 {
		 end = clock();
		 if (P.dichuyen(D, n, viTri, wall))// di chuyển và kiểm tra tạm dừng
		 {
			 clrscr();
			 break;
		 }
		 t += end - start;
		
		 if (vungAnToan() == false)
		 {

			 P.set_XCu_YCu();
			 P.y += 1;
			 if (this->checkBienTuong() == true && kiemTraLife(end) == false)
			 {
				 flag = true;
				 this->ketThuc();
				 Sleep(1000);
				 clrscr();
				 break;
				 
			 }

			 else
			 {
				 P.xoaBoll();
				 P.xuathien();
				 Sleep(100);
			 }
		 
			 
		 }
		 else
		 {
			 flag = true;

		 }

		 //Kiểm Tra Thời gian để di chuyển Vật cản, đồng thời kiểm tra va chạm của boll
		 if (t / time_move_wall >= 1)
		 {
			 if (xuLyFlag())
				 flag = true;
			 if (flag == true)
			 {
				 P.set_XCu_YCu();

				 P.y--;
				 if (this->checkBienTuong() == true && kiemTraLife(end) == false)
				 {
					 flag = true;
					 this->ketThuc();
					 Sleep(1000);
					 clrscr();
					 break;
					 
				 }
				 P.xoaBoll();
				 diChuyenVatCan();
				 P.xuathien();
			 }
			 else
			 {
				 if (this->checkBienTuong() == true && kiemTraLife(end) == false)
				 {
					 flag = true;
					 this->ketThuc();
					 Sleep(1000);
					 clrscr();
					 break;
					 
				 }
				 diChuyenVatCan();
				 flag = false;
			 }
			
			 t = t - time_move_wall;
		 }
		 start = end;
	 }
 }
 bool game::xuLyFlag()
 {
	 for (int i = viTri; i < n; i++)
	 {
		 if (P.y == D[i].y-1 && P.x >= D[i].x_min && P.x <= D[i].x_max)
			 return true;
	 }
	 return false;
 }
 void game::diChuyenVatCan()
 {
	 xoaCacVatCan();
	 
	 for (int i = 0; i < n; i++)
	 {
		 D[i].y--;
	 }
	 if (D[0].y == wall.ymin)
	 {
		 gotoXY(wall.xmax - 9, wall.ymin - 1);
		 cout << "Score: " << ++diem;
		 
		 for (int i = 0; i < n - 1; i++)
			 D[i] = D[i + 1];
		 D[n - 1] = random_VatThe();
		 D[n - 1].y = wall.ymax - 1;
		 viTri = viTri - 1;
		 
	 }
	 hienThiVatCan();

 }
 bool game::vungAnToan()
 {
	 int index = kiemTraViTriY();
	
	 if (index != -1 && checkPhamViBoll(index))
	{
				viTri = index;			
				return true;
	 }
else
	 {
		 return false;
	 }

 }
 void game::xoaCacVatCan()
 {
	 for (int i = 0; i < n; i++)
	 {
		 D[i].xoaVatThe();
	 }
 }
 int game::kiemTraViTriY()
 {
	 for (int i = viTri; i < n; i++)
	 {
		 if (P.y == D[i].y - 1)
			 return i;
	 }
	 return -1;
 }
 bool game::checkPhamViBoll(int a)
 {
	
		 if (P.x < D[a].x_min || P.x>D[a].x_max)
			 return false;// nằm ngoài phạm vi

	 return true;
 }
 void game::hienThiVatCan()
 {
	 for (int i = 0; i < n ; i++)
	 {
		 D[i].hiendien();
	 }
 }

 bool game::checkBienTuong()
 {
	 if(P.y  == wall.ymax || P.y == wall.ymin)
		 return true;
	 return false;
 }

 void game::themVatTheVaoMang(vatthe a)
 {
	 D[n-1] = a;
	 for(int i =0 ; i<n-1;i++)
	 {
		 D[i] = D[i+1];
	 }
 }
 vatthe game::random_VatThe()
 {
	 vatthe a;
		a.x_min=(rand() % (wall.xmax - wall.xmin - chieuDai) + wall.xmin +1);
		a.x_max = a.x_min + chieuDai -2 ;
		a.y = D[n-1].y;
	return a;
 }
 bool game::kiemTraLife(clock_t &a)
 {
	 if (getLife() > 0)
	 {
		 P.xoaBoll();
		 life--;
		 P.ranDomViTriBoll(D, n, viTri, wall);
		 gotoXY(wall.xmin, wall.ymin - 1);
		 cout << "Life: " << life;
		 P.set_XCu_YCu();
		 int speed = 200;
		 int times=3;
		 for (int i = 0; i < times;i++)
		 {
			 P.xoaBoll();
			 Sleep(speed);
			 P.xuathien();
			 Sleep(speed);
		 }
		 a += speed*times * 2;
		 P.y--;
		 return true;
	 }
	 return false;
 }