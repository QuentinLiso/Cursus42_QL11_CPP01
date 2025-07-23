/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 10:23:47 by qliso             #+#    #+#             */
/*   Updated: 2025/04/07 14:20:13 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

int main(int ac, char **av)
{
    Harl    harl;

    if (ac != 2)
    {
        std::cerr << "Wrong number of args, should be ./harlFilter <level>" << std:: endl;
        return (1);
    }
    std::string level(av[1]);
    harl.complain_filter(level);
    return (0);
}