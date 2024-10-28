#include <iostream>
#include "diem.h"
#include <cmath>
#pragma once

/**
 * @brief Inputs the coordinates of the point.
 *
 * Prompts the user to enter the x-coordinate and y-coordinate of the point.
 */

void Diem::Nhap() {
	std::cin >> this->iHoanh;
	std::cin >> this->iTung;
}

/**
 * @brief Outputs the coordinates of the Diem object to the console.
 *
 * Prints the x-coordinate and y-coordinat of the Diem object.
 */
void Diem::Xuat() {
    std::cout << "(" << iHoanh << ", " << iTung << ")\n";
}

/**
 * @brief Translates the point by a given direction and distance.
 *
 * This method updates the coordinates based on a specified angle (`huongtinhtien`) in degrees
 * and a distance (`dodai`). The angle is converted to radians for calculation.
 *
 * @param huongtinhtien The direction in degrees from the horizontal axis.
 * @param dodai The distance by which to translate the point.
 */
void Diem::TinhTien(float huongtinhtien, float dodai) {
    float huongRadian = huongtinhtien * 3.14 / 180;
    this->iHoanh += dodai * cos(huongRadian);
    this->iTung += dodai * sin(huongRadian);
}
