//
// @Author José Manuel Colmenar
//

#ifndef COCHE_H
#define COCHE_H
#include <string>


class Coche {
private:
    std::string matricula;
    std::string marca;
    std::string modelo;
    long kilometraje;
public:
    // Constructores
    Coche() {}
    Coche(std::string matricula, std::string marca, std::string modelo);
    // Getters (definición inline)
    std::string getMatricula() { return matricula; }
    std::string getMarca() { return marca; }
    std::string getModelo() { return modelo; }
    long getKilometraje() { return kilometraje; }
    // Setters
    void setMatricula(std::string matricula);
    void setMarca(std::string marca);
    void setModelo(std::string modelo);
    void setKilometraje(long kilometraje);
    // Otros métodos
    std::string obtenerFicha();
};



#endif //COCHE_H
