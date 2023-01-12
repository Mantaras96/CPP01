#include "../include/Weapon.hpp"

Weapon::Weapon( std::string type ): type(type)
{
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon " << this->type << " is dead" << std::endl;
}

const std::string&	Weapon::getType( void ) const
{
	return (this->type);
}
void		Weapon::setType( const std::string& newType )
{
	if (newType == "")
	{
		std::cout << "new type can't be empty string" << std::endl;
	}
	this->type = newType;
}
