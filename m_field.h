#ifndef M_FIELD_H
#define M_FIELD_H

class MagneticField {
private:
    double *B;  // Array for x, y, z components

public:
    // Default constructor
    MagneticField();            
    // Parameterized constructor
    MagneticField(double x, double y, double z);
    // Destructor
    ~MagneticField();              

    void display();
};

#endif