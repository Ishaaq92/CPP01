/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 10:58:38 by ishaaq            #+#    #+#             */
/*   Updated: 2025/10/22 11:19:24 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_, Weapon *weapon_) : name_(name_), weapon_(weapon_)
{
	// std::cout << this->name_ << " was constructed" << std::endl;
}

HumanB::HumanB(const HumanB &human) : name_(human.name_), weapon_(human.weapon_)
{
	// std::cout << this->name_ << " was constructed" << std::endl;
}

HumanB::~HumanB(void)
{
	// std::cout << this->name_ << " was destructed" << std::endl;
}

void    HumanB::attack(void) const
{
	if (!this->weapon_)
		return ;
	std::cout << this->name_ << " attacks with " << this->weapon_->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon* w)
{
	this->weapon_ = w;
}
