#include "Televisao.h"
#include <iostream>

int main() {
    std::cout << "=== Teste da classe Televisao ===" << std::endl;

    Televisao tv;
    std::cout << "Estado inicial: volume=" << tv.getVolume() << ", canal=" << tv.getCanal() << std::endl;

    for (int i = 0; i < 5; i++) tv.aumentarVolume();
    std::cout << "Apos aumentar volume 5x: " << tv.getVolume() << std::endl;

    tv.diminuirVolume();
    std::cout << "Apos diminuir 1x: " << tv.getVolume() << std::endl;

    tv.setCanal(10);
    std::cout << "Canal definido para 10: " << tv.getCanal() << std::endl;

    tv.aumentarCanal();
    tv.aumentarCanal();
    std::cout << "Apos subir 2 canais: " << tv.getCanal() << std::endl;

    tv.diminuirCanal();
    std::cout << "Apos descer 1 canal: " << tv.getCanal() << std::endl;

    tv.setCanal(75);
    tv.aumentarCanal();
    std::cout << "Canal 75, apos aumentar (deve voltar a 0): " << tv.getCanal() << std::endl;

    tv.setCanal(0);
    tv.diminuirCanal();
    std::cout << "Canal 0, apos diminuir (deve ir a 75): " << tv.getCanal() << std::endl;

    return 0;
}
