#include "m_field.h"
#include <iostream>

// Default constructor
MagneticField::MagneticField() {
    B = new double[3];
    B[0] = 0.0;
    B[1] = 0.0;
    B[2] = 0.0;
}

// Parameterized constructor
MagneticField::MagneticField(double x, double y, double z) {
    B = new double[3];
    B[0] = x;
    B[1] = y;
    B[2] = z;
}

// Destructor
MagneticField::~MagneticField() {
    delete[] B;
}

// Display function
void MagneticField::display() {
    std::cout << "Magnetic Field: ("
              << B[0] << ", " << B[1] << ", " << B[2] << ")" << std::endl;
}
