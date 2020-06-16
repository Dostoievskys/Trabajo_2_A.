#include "Carrera.h"
#include <iostream>
#include <vector>

using namespace std;

Carrera::Carrera(){ //Constructor
}
//Funciones para obtener
int Carrera::GetVacantes(){
    return vacantes;
}
std::vector<std::string> Carrera::GetPostulantes(){
    return postulantes;
}
float Carrera::GetUltimo(){
    return ultimo;
}
int Carrera::GetTipo(){
    return tipo;
}
//Funciones para agregar
void Carrera::SetVacantes(int v){
    vacantes = v;
}
void Carrera::SetPostulantes(std::string p, int i){
    postulantes.at(i) = p;
}
void Carrera::SetUltimo(float U){
    ultimo = U;
}
void Carrera::SetTipo(int tip){
    tipo = tip;
}