#ifndef RELOGIO_H
#define RELOGIO_H

class Relogio {
private:
    int hora;
    int minuto;
    int segundo;

public:
    Relogio(int hora = 0, int minuto = 0, int segundo = 0);

    void setHorario(int hora, int minuto, int segundo);
    void getHorario(int& hora, int& minuto, int& segundo) const;
    void tick();
};

#endif // RELOGIO_H
