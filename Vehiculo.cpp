//
// Created by José Manuel Colmenar on 6/5/26.
//

#include "Vehiculo.h"

Vehiculo::Vehiculo(std::string matricula, std::string marca, std::string modelo) {
    this->matricula = matricula;
    this->marca = marca;
    this->modelo = modelo;
    this->kilometraje = 0; // Inicializamos el kilometraje a 0
}

std::string Vehiculo::obtenerFicha() {
    return "Matricula: " + matricula + "\nMarca: " + marca + "\nModelo: " + modelo + "\nKilometraje: " + std::to_string(kilometraje);
}
