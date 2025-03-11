/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:58:43 by qliso             #+#    #+#             */
/*   Updated: 2025/03/09 20:14:43 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const &name)
    :
    _name(name),
    _weapon(NULL)
{
    std::cout << "\033[1;32mHuman B constructor called.\033[0m" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << "\033[1;32mHuman B destructor called.\033[0m" << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void    HumanB::attack(void) const
{
    if (!this->_weapon)
    {
        std::cout << "No weapon held. "<< this->_name << " cannot attack..." << std::endl;
        return ;
    }
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}