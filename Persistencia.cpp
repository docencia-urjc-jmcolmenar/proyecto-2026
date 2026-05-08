//
// Created by José Manuel Colmenar on 24/4/26.
//

#include "Persistencia.h"
#include "Moto.h"

#include <fstream>
#include <iostream>
#include <ostream>

// Inicialización del valor de la constante
const std::string Persistencia::nombreFichero = "datos.txt";

bool Persistencia::guardaCoche(Coche coche) {
    // Apertura de fichero de texto
    std::ofstream fichero(nombreFichero, std::ios::app); // Abrir en modo append para no sobrescribir
    if (!fichero.is_open()) {
        std::cerr << "Error al abrir el fichero de texto." << std::endl;
        return false;
    }

    // Lo más sencillo es delegar en Coche su parseo

    // Escribe el coche en el fichero
    fichero << coche.aplanaObjeto() << std::endl;

    fichero.close();
    return true;
}

std::vector<Coche> Persistencia::cargaCoches() {
    std::vector<Coche> coches;
    std::ifstream fichero(nombreFichero);
    if (!fichero.is_open()) {
        std::cerr << "Error al abrir el fichero de texto." << std::endl;
        return coches; // Devuelve un vector vacío
    }

    std::string linea;
    while (std::getline(fichero, linea)) {
        Coche coche(linea);
        coches.push_back(coche);
    }

    fichero.close();
    return coches;
}

bool Persistencia::guardaVehiculo(Vehiculo *v) {
    std::ofstream fichero(nombreFichero, std::ios::app); // Abrir en modo append para no sobrescribir
    if (!fichero.is_open()) {
        std::cerr << "Error al abrir el fichero de texto." << std::endl;
        return false;
    }

    // Escribe el vehículo en el fichero
    fichero << v->getTipoVehiculo() << ";" << v->aplanaObjeto() << std::endl;

    fichero.close();
    return true;
}

std::vector<Vehiculo*> Persistencia::cargaVehiculos() {
    std::vector<Vehiculo*> vehiculos;
    std::ifstream fichero(nombreFichero);
    if (!fichero.is_open()) {
        std::cerr << "Error al abrir el fichero de texto." << std::endl;
        return vehiculos; // Devuelve un vector vacío
    }

    std::string linea;
    while (std::getline(fichero, linea)) {
        // Separar el tipo de vehículo y el JSON
        size_t pos = linea.find(';');
        if (pos != std::string::npos) {
            std::string tipo = linea.substr(0, pos);
            std::string json = linea.substr(pos + 1);

            // Estos objetos se crean para consultar "tipoVehiculo" SIN usar constantes aquí.
            Coche cocheVacio;
            Moto motoVacia;
            if (tipo == cocheVacio.getTipoVehiculo()) {
                // Se guarda el puntero al nuevo objeto creado
                vehiculos.push_back(new Coche(json));
            } else if (tipo == motoVacia.getTipoVehiculo()) {
                // Se guarda el puntero al nuevo objeto creado
                vehiculos.push_back(new Moto(json));
            }
        }
    }

    fichero.close();
    return vehiculos;
}