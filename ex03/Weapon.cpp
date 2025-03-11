/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:58:43 by qliso             #+#    #+#             */
/*   Updated: 2025/03/09 20:15:12 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const &type) : _type(type)
{
    std::cout << "\033[1;32mWeapon " << _type << " constructor called.\033[0m" << std::endl;
}

Weapon::~Weapon(void)
{
    std::cout << "\033[1;32mWeapon " << _type << " destructor called.\033[0m" << std::endl;
}

std::string const &Weapon::getType(void)
{
    std::string& typeRef = this->_type;
    return (typeRef);
}

void    Weapon::setType(std::string const &type)
{
    this->_type = type;
}
