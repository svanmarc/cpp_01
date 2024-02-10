/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:41:49 by svanmarc          #+#    #+#             */
/*   Updated: 2024/02/10 17:06:20 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

ReplaceFile::ReplaceFile(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2)
{
    _ifs.open(_filename);
    if (!_ifs.is_open())
    {
        std::cout << "Error: file not found" << std::endl;
        exit(1);
    }
    _ofs.open(_filename + ".replace", std::ios::trunc);
    // std::ios::trunc is used to clear the file if it already exists
    if (!_ofs.is_open())
    {
        std::cout << "Error: file not found" << std::endl;
        exit(1);
    }
}

ReplaceFile::~ReplaceFile()
{
    _ifs.close();
    _ofs.close();
}

void    ReplaceFile::replace()
{
    std::string line;
    std::string result;

    while (std::getline(_ifs, line))
    {
        size_t startPos = 0;
        size_t foundPos = line.find(_s1, startPos);

        while (foundPos != std::string::npos)
        {
            result += line.substr(startPos, foundPos - startPos);
            result += _s2;
            startPos = foundPos + _s1.length();
            foundPos = line.find(_s1, startPos);
        }
        result += line.substr(startPos);
        result += "\n";
    }
    _ofs << result;
}

