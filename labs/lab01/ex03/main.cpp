#include "Relogio.h"
#include <iostream>
#include <iomanip>

int main() {
    std::cout << "=== Teste da classe Relogio ===" << std::endl;

    Relogio relogio;
    relogio.setHorario(23, 59, 58);

    int h, m, s;
    relogio.getHorario(h, m, s);
    std::cout << "Horário inicial: " << std::setfill('0')
              << std::setw(2) << h << ":" << std::setw(2) << m << ":" << std::setw(2) << s << std::endl;

    relogio.tick();
    relogio.getHorario(h, m, s);
    std::cout << "Após 1 tick: " << std::setfill('0')
              << std::setw(2) << h << ":" << std::setw(2) << m << ":" << std::setw(2) << s << std::endl;

    relogio.tick();
    relogio.getHorario(h, m, s);
    std::cout << "Após 2 ticks (deve virar 00:00:00): " << std::setfill('0')
              << std::setw(2) << h << ":" << std::setw(2) << m << ":" << std::setw(2) << s << std::endl;

    relogio.setHorario(12, 30, 59);
    relogio.tick();
    relogio.getHorario(h, m, s);
    std::cout << "12:30:59 + 1 tick: " << std::setfill('0')
              << std::setw(2) << h << ":" << std::setw(2) << m << ":" << std::setw(2) << s << std::endl;

    return 0;
}
