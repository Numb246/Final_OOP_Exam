#pragma once
#include"MONHOC.h"
#include "MONKIEMTRA.h"
#include "MONTHI.h"
#include <vector>

class DANHSACHMONHOC {
private:
	vector<MONHOC*> m;
	int M; // so mon thi
	int N; // so mon kiem tra
public:
	DANHSACHMONHOC();
	friend istream& operator >> (istream& is, DANHSACHMONHOC& a);
	friend ostream& operator << (ostream& os, DANHSACHMONHOC& a);
	float DiemTrungBinhHK();
	~DANHSACHMONHOC();
};