/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:30:40 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/12 17:31:25 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
    public:
        Harl(std::string logLevel);
        ~Harl(void);

        void filter(void);

    private:
        std::string _logLevel;
        int _logLevelIndex;

        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

};

#endif