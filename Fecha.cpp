//
// Created by José Manuel Colmenar on 24/4/26.
//

#include "Fecha.h"

#include <iostream>
#include <ctime>

Fecha::Fecha(int dia, int mes, int anio) {
    if (setDia(dia) && setMes(mes) && setAnio(anio)) {
        // TODO: habría que comprobar los meses con el día (que no haya 31 de abril, ...)
    } else {
        std::cerr << "Fecha incorrecta. Se han establecido valores por defecto: 1/1/1900." << std::endl;
        this->dia = 1;
        this->mes = 1;
        this->anio = 1900;
    }
}

bool Fecha::setDia(int dia) {
    if (dia >= 1 && dia <= 31) {
        this->dia = dia;
        return true;
    }
    std::cerr << "Error: Día inválido. Debe estar entre 1 y 31." << std::endl;
    return false;
}

bool Fecha::setMes(int mes) {
    if (mes >= 1 && mes <= 12) {
        this->mes = mes;
        return true;
    }
    std::cerr << "Error: Mes inválido. Debe estar entre 1 y 12." << std::endl;
    return false;
}

bool Fecha::setAnio(int anio) {
    if (anio >= 1900) {
        this->anio = anio;
        return true;
    }
    std::cerr << "Error: Año inválido. Debe ser 1900 o posterior." << std::endl;
    return false;
}

int Fecha::diferenciaCon(Fecha fecha) {
    // Se calculan los días de diferencia usando ctime
    std::tm tm1 = {0, 0, 0, dia, mes - 1, anio - 1900}; // tm_mon es 0-11 y tm_year es años desde 1900
    std::tm tm2 = {0, 0, 0, fecha.getDia(), fecha.getMes() - 1, fecha.getAnio() - 1900};
    return (difftime(mktime(&tm1), mktime(&tm2)) / 86400); // Convertir segundos a días
}
