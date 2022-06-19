#include <iostream>
#include <string>

int main(){
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Direccion string original:" << &str << std::endl;
    std::cout << "Direccion string puntero:" << stringPTR << std::endl;
    std::cout << "Direccion string referencia:" << &stringREF << std::endl;

    std::cout << "String original:" << str << std::endl;
    std::cout << "String puntero:" << *stringPTR << std::endl;
    std::cout << "String referencia:" << stringREF << std::endl;

    return (1);
}