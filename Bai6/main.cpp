#include <iostream>
#include "tamgiac.h"

using namespace std;

int main() {
    Tamgiac tamgiac;
	tamgiac.Nhap();
	float huongtinhtien, dodai;
	cin >> huongtinhtien >> dodai;
	tamgiac.TinhTien(huongtinhtien, dodai);
	tamgiac.Xuat();
	cout << endl;
    return 0;
}
