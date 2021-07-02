#include "MONHOC.h"

MONHOC::MONHOC()
{
	ma_so = "";
	ten_mon_hoc = "";
	diem_he_so_1 = 0;
	diem_he_so_2 = 0;
	diem_tong_ket = 0;
	he_so = 0;
}

MONHOC::MONHOC(string ma_so, string ten_mon_hoc, float diem_he_so_1, float diem_he_so_2, float diem_tong_ket, int he_so)
{
	this->ma_so = ma_so;
	this->ten_mon_hoc = ten_mon_hoc;
	this->diem_he_so_1 = diem_he_so_1;
	this->diem_he_so_2 = diem_he_so_2;
	this->diem_tong_ket = diem_tong_ket;
	this->he_so = he_so;
}

string MONHOC::getMa_so()
{
	return ma_so;
}

void MONHOC::setMa_so(string ma_so)
{
	this->ma_so = ma_so;
}

string MONHOC::getTen()
{
	return ten_mon_hoc;
}

void MONHOC::setTen(string ten_mon_hoc)
{
	this->ten_mon_hoc = ten_mon_hoc;
}

float MONHOC::getHe_so()
{
	return this->he_so;
}

void MONHOC::setHe_so(int he_so)
{
	this->he_so = he_so;
}

float MONHOC::getHe_so1()
{
	return diem_he_so_1;
}

void MONHOC::setHe_so1(float diem_he_so_1)
{
	this->diem_he_so_1 = diem_he_so_1;
}

float MONHOC::getHe_so2()
{
	return this->diem_he_so_2;
}

void MONHOC::setHe_so2(float diem_he_so_2)
{
	this->diem_he_so_2 = diem_he_so_2;
}

MONHOC::~MONHOC()
{
}
