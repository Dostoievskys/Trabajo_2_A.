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
        int tipo;
    public:
        Carrera();
        //Funciones para obtener
        int GetVacantes();
        std::vector<std::string> GetPostulantes();
        float GetUltimo();
        int GetTipo();
        //Funciones para agregar
        void SetVacantes(int);
        void SetPostulantes(std::string,int);
        void SetUltimo(float);
        void SetTipo(int);
};

#endif