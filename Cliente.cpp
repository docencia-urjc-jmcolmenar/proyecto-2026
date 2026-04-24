//
// @Author José Manuel Colmenar
//

#include "Cliente.h"

// Implementación de constructor con parámetros
Cliente::Cliente(std::string nombre, std::string correoElectronico, std::string tipoCarne) {
    this->nombre = nombre;
    this->correoElectronico = correoElectronico;
    this->tipoCarnet = tipoCarne;
}

// Implementación de setters
void Cliente::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Cliente::setCorreoElectronico(std::string correoElectronico) {
    this->correoElectronico = correoElectronico;
}

void Cliente::setTipoCarnet(std::string tipoCarnet) {
    this->tipoCarnet = tipoCarnet;
}

void Cliente::setFechaNacimiento(Fecha fechaNacimiento) {
    this->fechaNacimiento = fechaNacimiento;
}

void Cliente::setFechaCarnet(Fecha fechaCarnet) {
    this->fechaObtencionCarnet = fechaCarnet;
}

int Cliente::antiguedadCarnet() {
    Fecha fechaActual;
    return fechaActual.diferenciaCon(fechaObtencionCarnet);
}

