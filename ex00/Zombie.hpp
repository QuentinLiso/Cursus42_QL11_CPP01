/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:13:40 by qliso             #+#    #+#             */
/*   Updated: 2025/03/09 18:35:10 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class   Zombie
{
    private:
        std::string _name;
    
    public:
        Zombie(std::string);
        ~Zombie(void);
        void    announce(void) const;    
};

#endif