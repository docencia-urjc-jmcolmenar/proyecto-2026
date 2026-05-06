//
// Created by José Manuel Colmenar on 6/5/26.
//

#ifndef PROYECTO_2026_VEHICULO_H
#define PROYECTO_2026_VEHICULO_H
#include <string>


class Vehiculo {
// Los atributos se hacen protegidos para tener acceso en clases derivadas
protected:
    std::string matricula;
    std::string marca;
    std::string modelo;
    long kilometraje;
public:
    /* Constructor sin parámetros es necesario porque lo invocan las clases base
     * que no invocan a un constructor explícitamente. */
    Vehiculo() {}
    // Constructor con parámetros.
    Vehiculo(std::string matricula, std::string marca, std::string modelo);
    // Getters (definición inline)
    std::string getMatricula() { return matricula; }
    std::string getMarca() { return marca; }
    std::string getModelo() { return modelo; }
    long getKilometraje() { return kilometraje; }
    // Setters (definición inline)
    void setMatricula(std::string matricula) {
        this->matricula = matricula;
    }
    void setMarca(std::string marca) {
        this->marca = marca;
    }
    void setModelo(std::string modelo) {
        this->modelo = modelo;
    }
    void setKilometraje(long kilometraje) {
        this->kilometraje = kilometraje;
    }
    // Otros métodos
    std::string obtenerFicha();
};



#endif //PROYECTO_2026_VEHICULO_H
