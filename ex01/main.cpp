/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:24:32 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/08 12:06:06 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int n = 5;
	Zombie *zombies = zombieHorde(n, "Zombie");
	for (int i = 0; i < n; i++)
	{
		zombies[i].announce();
	}
	delete[] zombies;
	return (0);
}