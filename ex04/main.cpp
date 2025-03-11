/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 19:18:14 by qliso             #+#    #+#             */
/*   Updated: 2025/03/10 20:33:11 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int         opening_files(std::ifstream &ifs, std::ofstream &ofs, std::string const &filename);
void        fill_new_file(std::ifstream &ifs, std::ofstream &ofs, std::string const &s1, std::string const &s2);
std::string replace_s1_s2(std::string buffer, std::string const &s1, std::string const &s2);

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Wrong number of arguments, format should be ./Sed s1 s2" << std::endl;
        return (EXIT_FAILURE);
    }
    std::string     filename = av[1];
    std::string     s1 = av[2];
    std::string     s2 = av[3];

    std::ifstream   ifs;
    std::ofstream   ofs;

    if (opening_files(ifs, ofs, filename))
        return (EXIT_FAILURE);
    fill_new_file(ifs, ofs, s1, s2);

    ifs.close();
    ofs.close();
    return (EXIT_SUCCESS);
}

int opening_files(std::ifstream &ifs, std::ofstream &ofs, std::string const &filename)
{
    ifs.open(filename);
    if (!ifs)
    {
        std::cerr << "Error while opening " + filename << std::endl;
        return (1);
    }
    ofs.open(filename + ".replace");
    if (!ofs)
    {
        std::cerr << "Error while opening " + filename + ".replace" << std::endl;
        return (1);
    }
    return (0);
}

void    fill_new_file(std::ifstream &ifs, std::ofstream &ofs, std::string const &s1, std::string const &s2)
{
    std::string buffer;

    while (std::getline(ifs, buffer))
    {
        buffer = replace_s1_s2(buffer, s1, s2);
        ofs << buffer << std::endl;
    }
}

std::string replace_s1_s2(std::string buffer, std::string const &s1, std::string const &s2)
{
    std::string newstr = "";
    size_t      index = 0;
    size_t      s1_len = s1.length();

    while (index != std::string::npos)
    {
        index = buffer.find(s1, 0);
        if (index == std::string::npos)
        {
            newstr += buffer.substr(0, index);
            break ;
        }
        newstr += buffer.substr(0, index) + s2;
        buffer = buffer.substr(index + s1_len);
    }
    return (newstr);
}
