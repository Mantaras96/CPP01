#include <iostream>
#include "../include/HumanB.hpp"

HumanB::HumanB( std::string name): name(name)
{
}

HumanB::~HumanB(void)
{
    std::cout << "Human B:" << this->name << " is dead" << std::endl;

}

void HumanB::set_weapon(Weapon& weapon){
    this->weapon = &weapon;
}

void   HumanB::attack(){
    if (this->weapon){
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    } else {
        std::cout << this->name << "can't attack without weapon will die" << std::endl; 
    }
    
}
