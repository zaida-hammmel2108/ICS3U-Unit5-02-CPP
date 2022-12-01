// Copyright (c) 2022 Zaida Hammel All rights reserved
//
// Created by: Zaida Hammel
// Created on: Nov 2022
// This program calculates the area of a triangle.

#include <iostream>
#include <string>

void Area(int base, int height) {
    double areaTriangle;

    // process
    areaTriangle = base * height / 2;

    // output
    std::cout << "The area of the triangle is " << areaTriangle
    << "cm²." << std::endl;
}
int main() {
    std::string strBase;
    std::string strHeight;
    int base;
    double height;

    // input
    std::cout << "Enter the base of the triangle: ";
    std::cin >> strBase;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> strHeight;

    // process and output
    try {
        base = std::stoi(strBase);
        height = std::stoi(strHeight);
        // call functions
        Area(base, height);
    } catch (std::invalid_argument) {
        std::cout << "Invalid Integer.";
    }
    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
