#include "../include/Karen.hpp"

int main(int argc, char **argv){

    if (argc != 2) {
        std::cout << "Error de Karen parametros" << std::endl;
    } else {
    Karen karen;
    karen.complain(argv[1]);    
    }

}