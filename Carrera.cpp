#include "Carrera.h"
#include <iostream>

using namespace std;

Carrera::Carrera(){ //Constructor
}
//Funciones para obtener
int Carrera::GetVacantes(){
    return vacantes;
}
string Carrera::GetPostulantes(){
    return *postulantes;
}
float Carrera::GetUltimo(){
    return ultimo;
}
float Carrera::GetId(){
    return id_pond;
}
int Carrera::GetPonderacion(){
    return *ponderacion;
}
//Funciones para agregar
void Carrera::SetVacantes(int v){
    vacantes = v;
}
void Carrera::SetPostulantes(string p, int i){
    postulantes[i] = p;
}
void Carrera::SetUltimo(float U){
    ultimo = U;
}
void Carrera::SetId(float I){
    id_pond = I;
}
void Carrera::SetPonderacion(int Nem, int Rank, int Leng, int Mat, int Cs){
    ponderacion[0]=Nem;
    ponderacion[1]=Rank;
    ponderacion[2]=Leng;
    ponderacion[3]=Mat;
    ponderacion[4]=Cs;
}
