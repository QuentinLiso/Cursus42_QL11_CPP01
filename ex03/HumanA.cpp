/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:58:43 by qliso             #+#    #+#             */
/*   Updated: 2025/03/09 20:06:53 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, Weapon &weapon)
    :
    _name(name),
    _weapon(weapon)
{
    std::cout << "\033[1;32mHuman A constructor called.\033[0m" << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "\033[1;32mHuman A destructor called.\033[0m" << std::endl;
}

void    HumanA::attack(void) const
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}