// Copyright (c) 2019 Patrick Gemmell All rights reserved.
//
// Created by: Patrick Gemmell
// Created on: September 12 2019
// This Program calculates the total of two integers

#include <iostream>

int main() {
    // This function calculates area and perimeter
    int integer1;
    int integer2;
    int total;


    std::cout << "Enter the first integer: " << std::endl;
    std::cin  >> integer1;
    std::cout << "Enter the second integer: " << std::endl;
    std::cin  >> integer2;


    total = integer1+integer2;


    std::cout << "" << std::endl;
    std::cout << integer1 << "+" << integer2 <<  "=" << total << std::endl;
}
