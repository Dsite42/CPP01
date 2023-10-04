/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:23:38 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/04 17:56:22 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char **argv)
{
	std::string level;
	Harl harl;
	
	level = argv[1];
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments!\n";
		return (0);
	}
	harl.complain(level);
	return (0);
}
