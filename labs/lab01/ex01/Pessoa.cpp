#include "Pessoa.h"
#include <iostream>

Pessoa::Pessoa(const std::string& nome, int idade, double altura)
    : nome(nome), idade(idade), altura(altura) {}

std::string Pessoa::getNome() const {
    return nome;
}

int Pessoa::getIdade() const {
    return idade;
}

double Pessoa::getAltura() const {
    return altura;
}

void Pessoa::setNome(const std::string& nome) {
    this->nome = nome;
}

void Pessoa::setIdade(int idade) {
    this->idade = idade;
}

void Pessoa::setAltura(double altura) {
    this->altura = altura;
}

void Pessoa::imprimir() const {
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Idade: " << idade << " anos" << std::endl;
    std::cout << "Altura: " << altura << " m" << std::endl;
}
