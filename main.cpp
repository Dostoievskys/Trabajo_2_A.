#include <iostream>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include "Carrera.h"
#include "Carrera.cpp"

using namespace std;

void participantes();
float Ponderacion(Carrera, std::vector<int>);
bool ValidarRut(std::string );
vector<int> obtenerPuntajes(std::string fila);

int main(int argc, char** argv){
    if(argc > 1){
        std::string op = argv[1];
        if(op == "1" && argc == 4){ //argc = 4 o 3 (llamada;opcion;ubicacion;ubicacion)
            std::string archivo(argv[2]);
            std::ifstream lectura(archivo);
            std::ofstream escritura("puntajes.csv");
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
    }else{ //Se muestran participantes
            participantes();
        }
    return EXIT_SUCCESS;
}

void participantes() {
    std::cout << std::endl << "=== Ejemplo de Promediar ===" << std::endl;
    std::cout << std::endl << "Braulio Argandoña"  << std::endl;
    std::cout << std::endl << "Fanny Rivero"  << std::endl;
    std::cout << std::endl << "Jennifer Portiño"  << std::endl;
}

vector<int> obtenerPuntajes(std::string fila){
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
  vector<int> aux = C.GetPonderacion();

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