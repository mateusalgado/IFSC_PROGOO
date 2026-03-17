#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa {
private:
    std::string nome;
    int idade;
    double altura;

public:
    Pessoa(const std::string& nome = "", int idade = 0, double altura = 0.0);

    // Getters
    std::string getNome() const;
    int getIdade() const;
    double getAltura() const;

    // Setters
    void setNome(const std::string& nome);
    void setIdade(int idade);
    void setAltura(double altura);

    void imprimir() const;
};

#endif // PESSOA_H
