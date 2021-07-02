#include "Apollo.h"

Apollo::Apollo()
{
	so_nguoi = random(5, 20);
	he_so_alpha = 10;
}

void Apollo::Nhap()
{
	cin.ignore();
	cout << "\n\t\tAPOLLO";
	cout << "\nSo hieu phi thuyen: ";
	getline(cin, so_hieu);
	cout << "\nTen phi thuyen: ";
	getline(cin, ten);
}

int Apollo::random(int min, int max)
{
	static bool first = true;
	if (first)
	{
		srand(time(NULL));
		first = false;
	}
	return min + rand() % ((max + 1) - min);
}

void Apollo::Set_So_Nguoi(int so_nguoi)
{
	this->so_nguoi = so_nguoi;
}

int Apollo::Get_So_Nguoi()
{
	return this->so_nguoi;
}

void Apollo::Xuat()
{
	cout << "\nLoai phi thuyen: Apollo";
	cout << "\nSo hieu:";
	cout << so_hieu;
	cout << "\nTen: ";
	cout << ten;
	cout << "\nSo nguoi duoc cho: ";
	cout << so_nguoi;
	cout << "\nHe so alpha: ";
	cout << he_so_alpha;
}

float Apollo::Nang_Luong_Tieu_Thu(int giay)
{
	return (he_so_alpha + so_nguoi) * giay;
}

Apollo::~Apollo()
{
}

