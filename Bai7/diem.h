#pragma once

class Diem {
private:
    float iHoanh, iTung;

public:
    Diem();
    Diem(float Hoanh, float Tung);
    float GetTungDo() const;
    float GetHoanhDo() const;
    bool operator<(const Diem& other) const;
};
