#include "QLPT.h"

QLPT::QLPT()
{
	nhien_lieu_s = 0;
	nhien_lieu_a = 0;
	nhien_lieu_r = 0;
}

void QLPT::Nhap()
{

}

void QLPT::XuatTongNhienLieuTheoLoai(int giay)
{
	cout << "\nNang luong tieu thu cua Apollo: " << nhien_lieu_a;
	cout << "\nNang luong tieu thu cua Rocketo: " << nhien_lieu_r;
	cout << "\nNang luong tieu thu cua Shieldata: " << nhien_lieu_s;
}

void QLPT::XuatTongNhienLieu(int giay)
{
	int tong_nhien_lieu = 0;
	for (int i = 0; i < v.size(); i++) {
		tong_nhien_lieu += v[i]->Nang_Luong_Tieu_Thu(giay);
	}
	cout << "\nTong nhien lieu cac phi thuyen tieu thu la: " << tong_nhien_lieu;
}

istream& operator>>(istream& is, QLPT& a)
{
	cout << "\n1. APOLLO";
	cout << "\n2. ROCKETO";
	cout << "\n3. SHIELDATO";
	int n; cout << "\nNhap so luong: "; cin >> n;
	int key;
	for (int i = 0; i < n; i++) {
		cout << "\nNhap loai phi thuyen ban muon chon: ";
		cin >> key;
		if (key == 1) {
			PhiThuyen* b = new Apollo;
			b->Nhap();
			a.v.push_back(b);
			a.nhien_lieu_a += a.v[i]->Nang_Luong_Tieu_Thu(3600);
		}
		else if (key == 2) {
			PhiThuyen* b = new Rocketo;
			b->Nhap();
			a.v.push_back(b);
			a.nhien_lieu_r += a.v[i]->Nang_Luong_Tieu_Thu(3600);
		}
		else if (key == 3) {
			PhiThuyen* b = new Shieldato;
			b->Nhap();
			a.v.push_back(b);
			a.nhien_lieu_s += a.v[i]->Nang_Luong_Tieu_Thu(3600);
		}
	}
	return is;
}

ostream& operator<<(ostream& os, QLPT& a)
{
	for (int i = 0; i < a.v.size(); i++) {
		a.v[i]->Xuat();
		cout << "\nNang luong tieu thu: ";
		cout << a.v[i]->Nang_Luong_Tieu_Thu(3600);
	}

	return os;
}

