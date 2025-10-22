/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 10:43:38 by ishaaq            #+#    #+#             */
/*   Updated: 2025/10/22 11:19:46 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	// std::cout << "Weapon has been constructed" << std::endl;
}

Weapon::~Weapon(void)
{
	// std::cout << "Weapon has been destructed" << std::endl;
}

Weapon::Weapon(std::string name) : type_(name)
{

}

Weapon::Weapon(const Weapon &weapon)
{
	*this = weapon;
}

std::string		Weapon::getType(void) const
{
	if (this->type_.empty())
		return "No Type";
    return (this->type_);
}

void    Weapon::setType(std::string newType)
{
    this->type_ = newType;
    // std::cout << this->getType() << std::endl;
}

Weapon	&Weapon::operator=(const Weapon &weapon)
{
	this->type_ = weapon.type_;
	return (*this);
}

