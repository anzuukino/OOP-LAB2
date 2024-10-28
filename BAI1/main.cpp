#include <iostream>
#include "diem.h"

using namespace std;

int main(){
	cout << "--------------------------------\n";
    Diem A;
    cout << "Diem A (Chi khoi tao khong gan gia tri) \n";
    A.Xuat();

    // Creating point B with specific coordinates
    Diem B(2.5, 1);
    cout << "Diem B (Tao diem B voi gia tri ) \n";
    B.Xuat();

    // Creating point C using the copy constructor
    Diem C(B);
    cout << "Diem C (sao chep tu diem B) \n";
    C.Xuat();

    // Modifying coordinates of point C
    C.SetHoanhDo(5.1);
    C.SetTungDo(6.2);
    cout << "Diem C sau khi thay doi:\n";
    C.Xuat();

    // Displaying coordinates of point B
    cout << "Hoanh do cua B: " << B.GetHoanhDo() << "\n";
    cout << "Tung do cua B: " << B.GetTungDo() << "\n";

    // Translating point C
    C.TinhTien(1.1, 2.2);
    cout << "Sau khi tinh tien diem C:\n";
    C.Xuat();

    cout << "--------------------------------\n";
    return 0;
}