/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 10:58:38 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/28 15:36:46 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon *weapon) : name(name), weapon(weapon)
{
	std::cout << this->name << " was constructed" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << this->name << " was destructed" << std::endl;
}

void    HumanB::attack(void)
{
	std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon* w)
{
	this->weapon = w;
}
