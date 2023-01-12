/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:25:18 by amantara          #+#    #+#             */
/*   Updated: 2023/01/12 17:25:19 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main()
{
std::cout << "Nuevo zombie pointer" << std::endl;
Zombie *zombie = newZombie("Albert");
zombie->announce();
delete zombie;

std::cout << "Nuevo zombie random" << std::endl;
randomChump("Alf");

std::cout << "Nuevo zombie normal." << std::endl;
Zombie zombie2("Gandalf");
zombie2.announce();

}