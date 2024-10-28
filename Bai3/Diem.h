#pragma once
class Diem {
private:
    float iHoanh, iTung;
public:
    void Nhap();
    void Xuat();
    float GetTungDo();
    float GetHoanhDo();
    void SetToaDo(float Hoanh, float Tung);
    void TinhTien(float dx, float dy);
};