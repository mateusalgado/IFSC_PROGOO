#include "Carro.h"

const double Carro::TANQUE_MAXIMO = 50.0;
const double Carro::CONSUMO_KM_L = 15.0;

Carro::Carro(double combustivelInicial)
    : combustivel(combustivelInicial), distanciaPercorrida(0.0) {
    if (this->combustivel > TANQUE_MAXIMO) this->combustivel = TANQUE_MAXIMO;
    if (this->combustivel < 0) this->combustivel = 0;
}

void Carro::abastecer(double litros) {
    if (litros <= 0) return;
    combustivel += litros;
    if (combustivel > TANQUE_MAXIMO) combustivel = TANQUE_MAXIMO;
}

bool Carro::mover(double km) {
    if (km <= 0) return true;
    double litrosNecessarios = km / CONSUMO_KM_L;
    if (litrosNecessarios > combustivel) return false;
    combustivel -= litrosNecessarios;
    distanciaPercorrida += km;
    return true;
}

double Carro::getCombustivel() const {
    return combustivel;
}

double Carro::getDistanciaPercorrida() const {
    return distanciaPercorrida;
}
