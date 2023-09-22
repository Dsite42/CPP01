/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:42:50 by cgodecke          #+#    #+#             */
/*   Updated: 2023/09/22 15:23:24 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

int main(void)
{
	Weapon club = Weapon("test");
	HumanA Bob("Bob", club);
	Bob.attack();

	return (0);
}
