#include "Relogio.h"

Relogio::Relogio(int hora, int minuto, int segundo)
    : hora(hora), minuto(minuto), segundo(segundo) {}

void Relogio::setHorario(int h, int m, int s) {
    hora = h;
    minuto = m;
    segundo = s;
}

void Relogio::getHorario(int& h, int& m, int& s) const {
    h = hora;
    m = minuto;
    s = segundo;
}

void Relogio::tick() {
    segundo++;
    if (segundo >= 60) {
        segundo = 0;
        minuto++;
        if (minuto >= 60) {
            minuto = 0;
            hora++;
            if (hora >= 24) {
                hora = 0;
            }
        }
    }
}
