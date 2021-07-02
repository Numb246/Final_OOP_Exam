#pragma once
#include "PhiThuyen.h"

class Apollo : public PhiThuyen {
private:
	int so_nguoi; // 5-20
public:
	Apollo();
	Apollo(string so_hieu, string ten, int he_so_alpha, int so_nguoi) : PhiThuyen(so_hieu, ten, he_so_alpha) {
		this->so_nguoi = so_nguoi;
	}
	void Nhap();
	int random(int min, int max);
	void Set_So_Nguoi(int so_nguoi);
	int Get_So_Nguoi();
	void Xuat();
	float Nang_Luong_Tieu_Thu(int giay);
	~Apollo();
};