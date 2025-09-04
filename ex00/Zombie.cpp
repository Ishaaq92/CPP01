/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 22:20:23 by ishaaq            #+#    #+#             */
/*   Updated: 2025/09/04 13:58:50 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << this->name_ <<  "Zombie was constructed" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name_ << " was destructed" << std::endl;
}

Zombie::Zombie(Zombie &z)
{
	this->name_ = z.name_;
}

void    Zombie::announce(void)
{
	std::cout << this->name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name_ = name;
}

