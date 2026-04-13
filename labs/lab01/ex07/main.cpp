#include "Carro.h"
#include <iostream>
#include <iomanip>

int main() {
    std::cout << "=== Teste da classe Carro ===" << std::endl;

    Carro carro;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Estado inicial: " << carro.getCombustivel() << " L, "
              << carro.getDistanciaPercorrida() << " km" << std::endl;

    carro.abastecer(30);
    std::cout << "Apos abastecer 30 L: " << carro.getCombustivel() << " L" << std::endl;

    bool ok = carro.mover(150);  // 150 km = 10 L
    std::cout << "Mover 150 km: " << (ok ? "OK" : "Falhou") << std::endl;
    std::cout << "Combustivel: " << carro.getCombustivel() << " L, distancia: "
              << carro.getDistanciaPercorrida() << " km" << std::endl;

    ok = carro.mover(400);  // precisaria 26.67 L, só tem 20 L
    std::cout << "Mover 400 km (sem combustivel suficiente): " << (ok ? "OK" : "Falhou") << std::endl;
    std::cout << "Combustivel: " << carro.getCombustivel() << " L, distancia: "
              << carro.getDistanciaPercorrida() << " km" << std::endl;

    ok = carro.mover(300);  // 20 L * 15 = 300 km, exato
    std::cout << "Mover 300 km: " << (ok ? "OK" : "Falhou") << std::endl;
    std::cout << "Combustivel: " << carro.getCombustivel() << " L, distancia: "
              << carro.getDistanciaPercorrida() << " km" << std::endl;

    carro.abastecer(60);  // tenta passar do max
    std::cout << "Abastecer 60 L (tanque max 50): " << carro.getCombustivel() << " L" << std::endl;

    return 0;
}
