#include <iostream>
#include "triangulo.h"

using namespace std;

int main() {
    triangulo_t t1;
    triangulo_t t2{5, 4, 3};

    cout << "Triangulo 1, Area=" << t1.calcular_area() << endl;
    cout << "Triangulo 2, Area=" << t2.calcular_area() << endl;

    t1.set_lado_1(10);
    t1.set_lado_2(8);
    t1.set_lado_3(6);
    cout << "Triangulo 1, Area=" << t1.calcular_area() << endl;

    return 0;
}
