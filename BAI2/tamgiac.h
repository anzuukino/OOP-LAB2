#pragma once
#include "diem.h"

class Tamgiac{
    private:
        Diem A, B, C;
    public:
        void Nhap();
        void Xuat();
        void TinhTien(float dx, float dy);
        void PhongTo(float k);
        void ThuNho(float k);
        void Quay(float rad);
};