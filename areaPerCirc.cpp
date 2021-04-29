// Copyright (c) Year Jonathan Kene All rights reserved.
//
// Created by: Jonathan Kene
// Created on: Apr. 28, 2021
// This program calculates and displays the area and
// perimeter o a circle with radius 6 cm.
#include <iostream>
#include <cmath>

int main() {
  std::cout << "For a circle that has a radius\n";
  std::cout << "of 6cm:\n";
  std::cout << "\n";
  std::cout << "Area = " << M_PI * pow(6, 2) << " cm^2\n";
  std::cout << "Perimeter = " << 2*M_PI*6 << " cm\n";
}
