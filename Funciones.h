#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <iostream>
#include <vector>

#include "Carrera.h"

/*
 * Estructura que almacena una ponderacion y su tipo
 * Esto debido a que existen 12 posibles ponderaciones en el total de carreras
 * Se hizo necesario almacenar su ponderacion y a que tipo corresponde
*/

typedef struct{
    float pondera;
    int tipo;
}tip;


/*
 * Funcion que muestra los participantes
*/
void participantes();

/*
 * Funcion que llena los datos de las carreras
 * Recibe arreglo de carreras
*/
void LlenarDatos(Carrera []);

/*
 * Funcion que transforma linea de texto de datos en archivos enteros
 * Recibe linea string
 * Devuelve vector de enteros
*/
std::vector<int> obtenerlinea(std::string fila);

/*
 * Funcion que calcula las 12 posibles ponderaciones de cada postulante
 * Recibe 1 postulante y un arreglo de tipo tip que contienen tipo y ponderacion
 * Por cada Postulante existiran 12 ponderaciones
*/
void Ponderacion(Postulante , tip [12]);

/*
 * Funcion de Ordenamiento de tipo recursiva adaptada a los GET y SET de Carrera
 * Recibe la Carrera a ordenar, el primer dato y el ultimo
*/
void quicksort(Carrera &,int,int);

/*
 * Funcion que se encarga de filtrar la carrera correcta de cada postulante
 * Recibe el vector del total de carreras y el vector del total de postulantes
*/
void entraste(Carrera [], std::vector<Postulante>);

/*
 * Funcion que se encarga de llenar los datos de un postulante
 * desde el vector entero a un postulante
 * Recibe vector entero con sus datos provenientes del archivo
*/
Postulante llenarPostulante(std::vector<int>);

/*
 * Funcion que valida el rut la cantidad de digitos de un rut
 * Recibe rut
*/
bool ValidarRut(std::string rut);

/*
 * Funcion de Ordenamiento de tipo recursiva adaptada al arreglo TIP
 * tiene como objetivo ordenar las ponderaciones de mayor a menor de cada postulante segun su tipo
 * Recibe arreglo de ponderaciones con su tipo, el primero y el ultimo dato
*/
void quicksort_vect(tip [12],int, int);

/*
 * Funcion que se encarga de llenar una carrera y hacer el reemplazo en caso de
 * que la carrera se encuentre sin vacantes
 * Recibe una carrera a llenar, el vector del total de postulantes, postulante a ingresar
 * y un indice a modificar en caso de hacer el reemplazo 
*/
void llenarCarr(Carrera &, std::vector<Postulante> &,Postulante &, int &);

/*
 * Funcion que realiza la busqueda en archivos
 * Recibe el rut y el nombre del archivo
*/
bool Busqueda(std::string, std::string);

#endif