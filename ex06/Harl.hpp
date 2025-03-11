/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 10:01:40 by qliso             #+#    #+#             */
/*   Updated: 2025/03/11 11:47:44 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class   Harl
{
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);

    public:
        Harl(void);
        ~Harl(void);

        void        complain(std::string level);
        enum        Level {DEBUG, INFO, WARNING, ERROR, UNDEF};
        Harl::Level get_level_from_str(std::string level);
        void        complain_from_level(Harl::Level level);
        void        complain_filter(std::string level_str);
};

#endif