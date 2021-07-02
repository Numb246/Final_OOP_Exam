#include "DANHSACHMONHOC.h"

DANHSACHMONHOC::DANHSACHMONHOC()
{
}

float DANHSACHMONHOC::DiemTrungBinhHK()
{
	float tong_tu = 0;
	float tong_mau = 0;
	int tmp = 0;
	for (int i = 0; i < M; i++) {
		tmp = m[i]->getHe_so();
		tong_tu += m[i]->DiemTongKet() * tmp;
		tong_mau += tmp;
	}
	tong_tu *= 2;
	tong_mau *= 2;
	for (int i = M; i < m.size(); i++) { // do nhap n vo sau m
		tmp = m[i]->getHe_so();
		tong_tu += m[i]->DiemTongKet() * tmp;
		tong_mau += tmp;
	}
	return tong_tu / tong_mau;
}

DANHSACHMONHOC::~DANHSACHMONHOC()
{
}

istream& operator>>(istream& is, DANHSACHMONHOC& a)
{
	cout << "\nNhap so mon thi de luu vao danh sach: ";
	cin >> a.M;
	cout << "\nNhap so mon kiem tra de luu vao danh sach: ";
	cin >> a.N;
	cout << "\n\tNHAP THONG TIN MON THI";
	for (int i = 0; i < a.M; i++) {
		cout << "\nNhap mon thu " << i + 1 << " : ";
		MONHOC* b = new MONTHI;
		b->Nhap();
		a.m.push_back(b);
	}
	cout << "\n\tNHAP THONG TIN MON KIEM TRA";
	for (int i = 0; i < a.N; i++) {
		cout << "\nNhap mon thu " << i + 1 << " : ";
		MONHOC* b = new MONKIEMTRA;
		b->Nhap();
		a.m.push_back(b);
	}
	return is;
}

ostream& operator<<(ostream& os, DANHSACHMONHOC& a)
{
	float max = 0;
	float tmp = 0;
	float flag = 0; // luu i
	for (int i = 0; i < a.m.size(); i++) {
		a.m[i]->Xuat();
		tmp = a.m[i]->DiemTongKet();
		if (tmp > max) {
			max = tmp;
			flag = i;
		}
		if (i == a.m.size() - 1) {
			cout << "\n\nMon hoc co diem tong ket cao nhat: ";
			a.m[flag]->Xuat();
		}
	}
	cout << "\nDiem trung binh hoc ky: " << a.DiemTrungBinhHK();
	return os;
}
