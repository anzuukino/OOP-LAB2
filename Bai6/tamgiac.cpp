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
    this->A.Nhap();
    this->B.Nhap();
    this->C.Nhap();
}

/**
 * @brief Outputs the coordinates of the three vertices of the triangle.
 *
 * Prints the coordinates of points A, B, and C to the console.
 */
void Tamgiac::Xuat() {
    this->A.Xuat();
    this->B.Xuat();
    this->C.Xuat();
}

/**
 * @brief Translates the triangle by a given direction and distance.
 *
 * This method updates the coordinates of the three vertices based on a specified angle (`huongtinhtien`) in degrees
 * and a distance (`dodai`). The angle is converted to radians for calculation.
 *
 * @param huongtinhtien The direction in degrees from the horizontal axis.
 * @param dodai The distance by which to translate the triangle.
 */

void Tamgiac::TinhTien(float huongtinhtien, float dodai) {
    this->A.TinhTien(huongtinhtien, dodai);
    this->B.TinhTien(huongtinhtien, dodai);
    this->C.TinhTien(huongtinhtien, dodai);
}
