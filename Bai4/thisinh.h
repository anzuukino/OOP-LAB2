#pragma once
#include <string>

class ThiSinh {
private:
    std::string Ten;
    std::string MSSV;
    int iNgay, iThang, iNam;
    float fToan, fVan, fAnh;

public:
    void Nhap();
    void Xuat();
    float Tong();
};