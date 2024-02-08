/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:44:36 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/08 15:58:31 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory address of the string : " << &str << std::endl;
    std::cout << "Memory address held  bystringPTR : " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF : " << &stringREF << std::endl;

    std::cout << "Value of the string : " << str << std::endl;
    std::cout << "Value of the stringPTR : " << *stringPTR << std::endl;
    std::cout << "Value of the stringREF : " << stringREF << std::endl;

    return 0;
}
