#pragma once
#include "MONHOC.h"

class MONTHI :public MONHOC {
private:
	float diem_thi;
public:
	MONTHI();
	float getDiem_thi();
	void setDiem_Thi(float diem_thi);
	float DiemTongKet();
	float DiemTBKT();
	void Nhap();
	void Xuat();
	~MONTHI();
};