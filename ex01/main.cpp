/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:42:50 by cgodecke          #+#    #+#             */
/*   Updated: 2023/09/22 11:50:35 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int N = 3;
	
	horde = zombieHorde(N, "Horde");
 	for (int i = 0; i < N; i++)
	{
        horde[i].announce();
    }

	delete[] horde;
	return (0);
}
