/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:58:43 by qliso             #+#    #+#             */
/*   Updated: 2025/03/09 20:13:49 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon      &_weapon;

    public:
        HumanA(std::string const &name, Weapon &weapon);
        ~HumanA();

        void    attack(void) const;        
};

#endif