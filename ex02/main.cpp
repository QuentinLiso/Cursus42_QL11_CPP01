/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:49:46 by qliso             #+#    #+#             */
/*   Updated: 2025/03/09 18:56:32 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN.";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;
    
    std::cout << "Memory address of brain  : " << &brain << std::endl;
    std::cout << "Memory address held by stringPTR : " << stringPTR << std::endl;
    std::cout << "Memory address help by stringREF : " << &stringREF << std::endl << std::endl;
    std::cout << "Value of brain  : " << brain << std::endl;
    std::cout << "Value pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF : " << stringREF << std::endl;
    return (EXIT_SUCCESS);
}