/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:26:31 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/12 17:27:19 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./harl [logLevel]" << std::endl;
        std::cout << "logLevel: DEBUG, INFO, WARNING, ERROR" << std::endl;
        return 1;
    }

    Harl harl(argv[1]);
    harl.filter();

    return 0;
}