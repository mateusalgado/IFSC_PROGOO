#ifndef ARCONDICIONADO_H
#define ARCONDICIONADO_H

class ArCondicionado {
private:
    static const int POTENCIA_MIN = 0;
    static const int POTENCIA_MAX = 10;
    static const double REDUCAO_POR_UNIDADE;  // 1.8 °C
    static const double VARIACAO_MAXIMA;      // 18 °C

    int potencia;

public:
    ArCondicionado(int potencia = 0);

    void setPotencia(int potencia);
    int getPotencia() const;

    // Dada a temperatura externa (em °C), retorna a temperatura do ambiente
    double getTemperaturaAmbiente(double temperaturaExterna) const;
};

#endif // ARCONDICIONADO_H
