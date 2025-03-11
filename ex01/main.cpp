/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:41:05 by qliso             #+#    #+#             */
/*   Updated: 2025/03/09 18:47:32 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name);

int main(void)
{
    int n;
    int i;
    Zombie  *zombies;

    n = 10;
    i = -1;
    zombies = zombieHorde(n, "Louis");
    while (++i < n)
        zombies[i].announce();
    delete [] zombies;
    return (EXIT_SUCCESS);
}