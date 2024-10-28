#include <iostream>
#include "diem.h" 
#pragma once

/**
 * @brief Default constructor for the Diem class.
 *
 * Initializes a Diem object with coordinates (x, y) set to 0.
 * - The x-coordinate (horizontal) is initialized to 0.
 * - The y-coordinate (vertical) is initialized to 0.
 */
Diem::Diem() {
    this->iHoanh = 0;
    this->iTung = 0;
}

/**
 * @brief Constructor for the Diem class.
 *
 * Initializes a Diem object with coordinates (x, y) set to the given values.
 * - The x-coordinate (horizontal) is initialized to the given value.
 * - The y-coordinate (vertical) is initialized to the given value.
 *
 * @param Hoanh The x-coordinate (horizontal) of the Diem object.
 * @param Tung The y-coordinate (vertical) of the Diem object.
 */
Diem::Diem(float Hoanh, float Tung) {
    this->iHoanh = Hoanh;
    this->iTung = Tung;
}

/**
 * @brief Copy constructor for the Diem class.
 *
 * Initializes a Diem object with coordinates (x, y) set to the same values as the given Diem object.
 * - The x-coordinate (horizontal) is initialized to the x-coordinate of the given Diem object.
 * - The y-coordinate (vertical) is initialized to the y-coordinate of the given Diem object.
 *
 * @param x The Diem object to copy the coordinates from.
 */
Diem::Diem(const Diem& x) {
    this->iHoanh = x.iHoanh;
    this->iTung = x.iTung;
}

/**
 * @brief Prints the coordinates of the Diem object to the console.
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
 * @brief Sets the y-coordinate (vertical) of the point.
 *
 * @param Tung The new y-coordinate for the Diem object.
 */
void Diem::SetTungDo(float Tung) {
    this->iTung = Tung;
}

/**
 * @brief Sets the x-coordinate (horizontal) of the point.
 *
 * @param Hoanh The new x-coordinate for the Diem object.
 */
void Diem::SetHoanhDo(float Hoanh) {
    this->iHoanh = Hoanh;
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
