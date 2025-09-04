/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 10:55:09 by ishaaq            #+#    #+#             */
/*   Updated: 2025/09/04 16:17:42 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
    private:
        std::string name_;
        Weapon      *weapon_;
	
	protected:

    public:
        HumanB(std::string name, Weapon *weapon);
        HumanB(const HumanB &human);
        ~HumanB(void);
        void    attack(void) const;
        void    setWeapon(Weapon *w);
};

