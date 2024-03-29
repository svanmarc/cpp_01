/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:41:02 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/12 16:47:57 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    levels[0].level = "DEBUG";
    levels[0].function = &Harl::debug;
    levels[1].level = "INFO";
    levels[1].function = &Harl::info;
    levels[2].level = "WARNING";
    levels[2].function = &Harl::warning;
    levels[3].level = "ERROR";
    levels[3].function = &Harl::error;
}

Harl::~Harl() {}

void Harl::debug(void)
{
    std::cout << "i love having extra bacon for my 7XL_double_cheese";
    std::cout << "-triple-pickle-special-ketchup burger.";
    std::cout << " I just love it!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money.";
    std::cout << " You didn’t put enough bacon in my burger! If you did,";
    std::cout << " I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free.";
    std::cout << " I’ve been coming for years where you started working";
    std::cout << " here since last month" << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

void Harl::complain(std::string level)
{
    for (int i = 0; i < 4; i++)
    {
        if (levels[i].level == level)
        {
            (this->*levels[i].function)();
            return;
        }
    }
}
