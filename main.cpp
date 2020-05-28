#include <iostream>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

void participantes();

int main(int argc, char** argv){
    if(argc > 1){
        if(argv[1] == 1){ //Creacion de archivos
            std::string archivo(argv[2]);
            std::ifstream lectura(archivo);
            std::ofstream escritura("puntajes.csv");
        }
        if(argv[1] == 2){
            //Busqueda del rut
        }
        else{ //Se muestran participantes
            participantes();
        }
    }
    return EXIT_SUCCESS;
}

void participantes() {
    std::cout << std::endl << "=== Ejemplo de Promediar ===" << std::endl;
    std::cout << std::endl << "Braulio Argandoña"  << std::endl;
    std::cout << std::endl << "Fanny Rivero"  << std::endl;
    std::cout << std::endl << "Jennifer Portiño"  << std::endl;
}