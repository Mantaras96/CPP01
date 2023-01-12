/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:25:02 by amantara          #+#    #+#             */
/*   Updated: 2023/01/12 17:25:05 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie( std::string name ): name(name)
{
}

void Zombie::set_name(const std::string name) {
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << this->name << " is dead" << std::endl;
}

void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::get_name( void ) const{
    return (this->name);
}