//
// Created by José Manuel Colmenar on 24/4/26.
//

#ifndef PROYECTO_2026_PERSISTENCIA_H
#define PROYECTO_2026_PERSISTENCIA_H
#include <string>
#include <vector>
#include "Coche.h"

class Persistencia {
private:
    static const std::string nombreFichero;
public:
    static bool guardaCoche(Coche c);
    static std::vector<Coche> cargaCoches();
    static bool guardaVehiculo(Vehiculo *v);
    static std::vector<Vehiculo> cargaVehiculos();
};



#endif //PROYECTO_2026_PERSISTENCIA_H
