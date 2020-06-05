#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <iostream>
#include <vector>

#include "Carrera.h"

void participantes();
void LlenarDatos(std::vector<Carrera> *);
std::vector<int> obtenerlinea(std::string fila);
float Ponderacion(Carrera, std::vector<int>);
bool ValidarRut(std::string rut);
/**
 * Funcion de Ordenamiento
*/
void quicksort(Carrera,int,int);
void entraste(std::vector<int> , std::vector<Carrera> , std::vector<Postulante> &);
Postulante llenarPostulante(std::vector<int>, int pond);
std::vector<int> vectorint(Postulante);

#endif