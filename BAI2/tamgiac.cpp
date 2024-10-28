#include <iostream>
#include <math.h>
#include "tamgiac.h"
#pragma once

/**
 * @brief Inputs the coordinates of the three vertices of the triangle.
 *
 * Prompts the user to enter the coordinates for points A, B, and C.
 */
void Tamgiac::Nhap() {
    std::cout << "Nhap 3 diem cua tam giac: \n";
    std::cout << "Nhap diem A: \n";
    this->A.Nhap();
    std::cout << "Nhap diem B: \n";
    this->B.Nhap();
    std::cout << "Nhap diem C: \n";
    this->C.Nhap();
}

/**
 * @brief Outputs the coordinates of the three vertices of the triangle.
 *
 * Prints the coordinates of points A, B, and C to the console.
 */
void Tamgiac::Xuat() {
    std::cout << "3 diem cua tam giac: \n";
    std::cout << "Diem A: \n";
    this->A.Xuat();
    std::cout << "Diem B: \n";
    this->B.Xuat();
    std::cout << "Diem C: \n";
    this->C.Xuat();
}

/**
 * @brief Translates the triangle by a given vector (dx, dy).
 *
 * This method applies a translation to each vertex of the triangle.
 *
 * @param dx The horizontal offset to be added to each vertex.
 * @param dy The vertical offset to be added to each vertex.
 */
void Tamgiac::TinhTien(float dx, float dy) {
    this->A.TinhTien(dx, dy);
    this->B.TinhTien(dx, dy);
    this->C.TinhTien(dx, dy);
}

/**
 * @brief Scales the triangle by a given factor.
 *
 * This method scales the coordinates of each vertex of the triangle
 * by the specified factor k.
 *
 * @param k The scale factor. Values greater than 1 enlarge the triangle,
 *          while values between 0 and 1 shrink it.
 */
void Tamgiac::PhongTo(float k) {
    this->A.SetToaDo(this->A.GetHoanhDo() * k, this->A.GetTungDo() * k);
    this->B.SetToaDo(this->B.GetHoanhDo() * k, this->B.GetTungDo() * k);
    this->C.SetToaDo(this->C.GetHoanhDo() * k, this->C.GetTungDo() * k);
}

/**
 * @brief Shrinks the triangle by a given factor.
 *
 * This method shrinks the coordinates of each vertex of the triangle
 * by the specified factor k.
 *
 * @param k The shrink factor. Values greater than 1 will reduce the size of
 *          the triangle.
 */
void Tamgiac::ThuNho(float k) {
    this->A.SetToaDo(this->A.GetHoanhDo() / k, this->A.GetTungDo() / k);
    this->B.SetToaDo(this->B.GetHoanhDo() / k, this->B.GetTungDo() / k);
    this->C.SetToaDo(this->C.GetHoanhDo() / k, this->C.GetTungDo() / k);
}

/**
 * @brief Rotates the triangle around the origin by a given angle.
 *
 * This method rotates each vertex of the triangle around the origin (0, 0)
 * by the specified angle in radians.
 *
 * @param rad The angle in radians by which to rotate the triangle.
 */
void Tamgiac::Quay(float rad) {
    float xA = this->A.GetHoanhDo();
    float yA = this->A.GetTungDo();
    float xB = this->B.GetHoanhDo();
    float yB = this->B.GetTungDo();
    float xC = this->C.GetHoanhDo();
    float yC = this->C.GetTungDo();

    this->A.SetToaDo(xA * cos(rad) - yA * sin(rad), xA * sin(rad) + yA * cos(rad));
    this->B.SetToaDo(xB * cos(rad) - yB * sin(rad), xB * sin(rad) + yB * cos(rad));
    this->C.SetToaDo(xC * cos(rad) - yC * sin(rad), xC * sin(rad) + yC * cos(rad));
}
