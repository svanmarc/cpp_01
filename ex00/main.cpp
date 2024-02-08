/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:34:02 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/08 11:44:07 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *Zombie = newZombie("newZombieOnHeap");
    Zombie->announce();
    delete Zombie;

    randomChump("newZombieOnStack");

    return 0;
}

/* ************************************************************************** */