/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 22:38:00 by ishaaq            #+#    #+#             */
/*   Updated: 2025/07/26 22:58:30 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	*z;

	z = new Zombie;
	z->set_name(name);
	return (z);
}

void	randomChump(std::string name)
{
	Zombie	z;

	z.set_name(name);
	z.announce();
	return ;
}

int main(void)
{
    Zombie  *z;

    randomChump("Timmy");
    z = newZombie("Sam");
    z->announce();
    delete z;
}
