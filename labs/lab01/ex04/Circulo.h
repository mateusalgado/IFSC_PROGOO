#ifndef CIRCULO_H
#define CIRCULO_H

#include <cmath>

class Circulo {
private:
    double raio;
    double centroX;
    double centroY;

    double calcularArea() const;
    double calcularDistancia(const Circulo& outro) const;
    double calcularCircunferencia() const;

public:
    Circulo(double raio = 0.0, double x = 0.0, double y = 0.0);

    void setRaio(double raio);
    void aumentarRaio(double percentual);
    void setCentro(double x, double y);

    void imprimirRaio() const;
    void imprimirCentro() const;
    void imprimirArea() const;
    void imprimirDistancia(const Circulo& outro) const;
};

#endif // CIRCULO_H
