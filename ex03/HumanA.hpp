/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 10:55:09 by ishaaq            #+#    #+#             */
/*   Updated: 2025/07/29 12:39:26 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# include "Weapon.hpp"
#endif

class HumanA
{
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);
        void    attack(void);
    private:
        std::string name;
        Weapon      &weapon;
         
};
