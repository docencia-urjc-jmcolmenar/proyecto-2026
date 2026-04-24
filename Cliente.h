//
// @Author José Manuel Colmenar
//

#ifndef PROYECTO_2026_CLIENTE_H
#define PROYECTO_2026_CLIENTE_H
#include <string>

#include "Fecha.h"


class Cliente {
private:
    std::string nombre;
    std::string correoElectronico;
    std::string tipoCarnet;
    Fecha fechaNacimiento;
    Fecha fechaObtencionCarnet;
public:
    // Constructores
    Cliente() {}
    Cliente(std::string nombre, std::string correoElectronico, std::string tipoCarne);
    // Getters and setters
    std::string getNombre() { return nombre; }
    std::string getCorreoElectronico() { return correoElectronico; }
    std::string getTipoCarnet() { return tipoCarnet; }
    Fecha getFechaNacimiento() { return fechaNacimiento; }
    Fecha getFechaCarnet() { return fechaObtencionCarnet; }
    void setNombre(std::string nombre);
    void setCorreoElectronico(std::string correoElectronico);
    void setTipoCarnet(std::string tipoCarnet);
    void setFechaNacimiento(Fecha fechaNacimiento);
    void setFechaCarnet(Fecha fechaCarnet);
    // Otros métodos
    int antiguedadCarnet();
};



#endif //PROYECTO_2026_CLIENTE_H
