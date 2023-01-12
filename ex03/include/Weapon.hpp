
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    public:
    // Constructor
        Weapon( std::string type );
        ~Weapon( void );
        const std::string& getType(void) const;
        void setType( const std::string& newType  );
 
    private:
        std::string type;
};

#endif