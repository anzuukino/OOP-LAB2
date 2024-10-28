#include <iostream>
#include "tamgiac.h"

using namespace std;

int main() {
    Tamgiac X;

    // Input triangle vertices
    X.Nhap();
    cout << "\nToa do tam giac ban dau:\n";
    X.Xuat();

    // Translate the triangle
    X.TinhTien(1.1, 2.2);
    cout << "\nToa do tam giac sau khi tinh tien (dx = 1.1, dy = 2.2):\n";
    X.Xuat();

    // Scale the triangle
    X.PhongTo(2);
    cout << "\nToa do tam giac sau khi phong to (k = 2):\n";
    X.Xuat();

    // Shrink the triangle
    X.ThuNho(2);
    cout << "\nToa do tam giac sau khi thu nho (k = 2):\n";
    X.Xuat();

    // Rotate the triangle
    X.Quay(3.14 / 2);  // Rotate by 90 degrees
    cout << "\nToa do tam giac sau khi quay (rad = pi/2):\n";
    X.Xuat();

    cout << "--------------------------------\n";
    return 0;
}
