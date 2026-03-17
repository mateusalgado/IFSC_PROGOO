#include "Elevador.h"
#include <iostream>

int main() {
    std::cout << "=== Teste da classe Elevador ===" << std::endl;

    Elevador elevador(5, 10);  // capacidade 5, 10 andares (excl. térreo)

    std::cout << "\nEstado inicial:" << std::endl;
    std::cout << "Andar: " << elevador.getAndarAtual() << " (térreo)" << std::endl;
    std::cout << "Pessoas: " << elevador.getPessoasPresentes() << "/" << elevador.getCapacidade() << std::endl;

    elevador.entra();
    elevador.entra();
    elevador.entra();
    std::cout << "\nApós 3 pessoas entrarem: " << elevador.getPessoasPresentes() << std::endl;

    elevador.sobe();
    elevador.sobe();
    std::cout << "Após subir 2 andares: " << elevador.getAndarAtual() << std::endl;

    elevador.entra();
    elevador.entra();
    elevador.entra();  // não deve entrar (capacidade 5)
    std::cout << "Após mais 3 tentativas de entrar: " << elevador.getPessoasPresentes() << std::endl;

    elevador.desce();
    elevador.sai();
    elevador.sai();
    std::cout << "\nApós descer 1 andar e 2 saírem: andar=" << elevador.getAndarAtual()
              << ", pessoas=" << elevador.getPessoasPresentes() << std::endl;

    // Tentar descer no térreo
    elevador.desce();
    elevador.desce();
    std::cout << "No térreo, tentativas de descer: andar=" << elevador.getAndarAtual() << std::endl;

    return 0;
}
