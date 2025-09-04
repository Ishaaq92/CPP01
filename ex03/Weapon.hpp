/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 10:43:52 by ishaaq            #+#    #+#             */
/*   Updated: 2025/09/04 14:57:44 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP
# include <iostream>

class Weapon
{
    private:
        std::string	type_;

	protected:

    public:
		Weapon(void);
		~Weapon(void);
		Weapon(const Weapon &weapon);
		Weapon	&operator=(const Weapon &weapon);
        std::string& getType(void);
        void    setType(std::string newType);
};

#endif
