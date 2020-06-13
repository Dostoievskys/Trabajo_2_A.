#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <iostream>
#include <vector>
#include "Carrera.h"

void participantes();
std::vector<Carrera> LlenarDatos();
std::vector<int> obtenerlinea(std::string fila);
float Ponderacion(Carrera C, std::vector<int> puntajes);
bool ValidarRut(std::string rut);
bool Busqueda(std::string r, std::string arch);

#endif