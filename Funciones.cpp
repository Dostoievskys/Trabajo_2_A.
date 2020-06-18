#include <iostream>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include "Carrera.h"
#include "Funciones.h"

void participantes(){
    std::cout << std::endl << "=== Integrantes: ===" << std::endl;
    std::cout << std::endl << "Braulio Argandoña"  << std::endl;
    std::cout << std::endl << "Fanny Rivero"  << std::endl;
    std::cout << std::endl << "Jennifer Portiño"  << std::endl;
}

void LlenarDatos(Carrera Ca[]){//Datos de las carreras
    //Administracion Publica
    Carrera AdmiP;
    AdmiP.SetVacantes(35);
    AdmiP.SetUltimo(513);
    AdmiP.SetTipo(1);
    Ca[0]=AdmiP;
    //Bibliotecnologia y documentacion
    Carrera biblio;
    biblio.SetVacantes(35);
    biblio.SetUltimo(453.6);
    biblio.SetTipo(2);
    Ca[1]=biblio;
    //Contador publico y auditor
    Carrera cont;
    cont.SetVacantes(80);
    cont.SetUltimo(452.2);
    cont.SetTipo(3);
    Ca[2]=cont;
    //Ing Comercial
    Carrera Cmcial;
    Cmcial.SetVacantes(125);
    Cmcial.SetUltimo(496.9);
    Cmcial.SetTipo(4);
    Ca[3]=Cmcial;
    //Ing en administracion agroindustrial
    Carrera Agro;
    Agro.SetVacantes(30);
    Agro.SetUltimo(461.8);
    Agro.SetTipo(4);
    Ca[4]=Agro;
    //Ing en Comercio internacional
    Carrera inter;
    inter.SetVacantes(90);
    inter.SetUltimo(458.8);
    inter.SetTipo(4);
    Ca[5]=inter;
    //Ing en gestion turistica
    Carrera turis;
    turis.SetVacantes(25);
    turis.SetUltimo(448.1);
    turis.SetTipo(4);
    Ca[6]=turis;
    //Arquitectura
    Carrera Arqui;
    Arqui.SetVacantes(100);
    Arqui.SetUltimo(527.4);
    Arqui.SetTipo(5);
    Ca[7]=Arqui;
    //Ing en construccion
    Carrera Contru;
    Contru.SetVacantes(100);
    Contru.SetUltimo(476.95);
    Contru.SetTipo(6);
    Ca[8]=Contru;
    //Ing civil en obras civiles
    Carrera Civil;
    Civil.SetVacantes(100);
    Civil.SetUltimo(476.1);
    Civil.SetTipo(6);
    Ca[9]=Civil;
    //Ing civil prevencion de riesgos
    Carrera Prev;
    Prev.SetVacantes(30);
    Prev.SetUltimo(462.85);
    Prev.SetTipo(7);
    Ca[10]=Prev;
    //Ing en biotecnologia 
    Carrera Biotec;
    Biotec.SetVacantes(60);
    Biotec.SetUltimo(540.9);
    Biotec.SetTipo(8);
    Ca[11]=Biotec;
    //Ing industria alimentaria
    Carrera Alim;
    Alim.SetVacantes(30);
    Alim.SetUltimo(464.9);
    Alim.SetTipo(8);
    Ca[12]=Alim;
    //Quimica industrial
    Carrera Quin;
    Quin.SetVacantes(40);
    Quin.SetUltimo(472);
    Quin.SetTipo(9);
    Ca[13]=Quin;
    //Ing en Quimica
    Carrera Quim;
    Quim.SetVacantes(80);
    Quim.SetUltimo(451.7);
    Quim.SetTipo(9);
    Ca[14]=Quim;
    //Diseño en comunicacion visual
    Carrera Visu;
    Visu.SetVacantes(100);
    Visu.SetUltimo(440.2);
    Visu.SetTipo(10);
    Ca[15]=Visu;
    //Diseño industrial
    Carrera disin;
    disin.SetVacantes(65);
    disin.SetUltimo(439.9);
    disin.SetTipo(10);
    Ca[16]=disin;
    //Trabajo Social
    Carrera Social;
    Social.SetVacantes(95);
    Social.SetUltimo(510.5);
    Social.SetTipo(11);
    Ca[17]=Social;
    //Ing Civil Ciencias de Datos 
    Carrera Datos;
    Datos.SetVacantes(60);
    Datos.SetUltimo(539.35);
    Datos.SetTipo(12);
    Ca[18]=Datos;
    //Ing Civil computacion
    Carrera Compu;
    Compu.SetVacantes(130);
    Compu.SetUltimo(539.35);
    Compu.SetTipo(12);
    Ca[19]=Compu;
    //Ing Informatica
    Carrera Info;
    Info.SetVacantes(105);
    Info.SetUltimo(507.75);
    Info.SetTipo(12);
    Ca[20]=Info;
    //Ing Civil Mecanica
    Carrera Meca;
    Meca.SetVacantes(90);
    Meca.SetUltimo(506.8);
    Meca.SetTipo(12);
    Ca[21]=Meca;
    //Bachillerato ciencias de la ingenieria 
    Carrera Csing;
    Csing.SetVacantes(25);
    Csing.SetUltimo(504.25);
    Csing.SetTipo(12);
    Ca[22]=Csing;
    //Ing civil industrial
    Carrera cindus;
    cindus.SetVacantes(200);
    cindus.SetUltimo(500.85);
    cindus.SetTipo(12);
    Ca[23]=cindus;
    //Ing Civil electronica
    Carrera elec;
    elec.SetVacantes(80);
    elec.SetUltimo(500.65);
    elec.SetTipo(12);
    Ca[24]=elec;
    //Dibujante proyectista
    Carrera Dibu;
    Dibu.SetVacantes(25);
    Dibu.SetUltimo(496.45);
    Dibu.SetTipo(12);
    Ca[25]=Dibu;
    //Ing en geomensura
    Carrera Geo;
    Geo.SetVacantes(60);
    Geo.SetUltimo(487.85);
    Geo.SetTipo(12);
    Ca[26]=Geo;
    //Ing industrial
    Carrera indus;
    indus.SetVacantes(60);
    indus.SetUltimo(476.25);
    indus.SetTipo(12);
    Ca[27]=indus;
}

void Ponderacion(Postulante P, tip A[12]){
    (A[0]).pondera=(P.nem*15+P.ranking*20+P.lenguaje*30+P.mate*25+P.ciencias*10)/100;
    (A[1]).pondera=(P.nem*20+P.ranking*20+P.lenguaje*40+P.mate*10+P.ciencias*10)/100;
    (A[2]).pondera=(P.nem*20+P.ranking*20+P.lenguaje*30+P.mate*15+P.ciencias*15)/100;
    (A[3]).pondera=(P.nem*10+P.ranking*20+P.lenguaje*30+P.mate*30+P.ciencias*10)/100;
    (A[4]).pondera=(P.nem*15+P.ranking*25+P.lenguaje*20+P.mate*20+P.ciencias*20)/100;
    (A[5]).pondera=(P.nem*20+P.ranking*20+P.lenguaje*15+P.mate*35+P.ciencias*10)/100;
    (A[6]).pondera=(P.nem*15+P.ranking*35+P.lenguaje*20+P.mate*20+P.ciencias*10)/100;
    (A[7]).pondera=(P.nem*15+P.ranking*25+P.lenguaje*20+P.mate*30+P.ciencias*10)/100;
    (A[8]).pondera=(P.nem*10+P.ranking*25+P.lenguaje*15+P.mate*30+P.ciencias*20)/100;
    (A[9]).pondera=(P.nem*10+P.ranking*40+P.lenguaje*30+P.mate*10+P.ciencias*10)/100;
    (A[10]).pondera=(P.nem*20+P.ranking*30+P.lenguaje*20+P.mate*10+P.ciencias*20)/100;
    (A[11]).pondera=(P.nem*10+P.ranking*25+P.lenguaje*20+P.mate*35+P.ciencias*10)/100;
    (A[0]).tipo=1;
    (A[1]).tipo=2;
    (A[2]).tipo=3;
    (A[3]).tipo=4;
    (A[4]).tipo=5;
    (A[5]).tipo=6;
    (A[6]).tipo=7;
    (A[7]).tipo=8;
    (A[8]).tipo=9;
    (A[9]).tipo=10;
    (A[10]).tipo=11;
    (A[11]).tipo=12;
    quicksort_vect((A),0,11);
}

void quicksort_vect(tip x[12],int first,int last){
    tip temp;
    int j,i,pivot;

    if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i].pondera<=x[pivot].pondera&&i<last){
                 i++;}
             while(x[j].pondera>x[pivot].pondera){
                 j--;}
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort_vect(x,first,j-1);
         quicksort_vect(x,j+1,last);
    }
}

std::vector<int> obtenerlinea(std::string fila){ 
    std::vector<int> arreglo;                           
    std::stringstream ss(fila);                  
    std::string item;
    while (std::getline(ss, item, ';')) {
        int valor = atoi(item.c_str());
        arreglo.push_back(valor);
    }
    return arreglo;
}

void quicksort(Carrera (*x),int prim,int ult){
    Postulante aux;
    int j,i,pivot; 
    if(prim<ult){
        pivot=prim;
        i=prim;
        j=ult;
        while(i<j){
            while((*x).GetPostulantes(i).pond >= (*x).GetPostulantes(pivot).pond && i < ult){
                i++;
            }
            while((*x).GetPostulantes(j).pond <(*x).GetPostulantes(pivot).pond){
                j--;}
            if(i<j){
                aux=(*x).GetPostulantes(i);
                (*x).SetPostulantes((*x).GetPostulantes(j), i);
                (*x).SetPostulantes(aux, j);
            }
        }
        aux=(*x).GetPostulantes(pivot);
        (*x).SetPostulantes((*x).GetPostulantes(j), pivot);
        (*x).SetPostulantes(aux, j);
        quicksort(&(*x),prim,j-1);
        quicksort(&(*x),j+1,ult);
    }
}

void entraste(Carrera Ca[], std::vector<Postulante> P){
    for(int i=0; i<int(P.size()); i++){
        int prom=P[i].lenguaje+P[i].mate;
        prom=prom/2;
        if(prom>=450){
            tip ponder[12];
            Ponderacion(P[i], ponder);
            for(int t=11; t>8; t--){
                if(P[i].entro==false){
                    for(int j=12; j>0; j--){
                        if(ponder[t].tipo==j){
                            if(j==1){
                                llenarCarr(&Ca[0], P, i, ponder[t].pondera);
                                j=0;
                            }
                            if(j==2){
                                llenarCarr(&Ca[1], P, i, ponder[t].pondera);
                                j=0;
                            }
                            if(j==3){
                                llenarCarr(&Ca[2], P, i, ponder[t].pondera);
                                j=0;
                            }
                            if(j==5){
                                llenarCarr(&Ca[7], P, i, ponder[t].pondera);
                                j=0;
                            }
                            if(j==7){
                                llenarCarr(&Ca[10], P, i, ponder[t].pondera);
                                j=0;
                            }
                            if(j==11){
                                llenarCarr(&Ca[17], P, i, ponder[t].pondera);
                                j=0;
                            }//REVISAR J==12, EL RESTO CREO QUE FUNCIONA BIEN
                            if(j==4){//3,4,5,6
                                for(int h=3; h<7;h++){
                                    if(P[i].entro==false){
                                        llenarCarr(&Ca[h], P, i, ponder[t].pondera);
                                    }
                                }
                                j=0;
                            }
                            if(j==6){//8,9
                                for(int h=8; h<10;h++){
                                    if(P[i].entro==false){
                                        llenarCarr(&Ca[h], P, i, ponder[t].pondera);
                                    }
                                }
                                j=0;
                            }
                            if(j==8){//11,12
                                for(int h=11; h<13;h++){
                                    if(P[i].entro==false){
                                        llenarCarr(&Ca[h], P, i, ponder[t].pondera);
                                    }
                                }
                                j=0;
                            }
                            if(j==9){//13,14
                                for(int h=13; h<15;h++){
                                    if(P[i].entro==false){
                                        llenarCarr(&Ca[h], P, i, ponder[t].pondera);
                                    }
                                }
                                j=0;
                            }
                            if(j==10){//15,16
                                for(int h=15; h<17;h++){
                                    if(P[i].entro==false){
                                        llenarCarr(&Ca[h], P, i, ponder[t].pondera);
                                    }
                                }
                                j=0;
                            }
                            if(j==12){//18,27
                                for(int h=18; h<28;h++){
                                    if(P[i].entro==false){
                                        llenarCarr(&Ca[h], P, i, ponder[t].pondera);
                                    }
                                }
                                j=0;
                            }
                        }
                    }
                }
            }
        }
    }
}
//i=Posicion Postulante
//j=Posicion Carrera
//pon=ponder.pondera

void llenarCarr(Carrera (*Ca), std::vector<Postulante> &P, int i, float pon){
    if(pon > (*Ca).GetUltimo()){
        SetPond((&P[i]),pon);
        if((*Ca).GetVacantes()>0){
            (*Ca).llenarPost(P[i]);
            (*Ca).SetActVacantes(((*Ca).GetActVacantes()+1));
            (*Ca).SetVacantes(((*Ca).GetVacantes()-1));
            (P[i]).entro=true;
            if((*Ca).GetVacantes()==0){
                quicksort((&(*Ca)),0,(*Ca).GetActVacantes()-1);
                (*Ca).SetUltimo((*Ca).GetPostulantes((*Ca).GetActVacantes()-1).pond);
            }
        }else{
            Postulante aux=(*Ca).GetPostulantes((*Ca).GetActVacantes()-1);
            aux.entro=false;
            (*Ca).SetPostulantes(P[i],(*Ca).GetActVacantes()-1);
            quicksort((&(*Ca)),0,(*Ca).GetActVacantes()-1);
            (*Ca).SetUltimo((*Ca).GetPostulantes((*Ca).GetActVacantes()-1).pond);
            P.erase(P.begin()+i);
            P.push_back(aux);
        }
    }
}

Postulante llenarPostulante(std::vector<int> persona){
    Postulante A;
    A.rut=persona[0];
    A.nem=persona[1];
    A.ranking=persona[2];
    A.lenguaje=persona[3];
    A.mate=persona[4];
    if(persona[5]>persona[6]){
        A.ciencias=persona[5];
    }else{
        A.ciencias=persona[6];
    }
    A.pond=0;
    A.entro=false;
    return A;
}

void SetPond(Postulante *A, float ponde){
    (*A).pond=ponde;
}

bool ValidarRut(std::string rut){
  if(rut.size()==8){
    return true;
  }
  else{
    return false;
  }
}