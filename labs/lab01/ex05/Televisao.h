#ifndef TELEVISAO_H
#define TELEVISAO_H

class Televisao {
private:
    static const int VOLUME_MIN = 0;
    static const int VOLUME_MAX = 100;
    static const int CANAL_MIN = 0;
    static const int CANAL_MAX = 75;

    int volume;
    int canal;

public:
    Televisao(int volume = 0, int canal = 0);

    void aumentarVolume();
    void diminuirVolume();
    void aumentarCanal();
    void diminuirCanal();
    void setCanal(int canal);

    int getVolume() const;
    int getCanal() const;
};

#endif // TELEVISAO_H
