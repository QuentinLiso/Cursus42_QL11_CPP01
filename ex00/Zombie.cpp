/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:14:20 by qliso             #+#    #+#             */
/*   Updated: 2025/03/09 18:35:21 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "\033[1;32mZombie " << _name << " constructor called\033[0m" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "\033[1;32mZombie " << _name << " destructor called\033[0m" << std::endl;
}

void    Zombie::announce(void) const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}