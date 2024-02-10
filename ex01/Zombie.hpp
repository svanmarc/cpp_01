/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:18:34 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/10 16:07:53 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <sstream>
#include <string>

class Zombie
{
private:
    std::string _name;

public:
    Zombie();
    ~Zombie();
    void announce();
    void setName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif
