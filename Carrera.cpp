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
    P.at(i)=B;
}
void Carrera::llenarPost(Postulante B){
    P.push_back(B);
}
void Carrera::SetUltimo(float U){
    ultimo = U;
}
void Carrera::SetPonderacion(int Nem, int Rank, int Leng, int Mat, int Cs){
    ponderacion.push_back(Nem);
    ponderacion.push_back(Rank);
    ponderacion.push_back(Leng);
    ponderacion.push_back(Mat);
    ponderacion.push_back(Cs);
}