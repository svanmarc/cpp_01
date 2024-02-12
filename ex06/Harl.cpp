/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:30:27 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/12 17:40:02 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

Harl::Harl(std::string logLevel) : _logLevel(logLevel)
{
    std::string logLevels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    _logLevelIndex = -1;

    for (int i = 0; i < 4; i++)
    {
        if (logLevels[i] == logLevel)
        {
            _logLevelIndex = i;
            return;
        }
    }
}

Harl::~Harl(void) {}

void Harl::filter()
{
    switch (_logLevelIndex)
    {
    case 0:
        std::cout << "[DEBUG] " << std::endl;
        debug();
        std::cout << std::endl;
        // intentional fall through
    case 1:
        std::cout << "[INFO] " << std::endl;
        info();
        std::cout << std::endl;
        // intentional fall through
    case 2:
        std::cout << "[WARNING] " << std::endl;
        warning();
        std::cout << std::endl;
        // intentional fall through
    case 3:
        std::cout << "[ERROR] " << std::endl;
        error();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

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