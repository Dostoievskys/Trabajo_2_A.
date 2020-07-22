#ifndef CARRERA_H
#define CARRERA_H

#include <iostream>
#include <string>
#include <vector>
/*
 * Estructura de cada postulante
*/
struct Postulante{
        int rut;
        float pond, nem, lenguaje, mate, ciencias, ranking;
        bool entro; //Estado de ingreso
    };

class Carrera{
    private:
        int vacantes;
        int actualvac;
        std::vector<Postulante> P;
        float ultimo;
        int tipo;
    public:
        Carrera();
        //Funciones para obtener
        int GetVacantes();
        int GetActVacantes();
        Postulante GetPostulantes(int);
        float GetUltimo();
        int GetTipo();
        //Funciones para agregar
        void SetVacantes(int);
        void SetActVacantes(int);
        void SetPostulantes(int,int); //Realiza un intercambio de postulantes
        void SetUltimo(float);
        void SetTipo(int);
        void llenarPost(Postulante ); //Agrega nuevo postulante al final
        void Reemplazo(Postulante); //Elimina el ultimo y agrega el nuevo postulante al final
};

#endif
