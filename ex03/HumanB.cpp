/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:17:31 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/08 18:33:24 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &w)
{
	this->weapon = &w;
}

void HumanB::attack()
{
	if (weapon == NULL)
		std::cout << name << " attacks with his bare hands" << std::endl;
	else
		std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
