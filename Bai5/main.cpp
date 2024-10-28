#include <iostream>
#include "diem.h"

using namespace std;

int main() {
    float x, y;
    cin >> x >> y;

    Diem diem(x, y);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int chiThi;
        cin >> chiThi;

        switch (chiThi) {
        case 1:
            diem.Nhandoi();
            break;
        case 2:
            diem.GanGocToaDo();
            break;
        case 3: {
            int k;
            float d;
            cin >> k >> d;
            diem.TinhTien(k, d);
            break;
        }
        default:
            break;
        }
    }

    diem.Xuat();
    cout << endl;

    return 0;
}