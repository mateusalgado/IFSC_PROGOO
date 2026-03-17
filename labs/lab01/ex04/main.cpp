#include "Circulo.h"
#include <iostream>

int main() {
    std::cout << "=== Teste da classe Circulo ===" << std::endl;

    Circulo c1(5.0, 0.0, 0.0);
    std::cout << "\nCirculo 1 (raio=5, centro 0,0):" << std::endl;
    c1.imprimirRaio();
    c1.imprimirCentro();
    c1.imprimirArea();

    Circulo c2(3.0, 10.0, 0.0);
    std::cout << "\nCirculo 2 (raio=3, centro 10,0):" << std::endl;
    c2.imprimirRaio();
    c2.imprimirCentro();
    std::cout << "Distancia do C1 ao C2: ";
    c1.imprimirDistancia(c2);

    c1.setCentro(2.0, 3.0);
    c1.aumentarRaio(20);  // +20%
    std::cout << "\nC1 apos setCentro(2,3) e aumentar raio 20%:" << std::endl;
    c1.imprimirRaio();
    c1.imprimirCentro();
    c1.imprimirArea();

    return 0;
}
