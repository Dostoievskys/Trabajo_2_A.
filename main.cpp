#include <iostream>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include "Carrera.h"
#include "Funciones.h"

//Probar con ./dist/programa 1 ./archivos/puntajes.txt ./carreras/

int main(int argc, char** argv){
    //Arreglo con los codigos de las carreras
    std::string codigo[28] = {"21089.txt","21002.txt","21012.txt","21048.txt","21015.txt","21081.txt","21082.txt","21047.txt",
    "21032.txt","21074.txt","21087.txt","21073.txt","21039.txt","21083.txt","21080.txt","21024.txt","21023.txt","21043.txt",
    "21049.txt","21041.txt","21030.txt","21096.txt","21046.txt","21076.txt","21075.txt","21071.txt","21031.txt","21045.txt"};
    std::vector<Postulante> P; //Vector para postulantes
    std::string op = argv[1]; //Opcion que ingresa el usuario
    Carrera Ca[28]; //Arreglo con los datos de las carreras
    if(argc > 1){
        if(op == "1" && argc == 4){
            LlenarDatos(Ca);//Se llenan los datos de las carreras
            std::string arch(argv[2]); //el archivo que hay que leer
            std::ifstream lectura(arch); //Lectura
            std::string carpeta(argv[3]); //Carpeta donde hay que guardar los archivos que se crean
            if (lectura){ 
                std::vector<int> persona;
                for (std::string linea; getline(lectura,linea) ; ){ //Se obtiene la linea, se llena postulante y se añade al vector p
                    persona = obtenerlinea(linea);
                    Postulante A=llenarPostulante(persona);
                    P.push_back(A);
                    persona.clear();
                }
                entraste(Ca,P);

                for (int i=0; i<28;i++){
                    std::string rute(carpeta + "/" + codigo[i]);//Nombre archivo
                    std::ofstream crear(rute); //Creacion del archivo
                    for(int j=0; j < Ca[i].GetActVacantes();j++){ //Creamos el archivo ordenado
                        std::string salida = std::to_string(Ca[i].GetPostulantes(j).rut) + ";" + std::to_string(Ca[i].GetPostulantes(j).pond);
                        crear << salida << std::endl;
                    }
                }
            }

            std::cout << std::endl << "CORRE 1" << std::endl;
        }else{
            if(op == "2" && argc == 4){
                std::string rut = argv[2];
                if(ValidarRut(rut)==true){
                  //ACA EJECUTAR OPCION 2: BUSQUEDA POR RUT
                }else{
                  std::cout << std::endl << "RUT INVALIDO" << std::endl;
                }
                std::cout << std::endl << "CORRE 2" << std::endl;
            }else{
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
    }else{ //Se muestran participantes
            participantes();
        }
    return EXIT_SUCCESS;
}

