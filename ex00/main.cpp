/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:34:02 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/07 16:21:52 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *Zombie = newZombie("Zombie1");
    Zombie->announce();
    delete Zombie;

    randomChump("Zombie2");

    return 0;
}

/* ************************************************************************** */