// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: September 2019
// This program calculates the area of a determined (length) regular octagon.


#include <iostream>
#include <cmath>

int main() {
    int length;
    int area;

    // input
    std::cout << "Enter the length of the ortagon (cm): " << std::endl;
    std::cin >> length;

    // process
    area = (2 * (1 + sqrt(2)) * length * length);

    // output
    std::cout << "" << area << "cm^2" << std::endl;
}
