//
// Created by José Manuel Colmenar on 24/4/26.
//

#ifndef PROYECTO_2026_PERSISTENCIA_H
#define PROYECTO_2026_PERSISTENCIA_H
#include <string>
#include "Coche.h"

class Persistencia {
private:
    static const std::string nombreFichero;
public:
    static bool guardaCoche(Coche c);
};



#endif //PROYECTO_2026_PERSISTENCIA_H
