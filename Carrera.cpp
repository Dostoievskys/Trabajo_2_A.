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
vector<string> Carrera::GetPostulantes(){
    return postulantes;
}
float Carrera::GetUltimo(){
    return ultimo;
}
float Carrera::GetId(){
    return id_pond;
}
vector<int> Carrera::GetPonderacion(){
    return ponderacion;
}
//Funciones para agregar
void Carrera::SetVacantes(int v){
    vacantes = v;
}
void Carrera::SetPostulantes(string p, int i){
    postulantes.at(i) = p;
}
void Carrera::SetUltimo(float U){
    ultimo = U;
}
void Carrera::SetId(float I){
    id_pond = I;
}
void Carrera::SetPonderacion(int Nem, int Rank, int Leng, int Mat, int Cs){
    ponderacion.at(0)=Nem;
    ponderacion.at(1)=Rank;
    ponderacion.at(2)=Leng;
    ponderacion.at(3)=Mat;
    ponderacion.at(4)=Cs;
}
