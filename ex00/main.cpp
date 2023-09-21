/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:42:50 by cgodecke          #+#    #+#             */
/*   Updated: 2023/09/21 21:43:11 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *newZombie1;
	
	newZombie1 = newZombie("New Zombie");
	newZombie1->announce();
	randomChump("Random Zombie");
	delete newZombie1;
	return (0);
}
