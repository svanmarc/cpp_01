/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:34:53 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/10 17:05:30 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <string>

class ReplaceFile
{
    private:
        std::string _filename;
        std::string _s1;
        std::string _s2;
        std::ifstream _ifs;
        std::ofstream _ofs;
        // ifstream and ofstream are used to read and write files

    public:
        ReplaceFile(std::string filename, std::string s1, std::string s2);
        ~ReplaceFile();
        void    replace();
};

#endif