#include <iostream>
#include "../include/Harl.hpp"

void Harl::complain(std::string level)
{
    std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    arr arrf[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (int i = 0; i < 4; i++)
    {
        if(lvl[i] == level)
        {
            (this->*arrf[i])();
            break;
        }
    }
    
}

Harl::Harl (void){}

void Harl::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "Me gustaría algo de bacon extra para mi hamburguesa 7XL";
    std::cout << "-doble-queso-triple-pepinillo-ketchup-especial. Simplemente, me encanta." << std::endl;
}
void Harl::info( void ) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "No me puedo creer que añadir bacon extra cueste más dinero.";
    std::cout << " No ponéis suficiente. Si lo hicierais no tendría que pedirlo.." << std::endl;
}
void Harl::warning( void ) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "Creo que me merezco algo más de bacon gratis.";
    std::cout << "Llevo viniendo años y tú empezaste a trabajar aquí el mes pasado" << std::endl;
}
void Harl::error( void ) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "Esto es inaceptable. ";
    std::cout << "Quiero hablar con el responsable ahora mismo.." << std::endl;
}