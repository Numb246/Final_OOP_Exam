#include "MONTHI.h"

MONTHI::MONTHI()
{
	diem_thi = 0;
}

float MONTHI::getDiem_thi()
{
	return diem_thi;
}

void MONTHI::setDiem_Thi(float diem_thi)
{
	this->diem_thi = diem_thi;
}

float MONTHI::DiemTongKet()
{
	return (DiemTBKT() + diem_thi) / 2;
}

float MONTHI::DiemTBKT()
{
	return (diem_he_so_1 + (diem_he_so_2 * 2)) / 3;
}

void MONTHI::Nhap()
{
	cin.ignore();
	cout << "\nNhap ma so mon thi: "; getline(cin, ma_so);
	cout << "\nNhap ten mon thi: "; getline(cin, ten_mon_hoc);
	cout << "\nNhap he so mon: "; cin >> he_so;
	cout << "\nNhap diem he so 1: "; cin >> diem_he_so_1;
	cout << "\nNhap diem he so 2: "; cin >> diem_he_so_2;
	cout << "\nNhap diem he so 3 (tuc la diem thi): "; cin >> diem_thi;
}

void MONTHI::Xuat()
{
	cout << "\n\tMON THI";
	cout << "\nMa so mon thi: " << ma_so;
	cout << "\nTen mon thi: " << ten_mon_hoc;
	cout << "\nHe so mon: " << he_so;
	cout << "\nDiem he so 1: " << diem_he_so_1;
	cout << "\nDiem he so 2: " << diem_he_so_2;
	cout << "\nDiem he so 3 (diem thi): " << diem_thi;
	cout << "\nDiem tong ket mon hoc: " << DiemTongKet();
}

MONTHI::~MONTHI()
{
}
