#include "MONHOC.h"
#include "MONTHI.h"
#include "MONKIEMTRA.h"
#include "DANHSACHMONHOC.h"

int main() {
	DANHSACHMONHOC* a = new DANHSACHMONHOC;
	cin >> *a;
	cout << *a;
	delete a;
	return 0;
}