#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <iostream>
#include <vector>
#include "Carrera.h"

void participantes();
std::vector<Carrera> LlenarDatos();
std::vector<int> obtenerPuntajes(std::string fila);
float Ponderacion(Carrera C, std::vector<int> puntajes);
bool ValidarRut(std::string rut);
/**
 * Funcion de Ordenamiento
*/
void quicksort(Carrera ,float,float);

#endif