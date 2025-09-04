/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 22:20:23 by ishaaq            #+#    #+#             */
/*   Updated: 2025/09/04 14:47:15 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "A Zombie was constructed" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name_ << " was destructed" << std::endl;
}

Zombie::Zombie(const Zombie &z)
{
	*this = z;
}

void    Zombie::announce(void)
{
	std::cout << this->name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name_ = name;
}

Zombie	&Zombie::operator=(const Zombie &rhs)
{
	this->name_ = rhs.name_;
	return (*this);
}

