#include <iostream>

#include "Cliente.h"
#include "Coche.h"
#include "Fecha.h"
#include "Moto.h"
#include "Persistencia.h"
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

    // Prueba aplanado
    Coche c3 = Coche(c1.aplanaObjeto());
    std::cout << std::endl << "Ficha del coche Ford aplanado y reconstruido" << std::endl;
    std::cout << c3.obtenerFicha() << std::endl;


    // Guarda los coches en fichero
    Persistencia::guardaCoche(c1);
    Persistencia::guardaCoche(c2);

    // Muestra los coches almacenados
    std::cout << std::endl << "Coches almacenados en fichero:" << std::endl;
    // El siguiente bucle itera sobre el vector directamente
    for (Coche c : Persistencia::cargaCoches()) {
        std::cout << c.obtenerFicha() << std::endl << std::endl;
    }
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
    Fecha fechaCarnet(24,03,2026);
    cl2.setFechaCarnet(fechaCarnet);

    // Muestra datos usando getters:
    std::cout << cl1.getNombre() << std::endl;
    std::cout << cl1.getCorreoElectronico() << std::endl;
    std::cout << cl1.getTipoCarnet() << std::endl << std::endl;

    std::cout << cl2.getNombre() << std::endl;
    std::cout << cl2.getCorreoElectronico() << std::endl;
    std::cout << cl2.getTipoCarnet() << std::endl;
    std::cout << "Antigüedad (días) de carnet: " << cl2.antiguedadCarnet() << std::endl;
}


void pruebaFecha() {
    Fecha fecha (15,12,2025);
    fecha.setDia(45);
    Fecha fechaIncorrecta(12,122,90);
    // Corrección de fecha incorrecta
    fechaIncorrecta.setDia(15);
    fechaIncorrecta.setMes(12);
    fechaIncorrecta.setAnio(2024);
    std::cout << std::endl << "--- Prueba diferencia fechas" << std::endl;
    std::cout << fecha.diferenciaCon(fechaIncorrecta) << std::endl;

    Fecha fechaActual;
    std::cout << "Fecha actual: " << fechaActual.toString() << std::endl;
}

int main() {

    // Prueba coches
    pruebaClaseCoche();

    // Prueba motos
    pruebaClaseMoto();

    // Prueba cliente
    pruebaClaseCliente();

    // Prueba fecha
    pruebaFecha();

    return 0;
}