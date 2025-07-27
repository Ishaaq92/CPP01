/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 22:38:00 by ishaaq            #+#    #+#             */
/*   Updated: 2025/07/27 10:06:55 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int main(void)
{
	Zombie  *z;

	z = zombieHorde(5, "Timmy");
	z[0].announce();
	delete[] z;
	return (0);
}
