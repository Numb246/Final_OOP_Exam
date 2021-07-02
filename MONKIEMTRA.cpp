#include "MONKIEMTRA.h"

MONKIEMTRA::MONKIEMTRA()
{
	diem_kt_het_mon = 0;
}

float MONKIEMTRA::getDiem_KT()
{
	return diem_kt_het_mon;
}

void MONKIEMTRA::setDiem_KT(float diem_kt)
{
	this->diem_kt_het_mon = diem_kt;
}

float MONKIEMTRA::DiemTongKet()
{
	return (diem_he_so_1 + (diem_he_so_2 * 2) + diem_kt_het_mon * 3) / 6;
}

void MONKIEMTRA::Nhap()
{
	cin.ignore();
	cout << "\nNhap ma so mon kiem tra: "; getline(cin, ma_so);
	cout << "\nNhap ten mon kiem tra: "; getline(cin, ten_mon_hoc);
	cout << "\nNhap he so mon kiem tra: "; cin >> he_so;
	cout << "\nNhap diem he so 1: "; cin >> diem_he_so_1;
	cout << "\nNhap diem he so 2: "; cin >> diem_he_so_2;
	cout << "\nNhap diem he so 3 (tuc la diem kiem tra): "; cin >> diem_kt_het_mon;
}

void MONKIEMTRA::Xuat()
{
	cout << "\n\tMON KIEM TRA";
	cout << "\nMa so mon kiem tra: " << ma_so;
	cout << "\nTen mon kiem tra: " << ten_mon_hoc;
	cout << "\nHe so mon kiem tra: " << he_so;
	cout << "\nDiem he so 1: " << diem_he_so_1;
	cout << "\nDiem he so 2: " << diem_he_so_2;
	cout << "\nDiem he so 3 (diem kiem tra): " << diem_kt_het_mon;
	cout << "\nDiem tong ket mon hoc: " << DiemTongKet();
}

MONKIEMTRA::~MONKIEMTRA()
{
}
