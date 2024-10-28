#include <iostream>
#include <math.h>
#pragma once
#include "Diem.h"

class DaGiac {
private:
	int n;
	Diem* Dinh;
public:
	void Nhap();
	void Xuat();
	void TinhTien(float dx, float dy);
	void Quay(float rad);
	void PhongTo(float k);
	void ThuNho(float k);
};