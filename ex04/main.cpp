/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:18:09 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/10 16:41:34 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return (1);
    }
    Replace rep(av[1], av[2], av[3]);
    rep.replace();
    return (0);
}