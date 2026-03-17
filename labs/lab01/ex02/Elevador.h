#ifndef ELEVADOR_H
#define ELEVADOR_H

class Elevador {
private:
    int andarAtual;      // 0 = térreo
    int totalAndares;    // excluindo o térreo
    int capacidade;
    int pessoasPresentes;

public:
    Elevador(int capacidade, int totalAndares);

    void entra();
    void sai();
    void sobe();
    void desce();

    int getAndarAtual() const;
    int getTotalAndares() const;
    int getCapacidade() const;
    int getPessoasPresentes() const;
};

#endif // ELEVADOR_H
