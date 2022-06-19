
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>

class HumanA
{
    public:
        HumanA(std::string name, std::string weapon);
        std::string get_name(void) const;
        void set_name(std::string name);
        std::string set_weapon(void) const;
        void set_weapon(std::string weapon);
        void attack();

        private:
            std::string name;
            std::string weapon;
};


#endif