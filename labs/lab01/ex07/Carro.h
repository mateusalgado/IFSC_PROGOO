#ifndef CARRO_H
#define CARRO_H

class Carro {
private:
    static const double TANQUE_MAXIMO;   // 50 litros
    static const double CONSUMO_KM_L;   // 15 km/litro

    double combustivel;      // litros no tanque
    double distanciaPercorrida;  // km

public:
    Carro(double combustivelInicial = 0.0);

    void abastecer(double litros);
    bool mover(double km);

    double getCombustivel() const;
    double getDistanciaPercorrida() const;
};

#endif // CARRO_H
