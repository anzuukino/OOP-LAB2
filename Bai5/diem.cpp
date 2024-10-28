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
 * - The x-coordinate (horizontal) is initialized to x.
 * - The y-coordinate (vertical) is initialized to y.
 *
 * @param x The x-coordinate of the point.
 * @param y The y-coordinate of the point.
 */

Diem::Diem(float x, float y) {
	this->iHoanh = x;
	this->iTung = y;
}

/**
 * @brief Outputs the coordinates of the Diem object.
 *
 * This method prints the x and y coordinates to the console in the form (x, y).
 */
void Diem::Xuat() {
    std::cout << "(" << this->iHoanh << ", " << this->iTung << ")\n";
}

/**
 * @brief Doubles the coordinates of the point.
 *
 * This method multiplies both x and y coordinates of the Diem object by 2.
 */
void Diem::Nhandoi() {
    this->iHoanh *= 2;
    this->iTung *= 2;
}

/**
 * @brief Resets the coordinates to the origin (0, 0).
 *
 * Sets both x and y coordinates of the Diem object to 0.
 */
void Diem::GanGocToaDo() {
    this->iHoanh = 0;
    this->iTung = 0;
}

/**
 * @brief Moves the point by a given distance in a given direction.
 *
 * This method moves the point by a distance d in the direction specified by k.
 * - If k is 0, the point is moved along the x-axis.
 * - If k is not 0, the point is moved along the y-axis.
 *
 * @param k The direction of the movement (0 for x-axis, non-zero for y-axis).
 * @param d The distance to move the point.
 */

void Diem::TinhTien(int k, float d) {
	if (k == 0) {
		this->iHoanh += d;
	}
	else {
		this->iTung += d;
	}
}
