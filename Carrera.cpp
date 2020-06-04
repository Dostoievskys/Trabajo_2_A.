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
int Carrera::GetActVacantes(){
    return actualvac;
}
Postulante Carrera::GetPostulantes(int i){
    return P[i];
}
float Carrera::GetUltimo(){
    return ultimo;
}
int Carrera::GetPonderacion(int i){
    return ponderacion[i];
}
//Funciones para agregar
void Carrera::SetVacantes(int v){
    vacantes = v;
}
void Carrera::SetActVacantes(int v){
    actualvac=v;
}
void Carrera::SetPostulantes(Postulante B, int i){
    P[i]=B;
}
void Carrera::SetUltimo(float U){
    ultimo = U;
}
void Carrera::SetPonderacion(int Nem, int Rank, int Leng, int Mat, int Cs){
    ponderacion.at(0)=Nem;
    ponderacion.at(1)=Rank;
    ponderacion.at(2)=Leng;
    ponderacion.at(3)=Mat;
    ponderacion.at(4)=Cs;
}
