#include <iostream>

#include "Cliente.h"
#include "Coche.h"
#include "Moto.h"
//
// @Author José Manuel Colmenar
//

// Código de prueba para dos objetos Coche
void pruebaClaseCoche() {
    std::cout << "--- Prueba de dos objetos Coche" << std::endl;

    // Construcción de objetos
    Coche c1("ABC123", "Ford", "Focus");
    Coche c2("XYZ789", "Chevrolet", "Camaro");

    // Modifica kilometraje
    c1.setKilometraje(125000);

    // Muestra fichas
    std::cout << c1.obtenerFicha() << std::endl << std::endl;
    std::cout << c2.obtenerFicha() << std::endl;
}

// Prueba de dos objetos Moto
void pruebaClaseMoto() {
    std::cout << std::endl << "--- Prueba de dos objetos Moto" << std::endl;

    // Construcción de objetos
    Moto m1("123ABC", "Honda", "CBR", 600);
    Moto m2("XYZ789", "Yamaha", "R10", 1000);

    // Modifica kilometraje
    m1.setKilometraje(1500);

    // Muestra fichas
    std::cout << m1.obtenerFicha() << std::endl << std::endl;
    std::cout << m2.obtenerFicha() << std::endl;
}

// Prueba de dos objetos Cliente
void pruebaClaseCliente() {
    std::cout << std::endl << "--- Prueba de dos objetos Cliente" << std::endl;

    // Construccion de objetos
    Cliente cl1("Juan Pérez","juan@email.com","B");
    Cliente cl2("María Gómez","maria@email.com","B");

    // Muestra datos usando getters:
    std::cout << cl1.getNombre() << std::endl;
    std::cout << cl1.getCorreoElectronico() << std::endl;
    std::cout << cl1.getTipoCarnet() << std::endl << std::endl;

    std::cout << cl2.getNombre() << std::endl;
    std::cout << cl2.getCorreoElectronico() << std::endl;
    std::cout << cl2.getTipoCarnet() << std::endl;
}

int main() {

    // Prueba coches
    pruebaClaseCoche();

    // Prueba motos
    pruebaClaseMoto();

    // Prueba cliente
    pruebaClaseCliente();

    return 0;
}