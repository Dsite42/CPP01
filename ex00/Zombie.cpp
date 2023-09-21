/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:43:16 by cgodecke          #+#    #+#             */
/*   Updated: 2023/09/21 21:35:36 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie " << _name << " created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " destroyed" << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
