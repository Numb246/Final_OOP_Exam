#pragma once
#include<iostream>
#include <string>
using namespace std;

class MONHOC {
protected:
	string ma_so;
	string ten_mon_hoc;
	float diem_he_so_1;
	float diem_he_so_2;
	float diem_tong_ket;
	int he_so;
public:
	MONHOC();
	MONHOC(string ma_so, string ten_mon_hoc, float diem_he_so_1, float diem_he_so_2, float diem_tong_ket, int he_so);
	string getMa_so();
	void setMa_so(string ma_so);
	string getTen();
	void setTen(string ten_mon_hoc);
	float getHe_so();
	void setHe_so(int he_so);
	float getHe_so1();
	void setHe_so1(float diem_he_so_1);
	float getHe_so2();
	void setHe_so2(float diem_he_so_2);
	virtual float DiemTongKet() = 0;
	virtual void Nhap() = 0;
	virtual void Xuat() = 0;
	virtual ~MONHOC();
};