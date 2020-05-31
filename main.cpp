#include <iostream>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include "Carrera.h"
#include "Funciones.h"

using namespace std;

int main(int argc, char** argv){
    std::vector<Postulante> P;
    if(argc > 1){
        std::string op = argv[1];
        if(op == "1" && argc == 4){ //argc = 4 o 3 (llamada;opcion;ubicacion;ubicacion)
            LlenarDatos(); //RETURN VECTOR CA[];
            std::string archivo(argv[2]);
            std::ifstream lectura(archivo);
            std::ofstream escritura("puntajes.txt");
            if (lectura) {
                for (std::string linea; getline(lectura,linea) ; ) {
                    std::vector<int> persona = obtenerlinea(linea);
                    llenarPostulante(persona, P);
                    //Aqui quede...

                    //Final
                    persona.clear();
                    P.erase (P.begin());
                }
                /*for(int i=0; i<cont;i++){ //Creamos el archivo ordenado
                    B=E[i];

                    std::string salida = std::to_string(B.GetRut()) + ";" + std::to_string(B.GetPromedio());
                    escritura << salida << std::endl;
                }*/
            }
            //ACA EJECUTAR OPCION 1
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
    }
    else{ //Se muestran participantes
            participantes();
        }
    return EXIT_SUCCESS;
}