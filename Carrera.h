#ifndef CARRERA_H
#define CARRERA_H

#include <iostream>
#include <string>
#include <vector>
#include "Funciones.h"

class Carrera{
    private:
        int vacantes;
        std::vector<Postulante> P; 
        float ultimo;
        std::vector<int> ponderacion;
    public:
        Carrera();
        //Funciones para obtener
        int GetVacantes();
        Postulante GetPostulantes(int);
        float GetUltimo();
        std::vector<int> GetPonderacion();
        //Funciones para agregar
        void SetVacantes(int);
        void SetPostulantes(int,float, int);
        void SetUltimo(float);
        void SetPonderacion(int,int,int,int,int);
};

#endif