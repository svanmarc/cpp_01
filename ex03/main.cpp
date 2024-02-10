/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:11:14 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/10 12:05:29 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	std::cout << "test HumanA" << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << "\ntest HumanB" << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	std::cout << "\ntest HumanB with no weapon at all" << std::endl;
	{
		HumanB NoobOne("NoobOne");
		NoobOne.attack();
	}
	std::cout << "\ntest humanB with no weapon and given after with pointer" << std::endl;
	{
		Weapon club = Weapon("");
		HumanB NoobTwo("NoobTwo");
		NoobTwo.setWeapon(club);
		NoobTwo.attack();
		club.setType("some other type of club");
		NoobTwo.attack();
	}
	return (0);
}