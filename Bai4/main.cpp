#include <iostream>
#include <vector>
#include "ThiSinh.h"

using namespace std;

int main() {
    int n;
    cout << "Nhap so thi sinh: ";
    cin >> n;
    cin.ignore();

    vector<ThiSinh> dsThiSinh(n);

    for (int i = 0; i < n; ++i) {
        cout << "\nNhap thong tin thi sinh thu " << i + 1 << ":\n";
        dsThiSinh[i].Nhap();
    }

    cout << "\nThong tin cac thi sinh co tong diem lon hon 15:\n";
    for (int i = 0; i < n; ++i) {
        if (dsThiSinh[i].Tong() > 15) {
            dsThiSinh[i].Xuat();
            cout << "----------------------------------" << endl;
        }
    }


    ThiSinh* tsMax = &dsThiSinh[0];
    for (int i = 1; i < n; ++i) {
        if (dsThiSinh[i].Tong() > tsMax->Tong()) {
            tsMax = &dsThiSinh[i];
        }
    }

    cout << "\nThong tin thi sinh co diem cao nhat:\n";
    tsMax->Xuat();

    return 0;
}
