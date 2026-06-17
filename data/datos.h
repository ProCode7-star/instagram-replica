#ifndef DATOS_H
#define DATOS_H

#include <string>

// Aquí están los datos base de tu sistema
struct Perfil {
    std::string nombre = "Hansel";
    int edad = 8;
    std::string grado = "3°A";
};

// Creamos una instancia de estos datos
Perfil usuario;

#endif
