/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:42:45 by cgodecke          #+#    #+#             */
/*   Updated: 2023/09/21 21:33:23 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <new>

class Zombie
{
private:
	std::string _name;
public:
	Zombie(std::string name);
	~Zombie();

	void announce(void);
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif