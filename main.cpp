#include <iostream>

#include "Coche.h"
//
// @Author José Manuel Colmenar
//

// Código de prueba para dos objetos Coche
void pruebaClaseCoche() {
    // Construcción de objetos
    Coche c1("ABC123", "Ford", "Focus");
    Coche c2("XYZ789", "Chevrolet", "Camaro");

    // Modifica kilometraje
    c1.setKilometraje(125000);

    // Muestra fichas
    std::cout << c1.obtenerFicha() << std::endl;
    std::cout << c2.obtenerFicha() << std::endl;
}


int main() {
    // Prueba coches
    pruebaClaseCoche();

    return 0;
}