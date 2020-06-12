#ifndef CARRERA_H
#define CARRERA_H

#include <iostream>
#include <string>
#include <vector>
struct Postulante{
        int rut, nem, lenguaje, mate, ciencias, ranking;
        float pond;
    };

class Carrera{
    private:
        int vacantes;
        int actualvac;
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
        void llenarPost(Postulante );
        void SetVacantes(int);
        void SetActVacantes(int);
        void SetPostulantes(Postulante, int);
        void SetUltimo(float);
        void SetPonderacion(int,int,int,int,int);
};

#endif
