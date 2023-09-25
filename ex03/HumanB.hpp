/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:54:07 by cgodecke          #+#    #+#             */
/*   Updated: 2023/09/25 10:39:58 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
	private:
		std::string _name;
		Weapon *_weapon;
	public:
		void attack();
	HumanB(std::string name);
	HumanB(std::string name, Weapon &weapon);
	~HumanB();

	void setWeapon(Weapon &weapon);
};

#endif