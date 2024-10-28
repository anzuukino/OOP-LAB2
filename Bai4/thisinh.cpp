#include <iostream>
#include "ThiSinh.h"

using namespace std;

/**
 * @brief Input student information.
 *
 * Prompts the user to input the student's name, student ID, birthdate, and scores
 * in Math, Literature, and English.
 */
void ThiSinh::Nhap() {
    cout << "Nhap ten: ";
    getline(cin, Ten); 
    cout << "Nhap MSSV: ";
    getline(cin, MSSV); 
    cout << "Nhap ngay, thang, nam sinh (dd mm yyyy): ";
    cin >> iNgay >> iThang >> iNam; 
    cout << "Nhap diem Toan: ";
    cin >> fToan;
    cout << "Nhap diem Van: ";
    cin >> fVan; 
    cout << "Nhap diem Anh: ";
    cin >> fAnh; 
    cin.ignore();
}

/**
 * @brief Display student information.
 *
 * Outputs the student's name, ID, birthdate, individual scores, and total score.
 */
void ThiSinh::Xuat() {
    cout << "Ten: " << Ten << "\nMSSV: " << MSSV
        << "\nNgay sinh: " << iNgay << "/" << iThang << "/" << iNam
        << "\nDiem Toan: " << fToan << "\nDiem Van: " << fVan
        << "\nDiem Anh: " << fAnh << "\nTong diem: " << Tong() << endl;
}

/**
 * @brief Calculate the total score.
 *
 * Adds up the scores in Math, Literature, and English.
 *
 * @return The total score of the student.
 */
float ThiSinh::Tong() {
    return fToan + fVan + fAnh;
}
