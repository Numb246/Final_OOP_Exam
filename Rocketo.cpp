#include "Rocketo.h"

Rocketo::Rocketo()
{
	hoa_luc = random(2, 5);
	he_so_alpha = 30;
}

int Rocketo::random(int min, int max)
{
	static bool first = true;
	if (first)
	{
		srand(time(NULL));
		first = false;
	}
	return min + rand() % ((max + 1) - min);
}

void Rocketo::Nhap()
{
	cin.ignore();
	cout << "\n\t\tROCKETO";
	cout << "\nSo hieu phi thuyen: ";
	getline(cin, so_hieu);
	cout << "\nTen phi thuyen: ";
	getline(cin, ten);
}

void Rocketo::SetHoaLuc(int hoa_luc)
{
	this->hoa_luc = hoa_luc;
}

int Rocketo::GetHoaLuc()
{
	return this->hoa_luc;
}

float Rocketo::Nang_Luong_Tieu_Thu(int giay)
{
	return he_so_alpha * giay + hoa_luc * hoa_luc * giay;
}

void Rocketo::Xuat()
{
	cout << "\nLoai phi thuyen: Rocketo";
	cout << "\nSo hieu:";
	cout << so_hieu;
	cout << "\nTen: ";
	cout << ten;
	cout << "\nHoa luc phi thuyen: ";
	cout << hoa_luc;
	cout << "\nHe so alpha: ";
	cout << he_so_alpha;
}

Rocketo::~Rocketo()
{
}
