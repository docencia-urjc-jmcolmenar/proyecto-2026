//
// @Author José Manuel Colmenar
//

#ifndef PROYECTO_2026_MOTO_H
#define PROYECTO_2026_MOTO_H
#include <string>

#include "Vehiculo.h"


class Moto : public Vehiculo {
private:
    int cilindrada;
public:
    // Constructor con parámetros invoca al constructor de la clase base
    Moto(std::string matricula, std::string marca, std::string modelo, int cilindrada) : Vehiculo(matricula, marca, modelo) {
        this->cilindrada = cilindrada;
    }
    // Getters (definición inline)
    int getCilindrada() { return cilindrada; }
    // Setters (definición inline)
    void setCilindrada(int cilindrada);
    // Redefinición de obtenerFicha para incluir cilindrada
    std::string obtenerFicha();
};



#endif //PROYECTO_2026_MOTO_H
