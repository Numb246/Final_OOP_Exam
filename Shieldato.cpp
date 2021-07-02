#include "Shieldato.h"

Shieldato::Shieldato()
{
	ban_kinh = random(5, 30);
	he_so_alpha = 20;
}

void Shieldato::Nhap()
{
	cin.ignore();
	cout << "\n\t\tSHIELDATO";
	cout << "\nSo hieu phi thuyen: ";
	getline(cin, so_hieu);
	cout << "\nTen phi thuyen: ";
	getline(cin, ten);
}

int Shieldato::random(int min, int max)
{
	static bool first = true;
	if (first)
	{
		srand(time(NULL));
		first = false;
	}
	return min + rand() % ((max + 1) - min);
}

void Shieldato::SetR(int ban_kinh)
{
	this->ban_kinh = ban_kinh;
}

int Shieldato::GetR()
{
	return this->ban_kinh;
}

float Shieldato::Nang_Luong_Tieu_Thu(int giay)
{
	return he_so_alpha * giay + 2 * ban_kinh * giay;
}

void Shieldato::Xuat()
{
	cout << "\nLoai phi thuyen: Shieldato";
	cout << "\nSo hieu:";
	cout << so_hieu;
	cout << "\nTen: ";
	cout << ten;
	cout << "\nBan kinh phi thuyen: ";
	cout << ban_kinh;
	cout << "\nHe so alpha: ";
	cout << he_so_alpha;
}

Shieldato::~Shieldato()
{
}
