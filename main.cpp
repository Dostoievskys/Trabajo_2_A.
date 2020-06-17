#include <iostream>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include "Carrera.h"
#include "Funciones.h"

//Probar con ./dist/programa 1 ./archivos/puntajes.txt ./archivos/

int main(int argc, char** argv){
    std::vector<Postulante> P;
    if(argc > 1){
        std::string op = argv[1];
        Carrera Ca[27];
        if(op == "1" && argc == 4){
            std::cout << std::endl << "CORRE 1" << std::endl;
            LlenarDatos(Ca);
            std::string arch(argv[2]);
            std::ifstream lectura(arch);
            std::ofstream uno("uno.txt"); 
            std::ofstream dos("dos.txt");
            std::ofstream tres("tres.txt");
            if (lectura) { 
                std::vector<int> persona;
                  
                for (std::string linea; getline(lectura,linea) ; ) {
                    persona = obtenerlinea(linea);
                    Postulante A=llenarPostulante(persona);
                    P.push_back(A);
                    persona.clear();
                }
                entraste(Ca,P);

                for(int j=0; j < Ca[0].GetActVacantes();j++){ //Creamos el archivo ordenado
                    std::string salida = std::to_string(Ca[0].GetPostulantes(j).rut) + ";" + std::to_string(Ca[0].GetPostulantes(j).pond);
                    uno << salida << std::endl;
                }
                for(int q=0; q < Ca[17].GetActVacantes();q++){ //Creamos el archivo ordenado
                    std::string salida = std::to_string(Ca[17].GetPostulantes(q).rut) + ";" + std::to_string(Ca[17].GetPostulantes(q).pond);
                    dos << salida << std::endl;
                }
                for(int j=0; j < Ca[3].GetActVacantes();j++){ //Creamos el archivo ordenado
                    std::string salida = std::to_string(Ca[3].GetPostulantes(j).rut) + ";" + std::to_string(Ca[3].GetPostulantes(j).pond);
                    tres << salida << std::endl;
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

