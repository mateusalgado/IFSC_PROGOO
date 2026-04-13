#include "ArCondicionado.h"

const double ArCondicionado::REDUCAO_POR_UNIDADE = 1.8;
const double ArCondicionado::VARIACAO_MAXIMA = 18.0;

ArCondicionado::ArCondicionado(int potencia) : potencia(potencia) {
    if (this->potencia < POTENCIA_MIN) this->potencia = POTENCIA_MIN;
    if (this->potencia > POTENCIA_MAX) this->potencia = POTENCIA_MAX;
}

void ArCondicionado::setPotencia(int p) {
    if (p >= POTENCIA_MIN && p <= POTENCIA_MAX)
        potencia = p;
}

int ArCondicionado::getPotencia() const {
    return potencia;
}

double ArCondicionado::getTemperaturaAmbiente(double temperaturaExterna) const {
    double variacao = potencia * REDUCAO_POR_UNIDADE;  // 0 a 18 °C
    return temperaturaExterna - variacao;
}
