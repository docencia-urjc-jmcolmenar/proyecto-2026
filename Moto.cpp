//
// @Author José Manuel Colmenar
//

#include "Moto.h"

#include <ostream>

// Redefinición de obtenerFicha para incluir cilindrada
std::string Moto::obtenerFicha() {
    // Se invoca al método de la clase base y se concatena la cilindrada
    return Vehiculo::obtenerFicha() + "\nCilindrada: " + std::to_string(cilindrada);
}

std::string Moto::aplanaObjeto() {
    // Genera un string con un JSON que describe todos los atributos del coche:
    std::string json = "{";
    json += "\"matricula\": \"" + matricula + "\", ";
    json += "\"marca\": \"" + marca + "\", ";
    json += "\"modelo\": \"" + modelo + "\", ";
    json += "\"kilometraje\": " + std::to_string(kilometraje) + ", ";
    json += "\"cilindrada\": " + std::to_string(cilindrada);
    json += "}";
    return json;
}

Moto::Moto(std::string cadenaJSON) {
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
    kilometrajeStr = kilometrajeStr.substr(0, kilometrajeStr.find(","));
    kilometraje = std::stol(kilometrajeStr);
    std::string cilindradaStr = cadenaJSON.substr(cadenaJSON.find("\"cilindrada\": ") + 15);
    cilindradaStr = cilindradaStr.substr(0, cilindradaStr.find("}"));
    cilindrada = std::stoi(cilindradaStr);
}