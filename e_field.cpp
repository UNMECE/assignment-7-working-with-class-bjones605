#include "e_field.h"
#include <iostream>

// Default constructor
ElectricField::ElectricField() {
    E = new double[3];
    E[0] = 0.0;
    E[1] = 0.0;
    E[2] = 0.0;
}

// Parameterized constructor
ElectricField::ElectricField(double x, double y, double z) {
    E = new double[3];
    E[0] = x;
    E[1] = y;
    E[2] = z;
}

// Destructor
ElectricField::~ElectricField() {
    delete[] E;
}

// Display function
void ElectricField::display() {
    std::cout << "Electric Field: ("
              << E[0] << ", " << E[1] << ", " << E[2] << ")" << std::endl;
}
