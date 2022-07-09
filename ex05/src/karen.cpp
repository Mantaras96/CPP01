#include "../include/Karen.hpp"

#include <map>

void Karen::complain( std::string level ){ 
    std::map<std::string, int> myMap;
    int i;

    myMap["DEBUG"]= 0;
    myMap["INFO"]= 1;
    myMap["WARNING"]= 2;
    myMap["ERROR"]= 3;

    try {
        int levelInt = myMap.at(level);
            switch (levelInt)  {
                case 0:
                    (this->*(&Karen::debug))();
                break;
                case 1:
                    (this->*(&Karen::info))();
                break;
                case 2:
                    (this->*(&Karen::warning))();
                break;
                case 3:
                    (this->*(&Karen::error))();
                break;
            }
    }
    catch (const std::out_of_range&) {
        std::cout << "Not found" << std::endl;
    }

}

Karen::Karen (void){}

void Karen::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "Me gustaría algo de bacon extra para mi hamburguesa 7XL";
    std::cout << "-doble-queso-triple-pepinillo-ketchup-especial. Simplemente, me encanta." << std::endl;
}
void Karen::info( void ) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "No me puedo creer que añadir bacon extra cueste más dinero.";
    std::cout << " No ponéis suficiente. Si lo hicierais no tendría que pedirlo.." << std::endl;
}
void Karen::warning( void ) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "Creo que me merezco algo más de bacon gratis.";
    std::cout << "Llevo viniendo años y tú empezaste a trabajar aquí el mes pasado" << std::endl;
}
void Karen::error( void ) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "Esto es inaceptable. ";
    std::cout << "Quiero hablar con el responsable ahora mismo.." << std::endl;
}