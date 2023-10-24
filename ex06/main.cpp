/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:23:38 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/24 15:51:09 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char **argv)
{
	std::string level;
	Harl harl;
	
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments!\n";
		return (0);
	}
	level = argv[1];
	harl.complain(level);
	return (0);
}
