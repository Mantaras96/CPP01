
#include "../include/Zombie.hpp"

Zombie::Zombie( std::string name ): name(name)
{
}

void Zombie::set_name(const std::string name) {
    this->name = name;
}

void Zombie::announce(void) {
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::get_name( void ) const{
    return (this->name);
}