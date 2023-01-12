#include "../include/Zombie.hpp"

int main()
{
std::cout << "Nuevo zombie pointer" << std::endl;
Zombie *zombie = zombieHorde(10, "Albert");

for (int i = 0; i < 10; i++){
    zombie[i].announce();
}

delete [] zombie;

return (0);
}