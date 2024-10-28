#pragma once
#include "diem.h"
#include <vector>

class DaGiac {
private:
    std::vector<Diem> dinh;

public:
    void nhap();
    float tinhDienTich();
    std::vector<Diem> grahamScan();
};
