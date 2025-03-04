// Copyright (c) 2025 Volodymyr Kryzhanovskyi All rights reserved.
// Created by: Volodymyr Kryzhanovskyi
// Date: 03 03 2025
// This program calculates circumference by the use of tau.

#include <iostream>

int main() {
    const float TAU = 6.28;
    // declare constant tau
    float radius, circumference;
    // declare variables
    std::cout << "Enter the radius (cm): ";
    std::cin >> radius;
    // get the radius from the user
    circumference = TAU * radius;
    // calculate using tau
    std::cout << "\n";
     // display the circumference
    std::cout << "Circumference = " << circumference << "cm"
    << std::endl;
}
