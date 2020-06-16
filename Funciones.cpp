#include <iostream>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include "Carrera.h"
#include "Funciones.h"

using namespace std;

void participantes(){
    std::cout << std::endl << "=== Integrantes: ===" << std::endl;
    std::cout << std::endl << "Braulio Argandoña"  << std::endl;
    std::cout << std::endl << "Fanny Rivero"  << std::endl;
    std::cout << std::endl << "Jennifer Portiño"  << std::endl;
}

std::vector<Carrera> LlenarDatos(){//Datos de las carreras
    std::vector<Carrera> Ca;
    //Ing en biotecnologia 
    Carrera Biotec; 
    Biotec.SetVacantes(60);
    Biotec.SetUltimo(540.9);
    Biotec.SetTipo(8);
    Ca.push_back(Biotec);
    //Ing Civil computacion
    Carrera Compu;
    Compu.SetVacantes(130);
    Compu.SetUltimo(539.35);
    Compu.SetTipo(12);
    Ca.push_back(Compu);
    //Ing Civil Ciencias de Datos 
    Carrera Datos;
    Datos.SetVacantes(60);
    Datos.SetUltimo(539.35);
    Datos.SetTipo(12);
    Ca.push_back(Datos);
    //Arquitectura
    Carrera Arqui;
    Arqui.SetVacantes(100);
    Arqui.SetUltimo(527.4);
    Arqui.SetTipo(5);
    Ca.push_back(Arqui);
    //Administracion Publica
    Carrera AdmiP;
    AdmiP.SetVacantes(35);
    AdmiP.SetUltimo(513);
    AdmiP.SetTipo(1);
    Ca.push_back(AdmiP);
    //Trabajo Social
    Carrera Social;
    Social.SetVacantes(95);
    Social.SetUltimo(510.5);
    Social.SetTipo(11);
    Ca.push_back(Social);
    //Ing Informatica
    Carrera Info;
    Info.SetVacantes(105);
    Info.SetUltimo(507.75);
    Info.SetTipo(12);
    Ca.push_back(Info);
    //Ing Civil Mecanica
    Carrera Meca;
    Meca.SetVacantes(90);
    Meca.SetUltimo(506.8);
    Meca.SetTipo(12);
    Ca.push_back(Meca);
    //Bachillerato ciencias de la ingenieria 
    Carrera Csing;
    Csing.SetVacantes(25);
    Csing.SetUltimo(504.25);
    Csing.SetTipo(12);
    Ca.push_back(Csing);
    //Ing civil industrial
    Carrera cindus;
    cindus.SetVacantes(200);
    cindus.SetUltimo(500.85);
    cindus.SetTipo(12);
    Ca.push_back(cindus);
    //Ing Civil electronica
    Carrera elec;
    elec.SetVacantes(80);
    elec.SetUltimo(500.65);
    elec.SetTipo(12);
    Ca.push_back(elec);
    //Ing Comercial
    Carrera Cmcial;
    Cmcial.SetVacantes(125);
    Cmcial.SetUltimo(496.9);
    Cmcial.SetTipo(4);
    Ca.push_back(Cmcial);
    //Dibujante proyectista
    Carrera Dibu;
    Dibu.SetVacantes(25);
    Dibu.SetUltimo(496.45);
    Dibu.SetTipo(12);
    Ca.push_back(Dibu);
    //Ing en geomensura
    Carrera Geo;
    Geo.SetVacantes(60);
    Geo.SetUltimo(487.85);
    Geo.SetTipo(12);
    Ca.push_back(Geo);
    //Ing en construccion
    Carrera Contru;
    Contru.SetVacantes(100);
    Contru.SetUltimo(476.95);
    Contru.SetTipo(6);
    Ca.push_back(Contru);
    //Ing industrial
    Carrera indus;
    indus.SetVacantes(60);
    indus.SetUltimo(476.25);
    indus.SetTipo(12);
    Ca.push_back(indus);
    //Ing civil en obras civiles
    Carrera Civil;
    Civil.SetVacantes(100);
    Civil.SetUltimo(476.1);
    Civil.SetTipo(6);
    Ca.push_back(Civil);
    //Quimica industrial
    Carrera Quin;
    Quin.SetVacantes(40);
    Quin.SetUltimo(472);
    Quin.SetTipo(9);
    Ca.push_back(Quin);
    //Ing industria alimentaria
    Carrera Alim;
    Alim.SetVacantes(30);
    Alim.SetUltimo(464.9);
    Alim.SetTipo(8);
    Ca.push_back(Alim);
    //Ing civil prevencion de riesgos
    Carrera Prev;
    Prev.SetVacantes(30);
    Prev.SetUltimo(462.85);
    Prev.SetTipo(7);
    Ca.push_back(Prev);
    //Ing en administracion agroindustrial
    Carrera Agro;
    Agro.SetVacantes(30);
    Agro.SetUltimo(461.8);
    Agro.SetTipo(4);
    Ca.push_back(Agro);
    //Ing en Comercio internacional
    Carrera inter;
    inter.SetVacantes(90);
    inter.SetUltimo(458.8);
    inter.SetTipo(4);
    Ca.push_back(inter);
    //Bibliotecnologia y documentacion
    Carrera biblio;
    biblio.SetVacantes(35);
    biblio.SetUltimo(453.6);
    biblio.SetTipo(2);
    Ca.push_back(biblio);
    //Contador publico y auditor
    Carrera cont;
    cont.SetVacantes(80);
    cont.SetUltimo(452.2);
    cont.SetTipo(3);
    Ca.push_back(cont);
    //Ing en Quimica
    Carrera Quim;
    Quim.SetVacantes(80);
    Quim.SetUltimo(451.7);
    Quim.SetTipo(9);
    Ca.push_back(Quim);
    //Ing en gestion turistica
    Carrera turis;
    turis.SetVacantes(25);
    turis.SetUltimo(448.1);
    turis.SetTipo(4);
    Ca.push_back(turis);
    //Diseño en comunicacion visual
    Carrera Visu;
    Visu.SetVacantes(100);
    Visu.SetUltimo(440.2);
    Visu.SetTipo(10);
    Ca.push_back(Visu);
    //Diseño industrial
    Carrera disin;
    disin.SetVacantes(65);
    disin.SetUltimo(439.9);
    disin.SetTipo(10);
    Ca.push_back(disin);
    return Ca;
}

std::vector<int> obtenerlinea(std::string fila){ 
    vector<int> arreglo;                           
    std::stringstream ss(fila);                  
    std::string item;
    while (std::getline(ss, item, ';')) {
        int valor = atoi(item.c_str());
        arreglo.push_back(valor);
    }
    return arreglo;
}

float Ponderacion(Carrera C, std::vector<int> puntajes){//Funcion que saca la ponderacion
  float P;
  /**std::vector<int> Pond = C.GetPonderacion();
  P=(puntajes[5]*Pond[5])+(puntajes[1]*Pond[1])+(puntajes[2]*Pond[2])+(puntajes[3]*Pond[3])+(puntajes[4]*Pond[4]);
  P=P/100;
  return P;*/
}

bool ValidarRut(std::string rut){
  if(rut.size()==8){
    return true;
  }
  else{
    return false;
  }
}

bool Busqueda(std::string r, std::string arch){ //Recibe el rut y el nombre del archivo
    std::ifstream lec(arch);
    int cont=0; //variable para la linea
    if (lec) {
        for (std::string linea; getline(lec,linea) ; ){ //Lee la linea hasta el punto y coma
            cont = cont + 1; //Contador para la linea
            std::stringstream ss(linea); //La linea que esta leyendo 17424518;639.66667 -> ss
            std::string rut; //Variable para guardar el rut que estoy leyendo
            std::getline(ss, rut, ';'); //Lo que quiero separar, donde lo guardo, que lo separa
            if(r==rut){
                //Mostrar linea donde se encuentra, y el nombre del archivo donde se encontro
                std::cout<<"Se encontro el rut en: " << arch << std::endl;
                std::cout<<"Rut: "<<rut<<endl;
                std::cout<<"Posicion: "<<cont<<endl;//Linea donde esta el archivo
                return true;
            }
        }
    }
    return false;
}