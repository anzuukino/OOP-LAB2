#include "dagiac.h"
#include <iostream>

using namespace std;

int main() {
    DaGiac dg;
    dg.nhap();
    float dienTich = dg.tinhDienTich();
    cout << "Dien tich da giac: " << dienTich << endl;
    return 0;
}
