#pragma once

class Diem{
    private:
        float iHoanh, iTung;
    public:
        Diem();
		Diem(float x, float y);
        void Xuat();
        void Nhandoi();
		void GanGocToaDo();
        void TinhTien(int k, float d);
};