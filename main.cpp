#include <iostream>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

void participantes();

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
                //ACA EJECUTAR OPCION 2: BUSQUEDA POR RUT
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
