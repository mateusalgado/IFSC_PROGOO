#include "Pessoa.h"
#include <iostream>

int main() {
    std::cout << "=== Teste da classe Pessoa ===" << std::endl;

    // Construtor com parâmetros
    Pessoa p1("Maria Silva", 25, 1.65);
    std::cout << "\nPessoa 1 (construtor):" << std::endl;
    p1.imprimir();

    // Construtor padrão e setters
    Pessoa p2;
    p2.setNome("João Santos");
    p2.setIdade(30);
    p2.setAltura(1.78);
    std::cout << "\nPessoa 2 (setters):" << std::endl;
    p2.imprimir();

    // Teste dos getters
    std::cout << "\nGetters da Pessoa 2:" << std::endl;
    std::cout << "Nome: " << p2.getNome() << std::endl;
    std::cout << "Idade: " << p2.getIdade() << std::endl;
    std::cout << "Altura: " << p2.getAltura() << std::endl;

    // Modificando atributos
    p1.setIdade(26);
    p1.setAltura(1.66);
    std::cout << "\nPessoa 1 após alterações:" << std::endl;
    p1.imprimir();

    return 0;
}
