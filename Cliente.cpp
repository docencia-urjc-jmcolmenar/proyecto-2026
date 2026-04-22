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

int Cliente::antiguedadCarnet() {
    // TODO: método pendiente de incluir fechas como atributos
    return 0;
}

