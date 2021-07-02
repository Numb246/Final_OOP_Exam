#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class PhiThuyen {
protected:
	string so_hieu;
	string ten;
	int he_so_alpha;
public:
	PhiThuyen();
	PhiThuyen(string so_hieu, string ten, int he_so_alpha);
	virtual void Nhap() = 0;
	virtual int random(int min, int max) = 0;
	virtual void Xuat() = 0;
	virtual float Nang_Luong_Tieu_Thu(int giay) = 0;
	~PhiThuyen();
};