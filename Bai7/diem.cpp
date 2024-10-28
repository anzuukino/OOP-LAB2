#include "diem.h"

/**
 * @brief Default constructor for Diem.
 * Initializes the point's coordinates to (0, 0).
 */
Diem::Diem() {
    this->iHoanh = 0;
    this->iTung = 0; 
}

/**
 * @brief Parameterized constructor for Diem.
 * Initializes the point's coordinates to the given values.
 *
 * @param Hoanh The x-coordinate.
 * @param Tung The y-coordinate.
 */
Diem::Diem(float Hoanh, float Tung) {
    this->iHoanh = Hoanh;
    this->iTung = Tung;
}

/**
 * @brief Get the x-coordinate of the point.
 *
 * @return The x-coordinate (iHoanh).
 */
float Diem::GetHoanhDo() const {
    return this->iHoanh; 
}

/**
 * @brief Get the y-coordinate of the point.
 *
 * @return The y-coordinate (iTung).
 */
float Diem::GetTungDo() const {
    return this->iTung;
}

/**
 * @brief Overloaded less-than operator.
 * Compares two points based on their coordinates.
 *
 * @param other The other point to compare against.
 * @return true if this point is less than the other point, false otherwise.
 */
bool Diem::operator<(const Diem& other) const {
    if (iHoanh == other.iHoanh) {
        return iTung < other.iTung;
    }
    return iHoanh < other.iHoanh;
