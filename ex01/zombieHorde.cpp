/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:32:41 by qliso             #+#    #+#             */
/*   Updated: 2025/03/09 18:39:54 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    int i;

    Zombie  *zombieHorde = new Zombie[N];
    i = -1;
    while (++i < N)
        zombieHorde[i].setName(name);
    return (zombieHorde);
}