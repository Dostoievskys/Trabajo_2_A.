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
Postulante Carrera::GetPostulantes(int i){
    return P[i];
}
float Carrera::GetUltimo(){
    return ultimo;
}
std::vector<int> Carrera::GetPonderacion(){
    return ponderacion;
}
//Funciones para agregar
void Carrera::SetVacantes(int v){
    vacantes = v;
}
void Carrera::SetPostulantes(int rut, float pond, int i){
    Postulante A;
    A.pond=pond;
    A.rut=rut;
    P.at(i)=A;
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
