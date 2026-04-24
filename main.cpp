#include <iostream>

#include "Cliente.h"
#include "Coche.h"
#include "Moto.h"
#include "gtest/gtest.h"
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
TEST(ClaseCliente, DosObjetos) {

    Cliente cl1("Juan Pérez","juan@email.com","B");
    Cliente cl2("María Gómez","maria@email.com","A");

    ASSERT_EQ("Juan Pérez", cl1.getNombre());
    ASSERT_EQ("juan@email.com", cl1.getCorreoElectronico());
    ASSERT_EQ("B", cl1.getTipoCarnet());

    ASSERT_EQ("María Gómez", cl2.getNombre());
    ASSERT_EQ("maria@email.com", cl2.getCorreoElectronico());
    ASSERT_EQ("A", cl2.getTipoCarnet());
}

int runTests() {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}

int main() {

    runTests();

    // Prueba coches
    pruebaClaseCoche();

    // Prueba motos
    pruebaClaseMoto();

    return 0;
}
