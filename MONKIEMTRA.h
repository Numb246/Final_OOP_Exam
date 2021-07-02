#pragma once
#include "MONHOC.h"

class MONKIEMTRA :public MONHOC {
private:
	float diem_kt_het_mon;
public:
	MONKIEMTRA();
	float getDiem_KT();
	void setDiem_KT(float diem_kt);
	float DiemTongKet();
	void Nhap();
	void Xuat();
	~MONKIEMTRA();
};