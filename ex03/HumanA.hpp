/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 10:55:09 by ishaaq            #+#    #+#             */
/*   Updated: 2025/09/04 16:17:24 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
    private:
        std::string name_;
        Weapon      &weapon_;

	protected:

    public:
        HumanA(std::string name, Weapon &weapon);
        HumanA(const HumanA &human);
        ~HumanA(void);
        void    attack(void) const;
};

