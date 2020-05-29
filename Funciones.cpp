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
    Biotec.SetPonderacion(15,25,20,30,10);
    Ca.push_back(Biotec);
    //Ing Civil computacion
    Carrera Compu;
    Compu.SetVacantes(130);
    Compu.SetUltimo(539.35);
    Compu.SetPonderacion(10,25,20,35,10);
    Ca.push_back(Compu);
    //Ing Civil Ciencias de Datos 
    Carrera Datos;
    Datos.SetVacantes(60);
    Datos.SetUltimo(539.35);
    Datos.SetPonderacion(10,25,20,35,10);
    Ca.push_back(Datos);
    //Arquitectura
    Carrera Arqui;
    Arqui.SetVacantes(100);
    Arqui.SetUltimo(527.4);
    Arqui.SetPonderacion(15,25,20,20,20);
    Ca.push_back(Arqui);
    //Administracion Publica
    Carrera AdmiP;
    AdmiP.SetVacantes(35);
    AdmiP.SetUltimo(513);
    AdmiP.SetPonderacion(15,20,30,25,10);
    Ca.push_back(AdmiP);
    //Trabajo Social
    Carrera Social;
    Social.SetVacantes(95);
    Social.SetUltimo(510.5);
    Social.SetPonderacion(20,30,20,10,20);
    Ca.push_back(Social);
    //Ing Informatica
    Carrera Info;
    Info.SetVacantes(105);
    Info.SetUltimo(507.75);
    Info.SetPonderacion(10,25,20,35,10);
    Ca.push_back(Info);
    //Ing Civil Mecanica
    Carrera Meca;
    Meca.SetVacantes(90);
    Meca.SetUltimo(506.8);
    Meca.SetPonderacion(10,25,20,35,10);
    Ca.push_back(Meca);
    //Bachillerato ciencias de la ingenieria 
    Carrera Csing;
    Csing.SetVacantes(25);
    Csing.SetUltimo(504.25);
    Csing.SetPonderacion(10,25,20,35,10);
    Ca.push_back(Csing);
    //Ing civil industrial
    Carrera cindus;
    cindus.SetVacantes(200);
    cindus.SetUltimo(500.85);
    cindus.SetPonderacion(10,25,20,35,10);
    Ca.push_back(cindus);
    //Ing Civil electronica
    Carrera elec;
    elec.SetVacantes(80);
    elec.SetUltimo(500.65);
    elec.SetPonderacion(10,25,20,35,10);
    Ca.push_back(elec);
    //Ing Comercial
    Carrera Cmcial;
    Cmcial.SetVacantes(125);
    Cmcial.SetUltimo(496.9);
    Cmcial.SetPonderacion(10,20,30,30,10);
    Ca.push_back(Cmcial);
    //Dibujante proyectista
    Carrera Dibu;
    Dibu.SetVacantes(25);
    Dibu.SetUltimo(496.45);
    Dibu.SetPonderacion(10,25,20,35,10);
    Ca.push_back(Dibu);
    //Ing en geomensura
    Carrera Geo;
    Geo.SetVacantes(60);
    Geo.SetUltimo(487.85);
    Geo.SetPonderacion(10,25,20,35,10);
    Ca.push_back(Geo);
    //Ing en construccion
    Carrera Contru;
    Contru.SetVacantes(100);
    Contru.SetUltimo(476.95);
    Contru.SetPonderacion(20,20,15,35,10);
    Ca.push_back(Contru);
    //Ing industrial
    Carrera indus;
    indus.SetVacantes(60);
    indus.SetUltimo(476.25);
    indus.SetPonderacion(10,25,20,35,10);
    Ca.push_back(indus);
    //Ing civil en obras civiles
    Carrera Civil;
    Civil.SetVacantes(100);
    Civil.SetUltimo(476.1);
    Civil.SetPonderacion(20,20,15,35,10);
    Ca.push_back(Civil);
    //Quimica industrial
    Carrera Quin;
    Quin.SetVacantes(40);
    Quin.SetUltimo(472);
    Quin.SetPonderacion(10,25,15,30,20);
    Ca.push_back(Quin);
    //Ing industria alimentaria
    Carrera Alim;
    Alim.SetVacantes(30);
    Alim.SetUltimo(464.9);
    Alim.SetPonderacion(15,25,20,30,10);
    Ca.push_back(Alim);
    //Ing civil prevencion de riesgos
    Carrera Prev;
    Prev.SetVacantes(30);
    Prev.SetUltimo(462.85);
    Prev.SetPonderacion(15,35,20,20,10);
    Ca.push_back(Prev);
    //Ing en administracion agroindustrial
    Carrera Agro;
    Agro.SetVacantes(30);
    Agro.SetUltimo(461.8);
    Agro.SetPonderacion(10,20,30,30,10);
    Ca.push_back(Agro);
    //Ing en Comercio internacional
    Carrera inter;
    inter.SetVacantes(90);
    inter.SetUltimo(458.8);
    inter.SetPonderacion(10,20,30,30,10);
    Ca.push_back(inter);
    //Bibliotecnologia y documentacion
    Carrera biblio;
    biblio.SetVacantes(35);
    biblio.SetUltimo(453.6);
    biblio.SetPonderacion(20,20,40,10,10);
    Ca.push_back(biblio);
    //Contador publico y auditor
    Carrera cont;
    cont.SetVacantes(80);
    cont.SetUltimo(452.2);
    cont.SetPonderacion(20,20,30,15,15);
    Ca.push_back(cont);
    //Ing en Quimica
    Carrera Quim;
    Quim.SetVacantes(80);
    Quim.SetUltimo(451.7);
    Quim.SetPonderacion(10,25,15,30,20);
    Ca.push_back(Quim);
    //Ing en gestion turistica
    Carrera turis;
    turis.SetVacantes(25);
    turis.SetUltimo(448.1);
    turis.SetPonderacion(10,20,30,30,10);
    Ca.push_back(turis);
    //Diseño en comunicacion visual
    Carrera Visu;
    Visu.SetVacantes(100);
    Visu.SetUltimo(440.2);
    Visu.SetPonderacion(10,40,30,10,10);
    Ca.push_back(Visu);
    //Diseño industrial
    Carrera disin;
    disin.SetVacantes(65);
    disin.SetUltimo(439.9);
    disin.SetPonderacion(10,40,30,10,10);
    Ca.push_back(disin);
    return Ca;
}

std::vector<int> obtenerPuntajes(std::string fila){
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
  vector<int> aux;
  aux = C.GetPonderacion();
  P=(puntajes[0]*aux.at(0))+(puntajes[1]*aux.at(1))+(puntajes[2]*aux.at(2))+(puntajes[3]*aux.at(2))+(puntajes[4]*aux.at(2));
  P=P/100;
  return P;
}

bool ValidarRut(std::string rut){
  if(rut.size()==8){
    return true;
  }
  else{
    return false;
  }
}
/**
 * Funcion de Ordenamiento
*/
void quicksort(Carrera x,float prim,float ult){ // quicksort(21041,0,vacantes-1);
    Estudiante aux; //Requiere clase Estudiante dentro de Clase Carrera
    int j,i,pivot;  //En teoria que postulantes[Vacantes] sea de tipo estudiante
                    //Estudiante: Atributos Pond y rut
                    //Funcion necesaria "GetPond" y "SetPond"
                    //El agregar al final en el fichero general seguirìa en pie, slds <3
    if(first<last){
         pivot=prim;
         i=prim;
         j=ult;
         while(i<j){
             while(x.GetPostulantes[i].GetPond <= x.GetPostulantes[pivot].GetPond &&i<ult){
                 i++;}
             while(x.GetPostulantes[j].GetPond>x.GetPostulantes[pivot].GetPond){
                 j--;}
             if(i<j){
                 aux=x.GetPostulantes[i];
                  x.SetPostulantes[i]=x.GetPostulantes[j];
                  x.SetPostulantes[j]=aux;
             }
         } 
         aux=x.GetPostulantes[pivot];
         x.SetPostulantes[pivot]=x.GetPostulantes[j];
         x.SetPostulantes[j]=aux;
         quicksort(x,prim,j-1);
         quicksort(x,j+1,ult);
    }
}