//
// @Author José Manuel Colmenar
//

#include "Coche.h"

#include <iostream>
#include <ostream>

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

std::string Coche::aplanaObjeto() {
    // Genera un string con un JSON que describe todos los atributos del coche:
    std::string json = "{";
    json += "\"matricula\": \"" + matricula + "\", ";
    json += "\"marca\": \"" + marca + "\", ";
    json += "\"modelo\": \"" + modelo + "\", ";
    json += "\"kilometraje\": " + std::to_string(kilometraje);
    json += "}";
    return json;
    return "El coche se ha aplanado";
}

Coche::Coche(std::string cadenaJSON) {
    // Crea el objeto a partir del parseo de la cadena JSON que se reciba.
    // Para simplificar, vamos a suponer que la cadena JSON tiene el formato exacto que genera
    // aplanaObjeto() y no vamos a hacer un parseo completo, sino una extracción de los valores
    // entre comillas.
    matricula = cadenaJSON.substr(cadenaJSON.find("\"matricula\": \"") + 14);
    matricula = matricula.substr(0, matricula.find("\""));
    marca = cadenaJSON.substr(cadenaJSON.find("\"marca\": \"") + 10);
    marca = marca.substr(0, marca.find("\""));
    modelo = cadenaJSON.substr(cadenaJSON.find("\"modelo\": \"") + 11);
    modelo = modelo.substr(0, modelo.find("\""));
    std::string kilometrajeStr = cadenaJSON.substr(cadenaJSON.find("\"kilometraje\": ") + 15);
    kilometrajeStr = kilometrajeStr.substr(0, kilometrajeStr.find("}"));
    kilometraje = std::stol(kilometrajeStr);
}