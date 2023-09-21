/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:43:27 by cgodecke          #+#    #+#             */
/*   Updated: 2023/09/21 21:12:16 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie( std::string name )
{
	Zombie *newZombie;
	
	newZombie = new Zombie(name);
	return (newZombie);
}
