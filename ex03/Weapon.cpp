/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 10:43:38 by ishaaq            #+#    #+#             */
/*   Updated: 2025/07/27 11:51:03 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string&    Weapon::getType(void)
{
    std::string &typeREF = this->type;
    return (typeREF);
}

void    Weapon::setType(std::string newType)
{
    this->type = newType;
    std::cout << this->getType() << std::endl;
}
