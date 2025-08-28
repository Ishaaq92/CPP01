/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 10:55:09 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/28 15:35:49 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
# define HUMAN_B
# include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name, Weapon *weapon);
        ~HumanB(void);
        void    attack(void);
        void    setWeapon(Weapon *w);
    private:
        std::string name;
        Weapon      *weapon;
};

#endif
