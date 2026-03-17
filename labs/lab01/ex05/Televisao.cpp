#include "Televisao.h"

Televisao::Televisao(int volume, int canal)
    : volume(volume), canal(canal) {
    if (this->volume < VOLUME_MIN) this->volume = VOLUME_MIN;
    if (this->volume > VOLUME_MAX) this->volume = VOLUME_MAX;
    if (this->canal < CANAL_MIN) this->canal = CANAL_MIN;
    if (this->canal > CANAL_MAX) this->canal = CANAL_MAX;
}

void Televisao::aumentarVolume() {
    if (volume < VOLUME_MAX) volume++;
}

void Televisao::diminuirVolume() {
    if (volume > VOLUME_MIN) volume--;
}

void Televisao::aumentarCanal() {
    if (canal < CANAL_MAX)
        canal++;
    else
        canal = CANAL_MIN;  // volta ao 0
}

void Televisao::diminuirCanal() {
    if (canal > CANAL_MIN)
        canal--;
    else
        canal = CANAL_MAX;  // volta ao 75
}

void Televisao::setCanal(int c) {
    if (c >= CANAL_MIN && c <= CANAL_MAX)
        canal = c;
}

int Televisao::getVolume() const {
    return volume;
}

int Televisao::getCanal() const {
    return canal;
}
