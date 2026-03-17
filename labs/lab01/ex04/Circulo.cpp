#include "Circulo.h"
#include <iostream>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

Circulo::Circulo(double raio, double x, double y)
    : raio(raio), centroX(x), centroY(y) {}

double Circulo::calcularArea() const {
    return M_PI * raio * raio;
}

double Circulo::calcularDistancia(const Circulo& outro) const {
    double dx = centroX - outro.centroX;
    double dy = centroY - outro.centroY;
    return std::sqrt(dx * dx + dy * dy);
}

double Circulo::calcularCircunferencia() const {
    return 2.0 * M_PI * raio;
}

void Circulo::setRaio(double r) {
    raio = r;
}

void Circulo::aumentarRaio(double percentual) {
    raio *= (1.0 + percentual / 100.0);
}

void Circulo::setCentro(double x, double y) {
    centroX = x;
    centroY = y;
}

void Circulo::imprimirRaio() const {
    std::cout << "Raio: " << raio << std::endl;
}

void Circulo::imprimirCentro() const {
    std::cout << "Centro: (" << centroX << ", " << centroY << ")" << std::endl;
}

void Circulo::imprimirArea() const {
    std::cout << "Area: " << calcularArea() << std::endl;
}

void Circulo::imprimirDistancia(const Circulo& outro) const {
    std::cout << "Distancia entre centros: " << calcularDistancia(outro) << std::endl;
}
