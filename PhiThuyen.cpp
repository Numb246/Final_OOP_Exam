#include "PhiThuyen.h"

PhiThuyen::PhiThuyen()
{
	so_hieu = "";
	ten = "";
	he_so_alpha = 0;
}

PhiThuyen::PhiThuyen(string so_hieu, string ten, int he_so_alpha)
{
	this->so_hieu = so_hieu;
	this->ten = ten;
	this->he_so_alpha = he_so_alpha;
}

PhiThuyen::~PhiThuyen()
{
}
