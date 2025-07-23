/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:25:31 by qliso             #+#    #+#             */
/*   Updated: 2025/04/07 14:14:28 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie  *newZombie(std::string);
void    randomChump(std::string);

int main(void)
{
    Zombie  *zombie1;

    zombie1 = newZombie("Mike");
    zombie1->announce();
    delete zombie1;
    randomChump("Harvey");
    
    return (0);
}