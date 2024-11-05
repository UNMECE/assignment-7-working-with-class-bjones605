#ifndef E_FIELD_H
#define E_FIELD_H

class ElectricField {
private:
    double *E;  // Array for x, y, z components
public:
    // Default constructor
    ElectricField();
    // Parameterized constructor
    ElectricField(double x, double y, double z);
    // Destructor
    ~ElectricField();

    void display();
};

#endif
