#include "Carrera.h"
#include <iostream>
#include <vector>

Carrera::Carrera(){ 
    actualvac=0; //Constructor
}
//Funciones para obtener
int Carrera::GetVacantes(){
    return vacantes;
}
int Carrera::GetActVacantes(){
    return actualvac;
}
Postulante Carrera::GetPostulantes(int i){
    return P[i];
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
void Carrera::SetActVacantes(int v){
    actualvac=v;
}
void Carrera::SetPostulantes(int i, int j){
    std::swap(P[i],P[j]);
}
void Carrera::llenarPost(Postulante B){
    P.push_back(B);
}
void Carrera::SetUltimo(float U){
    ultimo = U;
}
void Carrera::SetTipo(int tip){
    tipo=tip;
}
void Carrera::Reemplazo(Postulante A){
    P.pop_back();
    P.push_back(A);
}