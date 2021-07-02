#pragma once
#include "PhiThuyen.h"

class Rocketo : public PhiThuyen {
private:
	int hoa_luc; //2*5
public:
	Rocketo();
	Rocketo(string so_hieu, string ten, int he_so_alpha, int hoa_luc) : PhiThuyen(so_hieu, ten, he_so_alpha) {
		this->hoa_luc = hoa_luc;
	}
	int random(int min, int max);
	void Nhap();
	void SetHoaLuc(int hoa_luc);
	int GetHoaLuc();
	float Nang_Luong_Tieu_Thu(int giay);
	void Xuat();
	~Rocketo();
};