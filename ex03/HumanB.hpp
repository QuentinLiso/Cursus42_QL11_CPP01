/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:58:43 by qliso             #+#    #+#             */
/*   Updated: 2025/03/09 20:14:56 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class   HumanB
{
    private:
        std::string _name;
        Weapon      *_weapon;

    public:
        HumanB(std::string const &name);
        ~HumanB(void);

        void    setWeapon(Weapon &weapon);
        void    attack(void) const;
};

#endif