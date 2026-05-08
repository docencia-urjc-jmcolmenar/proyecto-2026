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