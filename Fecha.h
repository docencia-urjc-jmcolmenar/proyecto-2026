//
// Created by José Manuel Colmenar on 24/4/26.
//

#ifndef PROYECTO_2026_FECHA_H
#define PROYECTO_2026_FECHA_H
#include <string>


class Fecha {
private:
    int dia;
    int mes;
    int anio;
public:
    Fecha();
    Fecha(int dia, int mes, int anio);
    int getDia() { return dia;}
    int getMes() { return mes;}
    int getAnio() { return anio;}
    bool setDia(int dia);
    bool setMes(int mes);
    bool setAnio(int anio);
    int diferenciaCon(Fecha fecha);
    std::string toString();
};


#endif //PROYECTO_2026_FECHA_H
