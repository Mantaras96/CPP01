
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie( void );
        ~Zombie(void);
        std::string get_name(void) const;
        void set_name(std::string name);
        void announce(void);

    private:
        std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif