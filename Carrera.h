#ifndef CARRERA_H
#define CARRERA_H

#include <iostream>
#include <string>
#include <vector>

class Carrera{
    private:
        int vacantes;
        vector<string> postulantes;
        float ultimo;
        float id_pond;
        vector<int> ponderacion;
    public:
        Carrera();
        //Funciones para obtener
        int GetVacantes();
        vector<string> GetPostulantes();
        float GetUltimo();
        float GetId();
        vector<int> GetPonderacion();
        //Funciones para agregar
        void SetVacantes(int);
        void SetPostulantes(string,int);
        void SetUltimo(float);
        void SetId(float);
        void SetPonderacion(int,int,int,int,int);
};

#endif