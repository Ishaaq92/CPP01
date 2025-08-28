/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 22:38:00 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/28 14:36:27 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int main(void)
{
	Zombie  *z;
	int		N;

	N = 5;

	z = zombieHorde(N, "Timmy");
	for (int i=0;i < N;i++)
		z[i].announce();
	delete[] z;
	return (0);
}
