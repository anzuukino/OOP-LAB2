#include <iostream>
#include "Dagiac.h"

using namespace std;

int main() {
    DaGiac dg;

    cout << "================== Nhap Da Giac ==================\n";
    dg.Nhap();
    cout << "================== Xuat Da Giac ==================\n";
    dg.Xuat();

    cout << "================== Tinh Tien ==================\n";
    dg.TinhTien(1, 5);
    dg.Xuat();

    cout << "================== Phong To ==================\n";
    dg.PhongTo(2);
    dg.Xuat();

    cout << "================== Thu Nho ==================\n";
    dg.ThuNho(3);
    dg.Xuat();

    cout << "================== Quay ==================\n";
    dg.Quay(3.14 / 2);
    dg.Xuat();

    return 0;
}
