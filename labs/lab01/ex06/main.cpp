#include "ArCondicionado.h"
#include <iostream>
#include <iomanip>

int main() {
    std::cout << "=== Teste da classe ArCondicionado ===" << std::endl;

    ArCondicionado ac1(5);   // potência média
    ArCondicionado ac2(10);  // potência máxima

    double tempExt1 = 25.0;
    double tempExt2 = 31.0;

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "\nCondicionador 1: temp. externa " << tempExt1 << " °C, potencia " << ac1.getPotencia() << std::endl;
    std::cout << "  Temperatura do ambiente: " << ac1.getTemperaturaAmbiente(tempExt1) << " °C" << std::endl;

    std::cout << "\nCondicionador 2: temp. externa " << tempExt2 << " °C, potencia " << ac2.getPotencia() << std::endl;
    std::cout << "  Temperatura do ambiente: " << ac2.getTemperaturaAmbiente(tempExt2) << " °C" << std::endl;

    return 0;
}
