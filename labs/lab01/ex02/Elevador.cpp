#include "Elevador.h"

Elevador::Elevador(int capacidade, int totalAndares)
    : andarAtual(0), totalAndares(totalAndares), capacidade(capacidade), pessoasPresentes(0) {}

void Elevador::entra() {
    if (pessoasPresentes < capacidade) {
        pessoasPresentes++;
    }
}

void Elevador::sai() {
    if (pessoasPresentes > 0) {
        pessoasPresentes--;
    }
}

void Elevador::sobe() {
    if (andarAtual < totalAndares) {
        andarAtual++;
    }
}

void Elevador::desce() {
    if (andarAtual > 0) {
        andarAtual--;
    }
}

int Elevador::getAndarAtual() const {
    return andarAtual;
}

int Elevador::getTotalAndares() const {
    return totalAndares;
}

int Elevador::getCapacidade() const {
    return capacidade;
}

int Elevador::getPessoasPresentes() const {
    return pessoasPresentes;
}
