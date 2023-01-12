/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:25:23 by amantara          #+#    #+#             */
/*   Updated: 2023/01/12 17:25:25 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie( std::string name );
        ~Zombie(void);
        std::string get_name(void) const;
        void set_name(std::string name);
        void announce(void);

    private:
        std::string name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif