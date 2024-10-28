#include "dagiac.h"
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

/**
 * @brief Input the vertices of the polygon.
 */
void DaGiac::nhap() {
    int n;
    cin >> n;

    dinh.resize(n);
    for (int i = 0; i < n; ++i) {
        float x, y;
        cin >> x >> y; 
        dinh[i] = Diem(x, y);
    }
}

/**
 * @brief Calculate the area of the polygon.
 * @return The area of the polygon.
 */
float DaGiac::tinhDienTich() {
    vector<Diem> hull = grahamScan();
    float dienTich = 0.0;

    for (size_t i = 0; i < hull.size(); ++i) {
        float x1 = hull[i].GetHoanhDo();
        float y1 = hull[i].GetTungDo();
        float x2 = hull[(i + 1) % hull.size()].GetHoanhDo();
        float y2 = hull[(i + 1) % hull.size()].GetTungDo();

        dienTich += x1 * y2 - x2 * y1;
    }

    return abs(dienTich) / 2.0;
}

/**
 * @brief Perform the Graham scan to find the convex hull of the points.
 * @return The vertices of the convex hull.
 */
vector<Diem> DaGiac::grahamScan() {
    sort(dinh.begin(), dinh.end());

    vector<Diem> upper;
    for (const Diem& point : dinh) {
        // Build the upper hull
        while (upper.size() >= 2) {
            Diem& p2 = upper[upper.size() - 1];
            Diem& p1 = upper[upper.size() - 2];
            float crossProduct = (p2.GetHoanhDo() - p1.GetHoanhDo()) * (point.GetTungDo() - p1.GetTungDo()) -
                (p2.GetTungDo() - p1.GetTungDo()) * (point.GetHoanhDo() - p1.GetHoanhDo());
            if (crossProduct <= 0) {
                upper.pop_back(); 
            }
            else {
                break;
            }
        }
        upper.push_back(point);
    }

    vector<Diem> lower;
    for (int i = dinh.size() - 1; i >= 0; --i) {
        const Diem& point = dinh[i];
        // Build the lower hull
        while (lower.size() >= 2) {
            Diem& p2 = lower[lower.size() - 1];
            Diem& p1 = lower[lower.size() - 2];
            float crossProduct = (p2.GetHoanhDo() - p1.GetHoanhDo()) * (point.GetTungDo() - p1.GetTungDo()) -
                (p2.GetTungDo() - p1.GetTungDo()) * (point.GetHoanhDo() - p1.GetHoanhDo());
            if (crossProduct <= 0) {
                lower.pop_back();
            }
            else {
                break;
            }
        }
        lower.push_back(point); 
    }


    lower.pop_back();
    upper.insert(upper.end(), lower.begin(), lower.end());
    return upper; 
}
