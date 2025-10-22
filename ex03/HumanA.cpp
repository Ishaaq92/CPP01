/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 10:58:38 by ishaaq            #+#    #+#             */
/*   Updated: 2025/10/09 15:35:08 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name_(name), weapon_(weapon)
{
	// std::cout << this->name_ << " was constructed" << std::endl;
}

HumanA::HumanA(const HumanA &human) : name_(human.name_), weapon_(human.weapon_)
{
	// std::cout << this->name_ << " was constructed" << std::endl;
}

HumanA::~HumanA(void)
{
	// std::cout << this->name_ << " was destructed" << std::endl;
}

void    HumanA::attack(void) const
{
	std::cout << this->name_ << " attacks with " << this->weapon_.getType() << std::endl;
}
