//
// @Author José Manuel Colmenar
//

#ifndef PROYECTO_2026_CLIENTE_H
#define PROYECTO_2026_CLIENTE_H
#include <string>


class Cliente {
private:
    std::string nombre;
    std::string correoElectronico;
    std::string tipoCarnet;
    // TODO: incluir fecha de nacimiento y fecha de obtención del carné
public:
    // Constructores
    Cliente() {}
    Cliente(std::string nombre, std::string correoElectronico, std::string tipoCarne);
    // Getters and setters
    std::string getNombre() { return nombre; }
    std::string getCorreoElectronico() { return correoElectronico; }
    std::string getTipoCarnet() { return tipoCarnet; }
    void setNombre(std::string nombre);
    void setCorreoElectronico(std::string correoElectronico);
    void setTipoCarnet(std::string tipoCarnet);
    // Otros métodos
    int antiguedadCarnet();
};



#endif //PROYECTO_2026_CLIENTE_H
