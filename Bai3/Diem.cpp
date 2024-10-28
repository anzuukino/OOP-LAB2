#include <iostream>
#include "diem.h"
#pragma once

/**
 * @brief Inputs the coordinates of the Diem object from the user.
 *
 * Prompts the user to enter the x-coordinate (hoành do) and y-coordinate (tung do)
 * and stores the values in the Diem object.
 */
void Diem::Nhap() {
    std::cout << "Nhap hoanh do: ";
    std::cin >> this->iHoanh;
    std::cout << "Nhap tung do: ";
    std::cin >> this->iTung;
}

/**
 * @brief Outputs the coordinates of the Diem object to the console.
 *
 * Prints the x-coordinate (hoành do) and y-coordinate (tung do) of the Diem object.
 */
void Diem::Xuat() {
    std::cout << "Hoanh do: " << this->iHoanh << "\n";
    std::cout << "Tung do: " << this->iTung << "\n";
}

/**
 * @brief Gets the y-coordinate (vertical) of the point.
 *
 * @return float The y-coordinate of the point.
 */
float Diem::GetTungDo() {
    return this->iTung;
}

/**
 * @brief Gets the x-coordinate (horizontal) of the point.
 *
 * @return float The x-coordinate of the point.
 */
float Diem::GetHoanhDo() {
    return this->iHoanh;
}

/**
 * @brief Sets the coordinates of the Diem object.
 *
 * Updates both the x-coordinate (hoành do) and y-coordinate (tung do) of the Diem object
 * to the specified values.
 *
 * @param Hoanh The new x-coordinate for the Diem object.
 * @param Tung The new y-coordinate for the Diem object.
 */
void Diem::SetToaDo(float Hoanh, float Tung) {
    this->iHoanh = Hoanh;
    this->iTung = Tung;
}

/**
 * @brief Translates the point by a given vector (dx, dy).
 *
 * This method updates the coordinates of the Diem object by adding the given
 * offsets to the current coordinates.
 *
 * @param dx The offset to be added to the x-coordinate.
 * @param dy The offset to be added to the y-coordinate.
 */
void Diem::TinhTien(float dx, float dy) {
    this->iHoanh += dx;
    this->iTung += dy;
}
