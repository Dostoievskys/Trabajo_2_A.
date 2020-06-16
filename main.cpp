#include <iostream>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include "Carrera.h"
#include "Funciones.h"

using namespace std;
/**
 * Escritura del archivo
 * codigocarrera.txt almacenado en la ubicacion especificada
*/
int main(int argc, char** argv){
    std::string text[28] = {"21073.txt","21041.txt","21049.txt","21047.txt","21089.txt","21043.txt","21030.txt","21096.txt",
    "21046.txt","21076.txt","21075.txt","21048.txt","21071.txt","21031.txt","21032.txt","21045.txt","21074.txt","21083.txt",
    "21039.txt","21087.txt","21015.txt","21081.txt","21002.txt","21012.txt","21080.txt","21082.txt","21024.txt","21023.txt"};
    if(argc > 1){
        std::string op = argv[1];
        if(op == "1" && argc == 4){ //argc = 4 o 3 (llamada;opcion;ubicacion;ubicacion)
            std::string archivo(argv[2]);
            std::ifstream lectura(archivo);
            std::ofstream Escribir(text[2]);
            /**Escritura de los .txt por carrera
            std::ofstream Biotec("21073.txt");//Ing. Biotecnologia
            std::ofstream Compu("21041.txt");//Ing. civil computacion
            std::ofstream CsDatos("21049.txt");//Ing. civil ciencias de datos
            std::ofstream Arqui("21047.txt");//Arquitectura
            std::ofstream AdmiP("21089.txt");//Administracion Publica
            std::ofstream Social("21043.txt");//Trabajo Social
            std::ofstream Info("21030.txt");//Ing. informatica
            std::ofstream Meca("21096.txt");//Ing. civil Mecanica
            std::ofstream CsIng("21046.txt");//Bachillerato Ciencias ingenieria
            std::ofstream CIndus("21076.txt");//Ing. civil industrial
            std::ofstream Elec("21075.txt");//Ing. civil electronica
            std::ofstream Cmrcial("21048.txt");//Ing. comercial
            std::ofstream Proyec("21071.txt");//Dibujante proyectista
            std::ofstream Geo("21031.txt");//Ing. geomensura
            std::ofstream Contru("21032.txt");//Ing. construccion 
            std::ofstream Indus("21045.txt");//Ing. Industrial
            std::ofstream Civil("21074.txt");//Ing. civil obras civiles
            std::ofstream Quim("21083.txt");//Quimica industrial
            std::ofstream Alim("21039.txt");//Ing. industria alimentaria 
            std::ofstream Preven("21087.txt");//Ing. civil prevencion de riesgos y medioambiente
            std::ofstream Agro("21015.txt");//Ing. administracion agroindustrial
            std::ofstream Inter("21081.txt");//Ing. comercio internacional
            std::ofstream Biblio("21002.txt");//Bibliotecnologia y documentacion
            std::ofstream Conta("21012.txt");//Contador publico y auditor
            std::ofstream IQuim("21080.txt");//Ing. Quimica
            std::ofstream Turis("21082.txt");//Ing. gestion turistica
            std::ofstream Visual("21024.txt");//Diseño comunicacion visual
            std::ofstream Dindus("21023.txt");//diseño industrial */
            //ACA EJECUTAR OPCION 1
            std::cout << std::endl << "CORRE 1" << std::endl;
        }
        else{
            if(op == "2" && argc == 4){
                std::string rut = argv[2];
                if(ValidarRut(rut)==true){
                    /**
                    * Busqueda de un rut
                    * Pregunta: [programa 2 14123123 ruta_de_archivos]
                    * [1]: Opcion 2
                    * [2]: Rut a buscar
                    * [3]: Ruta donde buscar
                    */
                    std::string carpeta(argv[3]); //La arpeta donde estan los archivos
                    bool Resultado;
                    for (int i=0; i<28;i++){
                        std::string rute(carpeta + "/" + text[i]);
                        Resultado = Busqueda(rut,rute);
                    }
                    if(Resultado == false){
                        cout<<"No se encontro el rut"<<std::endl;
                    }
                }
                else{
                  std::cout << std::endl << "RUT INVALIDO" << std::endl;
                }
                std::cout << std::endl << "CORRE 2" << std::endl;
            }
            else{ //Validacion de la entrada
                if(argc != 4){
                    if(op == "2" || op == "1"){
                        std::cout << std::endl << "Ingrese la cantidad correcta de datos" << std::endl;
                    }
                }
                if(op != "2" && op != "1"){
                            std::cout << std::endl << "OPCION INVALIDA" << std::endl;
                }      
            }
        }
    }
    else{ //Se muestran participantes
            participantes();
        }
    return EXIT_SUCCESS;
}