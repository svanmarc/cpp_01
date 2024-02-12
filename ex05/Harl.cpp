/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:41:02 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/12 16:15:42 by svanmarc         ###   ########.fr       */
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
    std::cout << "debug message" << std::endl;
}

void Harl::info(void)
{
    std::cout << "info message" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "warnig message" << std::endl;
}

void Harl::error(void)
{
    std::cout << "error message" << std::endl;
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
    std::cout << "UNKNOWN" << std::endl;
}
