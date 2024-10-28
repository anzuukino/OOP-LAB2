#include <iostream>
#include <math.h>
#pragma once
#include "Dagiac.h"

/**
 * @brief Inputs the number of vertices and their coordinates for the polygon.
 *
 * Prompts the user to enter the number of vertices and the coordinates for each vertex.
 */
void DaGiac::Nhap() {
    std::cout << "Nhap so dinh cua da giac: ";
    std::cin >> this->n;
    this->Dinh = new Diem[this->n];

    for (int i = 0; i < this->n; i++) {
        std::cout << "Nhap toa do dinh thu " << i + 1 << ":\n";
        this->Dinh[i].Nhap();
    }
}

/**
 * @brief Outputs the coordinates of the vertices of the polygon.
 *
 * Prints the coordinates of each vertex to the console.
 */
void DaGiac::Xuat() {
    for (int i = 0; i < this->n; i++) {
        std::cout << "Toa do dinh thu " << i + 1 << ":\n";
        this->Dinh[i].Xuat();
    }
}

/**
 * @brief Translates the polygon by a given vector (dx, dy).
 *
 * This method applies a translation to each vertex of the polygon.
 *
 * @param dx The horizontal offset to be added to each vertex.
 * @param dy The vertical offset to be added to each vertex.
 */
void DaGiac::TinhTien(float dx, float dy) {
    for (int i = 0; i < this->n; i++) {
        this->Dinh[i].TinhTien(dx, dy);
    }
}

/**
 * @brief Rotates the polygon around the origin by a given angle.
 *
 * This method rotates each vertex of the polygon around the origin (0, 0)
 * by the specified angle in radians.
 *
 * @param rad The angle in radians by which to rotate the polygon.
 */
void DaGiac::Quay(float rad) {
    for (int i = 0; i < this->n; i++) {
        float x = this->Dinh[i].GetHoanhDo();
        float y = this->Dinh[i].GetTungDo();
        // Rotate the vertex
        this->Dinh[i].SetToaDo(x * cos(rad) - y * sin(rad), x * sin(rad) + y * cos(rad));
    }
}

/**
 * @brief Scales the polygon by a given factor.
 *
 * This method scales the coordinates of each vertex of the polygon
 * by the specified factor k.
 *
 * @param k The scale factor. Values greater than 1 enlarge the polygon,
 *          while values between 0 and 1 shrink it.
 */
void DaGiac::PhongTo(float k) {
    for (int i = 0; i < this->n; i++) {
        float x = this->Dinh[i].GetHoanhDo();
        float y = this->Dinh[i].GetTungDo();
        this->Dinh[i].SetToaDo(x * k, y * k);
    }
}

/**
 * @brief Shrinks the polygon by a given factor.
 *
 * This method shrinks the coordinates of each vertex of the polygon
 * by the specified factor k.
 *
 * @param k The shrink factor. Values greater than 1 will reduce the size of
 *          the polygon.
 */
void DaGiac::ThuNho(float k) {
    for (int i = 0; i < this->n; i++) {
        float x = this->Dinh[i].GetHoanhDo();
        float y = this->Dinh[i].GetTungDo();
        this->Dinh[i].SetToaDo(x / k, y / k);
    }
}
