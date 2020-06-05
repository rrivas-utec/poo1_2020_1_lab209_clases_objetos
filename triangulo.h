//
// Created by utec on 6/3/20.
//

#ifndef POO1_2020_1_LAB209_CLASES_OBJETOS_TRIANGULO_H
#define POO1_2020_1_LAB209_CLASES_OBJETOS_TRIANGULO_H


class triangulo_t {
private:
    double lado_1;
    double lado_2;
    double lado_3;
public:
    // Constructores
    triangulo_t();  // Constructor por defecto
    triangulo_t(double l1, double l2, double l3); // Constructor por parametro
    // Metodos
    double calcular_area();
    double calcular_perimetro();
    double calcular_semi_perimetro();
    // Set
    void set_lado_1(double value);
    void set_lado_2(double value);
    void set_lado_3(double value);
    void set_lados(double a, double b, double c);
    // Get
    double get_lado_1();
    double get_lado_2();
    double get_lado_3();
};

class Circulo {
    int pos_x;
    int pos_y;
    int radio;
public:
    double get_area();
};

class Rectangulo {
    int pos_x;
    int pos_y;
    int largo;
    int altura;
public:
    double get_area();
};

#endif //POO1_2020_1_LAB209_CLASES_OBJETOS_TRIANGULO_H
