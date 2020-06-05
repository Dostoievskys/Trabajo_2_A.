#ifndef CARRERA_H
#define CARRERA_H

#include <iostream>
#include <string>
#include <vector>

class Carrera{
    private:
        int vacantes;
        std::vector<std::string> postulantes;
        float ultimo;
        std::vector<int> ponderacion;
    public:
        Carrera();
        //Funciones para obtener
        int GetVacantes();
        std::vector<std::string> GetPostulantes();
        float GetUltimo();
        std::vector<int> GetPonderacion();
        //Funciones para agregar
        void SetVacantes(int);
        void SetPostulantes(std::string,int);
        void SetUltimo(float);
        void SetPonderacion(int,int,int,int,int);
};

#endif