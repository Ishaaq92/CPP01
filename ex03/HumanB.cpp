/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 10:58:38 by ishaaq            #+#    #+#             */
/*   Updated: 2025/07/27 11:17:19 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
	std::cout << this->name << "was constructed" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << this->name << "was destructed" << std::endl;
}

void    HumanB::attack(void)
{
	std::cout << this->name << "attacks with their " << this->weapon.getType() << std::endl;
}
