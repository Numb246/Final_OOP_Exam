#pragma once
#include "PhiThuyen.h"

class Shieldato : public PhiThuyen {
private:
	int ban_kinh;
public:
	Shieldato();
	Shieldato(string so_hieu, string ten, int he_so_alpha, int ban_kinh) : PhiThuyen(so_hieu, ten, he_so_alpha) {
		this->ban_kinh = ban_kinh;
	}
	void Nhap();
	int random(int min, int max);
	void SetR(int ban_kinh);
	int GetR();
	float Nang_Luong_Tieu_Thu(int giay);
	void Xuat();
	~Shieldato();
};