#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <iostream>
#include <vector>

#include "Carrera.h"

typedef struct{
    float pondera;
    int tipo;
}tip;

void participantes();
void LlenarDatos(Carrera []);
std::vector<int> obtenerlinea(std::string fila);
void Ponderacion(Postulante , tip [12]);
/**
 * Funcion de Ordenamientos
*/
void quicksort(Carrera *,int,int);
void entraste(Carrera [], std::vector<Postulante>);
Postulante llenarPostulante(std::vector<int>);
void SetPond(Postulante *, float );
std::vector<int> vectorint(Postulante);
bool ValidarRut(std::string rut);
void quicksort_vect(tip [12],int, int);
void probando(Carrera []);
void llenarCarr(Carrera *, std::vector<Postulante> &, int, float);
bool Busqueda(std::string, std::string);

#endif