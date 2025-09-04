/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 10:58:38 by ishaaq            #+#    #+#             */
/*   Updated: 2025/09/04 15:09:02 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_, Weapon *weapon_) : name_(name_), weapon_(weapon_)
{
	std::cout << this->name_ << " was constructed" << std::endl;
}

HumanB::HumanB(const HumanB &human) : name_(human.name_), weapon_(human.weapon_)
{
	std::cout << this->name_ << " was constructed" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << this->name_ << " was destructed" << std::endl;
}

void    HumanB::attack(void)
{
	std::cout << this->name_ << " attacks with " << this->weapon_->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon* w)
{
	this->weapon_ = w;
}
