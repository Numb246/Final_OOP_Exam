#pragma once
#include "PhiThuyen.h"
#include "Apollo.h"
#include "Rocketo.h"
#include "Shieldato.h"
#include <vector>

class QLPT {
private:
	vector <PhiThuyen*> v;
	int nhien_lieu_r;
	int nhien_lieu_a;
	int nhien_lieu_s;
public:
	QLPT();
	void Nhap();
	friend istream& operator >> (istream& is, QLPT& a);
	friend ostream& operator << (ostream& os, QLPT& a);
	void XuatTongNhienLieuTheoLoai(int giay);
	void XuatTongNhienLieu(int giay);
	~QLPT()
	{

	}
};