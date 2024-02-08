/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:22:26 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/08 12:17:21 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *zombies = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        std::stringstream fullName;
        fullName << name << " #" << (i + 1);
        zombies[i].setName(fullName.str());
    }
    return zombies;
}