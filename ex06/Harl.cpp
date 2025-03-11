/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 10:01:01 by qliso             #+#    #+#             */
/*   Updated: 2025/03/11 11:47:43 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
    std::cout << "\033[1;33mHarl constructor called\033[0m" << std::endl;
}

Harl::~Harl(void)
{
    std::cout << "\033[1;33mHarl destructor called\033[0m" << std::endl;
}

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
    std::cout << "I really do." << std::endl << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn't put enough bacon in my burger!" << std::endl;
    std::cout << "If you did, I wouldn't be asking for more!" << std::endl << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I've been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void    Harl::complain(std::string level)
{
    void    (Harl::*f[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int      i = -1;

    while (++i < 4)
    {
        if (level == levels[i])
        {
            (this->*f[i])();
            return ;
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

Harl::Level Harl::get_level_from_str(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int      i = -1;

    while (++i < 4)
    {
        if (level == levels[i])
            return ((Harl::Level)i);
    }
    return (Harl::UNDEF);
}

void    Harl::complain_from_level(Harl::Level level)
{
    void    (Harl::*f[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int     i;

    if (level == UNDEF)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return ;
    }
    i = (int)level;
    while (i < 4)
    {
        (this->*f[i])();
        i++;
    }
}

void    Harl::complain_filter(std::string level_str)
{
    Harl::Level level = get_level_from_str(level_str);
    switch (level)
    {
        case DEBUG:
            complain_from_level(DEBUG);
            break ;
        case INFO:
            complain_from_level(INFO);
            break ;
        case WARNING:
            complain_from_level(WARNING);
            break ;
        case ERROR:
            complain_from_level(ERROR);
            break ;
        default :
            complain_from_level(UNDEF);
            break ;
    }
}
