#include "e_field.h"
#include "m_field.h"

int main() {
    ElectricField eFieldDefault;
    eFieldDefault.display();

    ElectricField eField(5, -3.6, 1.3);
    eField.display();

    MagneticField mFieldDefault;
    mFieldDefault.display();

    MagneticField mField(9.1, 2.3, 5);
    mField.display();

    return 0;
}
