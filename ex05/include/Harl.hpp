
#ifndef Harl_HPP
#define Harl_HPP

#include <iostream>
#include <string>

class Harl
{
    public:
        Harl(void);
        void complain( std::string level );
    private:
        typedef void (Harl::*arr)(void);
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
};

#endif