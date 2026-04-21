//
// @Author José Manuel Colmenar
//

#include "Coche.h"

Coche::Coche(std::string matricula, std::string marca, std::string modelo) {
    this->matricula = matricula;
    this->marca = marca;
    this->modelo = modelo;
    this->kilometraje = 0; // Inicializamos el kilometraje a 0
}

void Coche::setMatricula(std::string matricula) {
    this->matricula = matricula;
}

void Coche::setMarca(std::string marca) {
    this->marca = marca;
}

void Coche::setModelo(std::string modelo) {
    this->modelo = modelo;
}

void Coche::setKilometraje(long kilometraje) {
    this->kilometraje = kilometraje;
}

std::string Coche::obtenerFicha() {
    return "Matricula: " + matricula + "\nMarca: " + marca + "\nModelo: " + modelo + "\nKilometraje: " + std::to_string(kilometraje);
}