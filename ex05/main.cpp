/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:23:38 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/04 17:09:39 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
	Harl harl;

	std::cout << "------ DEBUG Level ------" << std::endl;
	harl.complain("DEBUG");
	std::cout << "------ INFO Level ------" << std::endl;;
	harl.complain("INFO");
	std::cout << "------ WARNING Level ------" << std::endl;
	harl.complain("WARNING");
	std::cout << "------ ERROR Level ------" << std::endl;
	harl.complain("ERROR");
	std::cout << "------ No valid Level ------" << std::endl;
	harl.complain("ALARM");
	return (0);
}
