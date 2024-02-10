/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:17:31 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/10 12:06:58 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL){}


HumanB::~HumanB() {}


void HumanB::setWeapon(Weapon &w)
{
	this->weapon = &w;
}

void HumanB::attack()
{
	if (weapon == NULL || !weapon)
		std::cout << name << " attacks with his bare hands" << std::endl;
	else
		std::cout << name << " attacks with " << weapon->getType() << std::endl;
}
