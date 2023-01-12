
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "./Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB( void );
        std::string get_name(void) const;
        void set_name(std::string name);
        void set_weapon(Weapon& weapon);
        void attack();

        private:
            std::string name;
            Weapon *weapon;
};


#endif