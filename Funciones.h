#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <iostream>
#include <vector>
#include "Carrera.h"

typedef struct Postulante{
    int rut;
    int pond;
    int nem, lenguaje, mate, ciencias, ranking;
};

void participantes();
std::vector<Carrera> LlenarDatos();
std::vector<int> obtenerlinea(std::string fila);
float Ponderacion(Carrera C, std::vector<int> puntajes);
bool ValidarRut(std::string rut);
/**
 * Funcion de Ordenamiento
*/
//void quicksort(Carrera,int,int);
//void entraste(std::vector<int> , std::vector<Carrera> , std::vector<Postulante> &);
//void llenarPostulante(std::vector<int>, std::vector<Postulante> &);

#endif