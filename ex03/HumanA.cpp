/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 10:58:38 by ishaaq            #+#    #+#             */
/*   Updated: 2025/07/27 11:27:16 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
    this->name = name;
    this->weapon = weapon;
    std::cout << this->name << "was constructed" << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << this->name << "was destructed" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << this->name << "attacks with their " << this->weapon.getType() << std::endl;
}
