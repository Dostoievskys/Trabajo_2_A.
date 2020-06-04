#ifndef CARRERA_H
#define CARRERA_H

#include <iostream>
#include <string>
#include <vector>
#include "Funciones.h"

class Carrera{
    private:
        int vacantes;
        int actualvac=0;
        std::vector<Postulante> P; 
        float ultimo;
        std::vector<int> ponderacion;
    public:
        Carrera();
        //Funciones para obtener
        int GetVacantes();
        int GetActVacantes();
        Postulante GetPostulantes(int);
        float GetUltimo();
        int GetPonderacion(int);
        //Funciones para agregar
        void SetVacantes(int);
        void SetActVacantes(int);
        void SetPostulantes(Postulante , int);
        void SetUltimo(float);
        void SetPonderacion(int,int,int,int,int);
};

#endif