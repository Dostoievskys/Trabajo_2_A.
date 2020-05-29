#ifndef CARRERA_H
#define CARRERA_H

#include <iostream>
#include <string>

class Carrera{
    private:
        int vacantes;
        string postulantes[];
        float ultimo;
        float id_pond;
        int ponderacion[5];
    public:
        Carrera();
        //Funciones para obtener
        int GetVacantes();
        string GetPostulantes();
        float GetUltimo();
        float GetId();
        int GetPonderacion();
        //Funciones para agregar
        void SetVacantes(int);
        void SetPostulantes(string,int);
        void SetUltimo(float);
        void SetId(float);
        void SetPonderacion(int,int,int,int,int);
};

#endif