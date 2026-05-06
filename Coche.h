//
// @Author José Manuel Colmenar
//

#ifndef COCHE_H
#define COCHE_H
#include <string>

#include "Vehiculo.h"

// Hereda de vehículo
class Coche : public Vehiculo {
public:
    // Constructores
    Coche(std::string cadenaJSON);
    // Constructor con parámetros invoca al constructor de la clase base
    Coche(std::string matricula, std::string marca, std::string modelo) : Vehiculo(matricula, marca, modelo) {}
    // Otros métodos
    std::string aplanaObjeto();
};



#endif //COCHE_H
