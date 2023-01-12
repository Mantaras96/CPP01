#include <iostream>
#include "../include/HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ): name(name), weapon(weapon)
{
}

HumanA::~HumanA(void)
{
    std::cout << "Human A " << this->name << " is dead" << std::endl;
}

void   HumanA::attack(){
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}