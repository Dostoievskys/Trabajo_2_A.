#include <iostream>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include "Carrera.h"
#include "Funciones.h"

int main(int argc, char** argv){
    std::vector<Postulante> P;
    if(argc > 1){
        std::string op = argv[1];
        std::vector<Carrera> Ca;
        LlenarDatos(Ca);
        if(op == "1" && argc == 4){
            std::string archivo(argv[2]);
            std::ifstream lectura(archivo);
            std::ofstream escritura("biotecnologia.txt");
            if (lectura) {
                for (std::string linea; getline(lectura,linea) ; ) {
                    std::vector<int> persona = obtenerlinea(linea);
                    //entraste(persona,Ca,P);
                    //persona.clear();
                }
                for (int i=0; i!=P.size(); i++){
                    //entraste(vectorint(P[i]),Ca,P);
                }

                for(int j=0; j < Ca[0].GetActVacantes();j++){ //Creamos el archivo ordenado
                    //std::string salida = std::to_string(Ca[0].GetPostulantes(j).rut) + ";" + std::to_string(Ca[0].GetPostulantes(j).pond);
                    //escritura << salida << std::endl;
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