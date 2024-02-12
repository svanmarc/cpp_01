/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:47:34 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/12 16:04:55 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	struct HarlLevel
	{
		std::string level;
		void (Harl::*function)(void);
	};

	HarlLevel levels[4];

public:
	Harl(void);
	~Harl(void);

	void complain(std::string level);
};

#endif