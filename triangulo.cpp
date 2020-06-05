//
// Created by utec on 6/3/20.
//

#include <cmath>
#include "triangulo.h"

triangulo_t::triangulo_t() {
    lado_1 = 0;
    lado_2 = 0;
    lado_3 = 0;
}

triangulo_t::triangulo_t(double l1, double l2, double l3) {
    lado_1 = l1;
    lado_2 = l2;
    lado_3 = l3;
}

double triangulo_t::calcular_area() {
    auto s = calcular_semi_perimetro();
    return sqrt(s*(s-lado_1)*(s-lado_2)*(s-lado_3));
}

double triangulo_t::calcular_perimetro() {
    return lado_1+lado_2+lado_3;
}

double triangulo_t::calcular_semi_perimetro() {
    return (lado_1+lado_2+lado_3)/2;
}

void triangulo_t::set_lado_1(double value) {
    lado_1 = value;
}

double triangulo_t::get_lado_1() {
    return lado_1;
}

void triangulo_t::set_lado_2(double value) {
    lado_2 = value;
}

void triangulo_t::set_lado_3(double value) {
    lado_3 = value;
}

double triangulo_t::get_lado_2() {
    return lado_2;
}

double triangulo_t::get_lado_3() {
    return lado_3;
}

void triangulo_t::set_lados(double a, double b, double c) {
    lado_1 = a;
    lado_2 = b;
    lado_3 = c;
}

void Circulo::get_area() {

}

void Rectangulo::get_area() {

}