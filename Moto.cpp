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