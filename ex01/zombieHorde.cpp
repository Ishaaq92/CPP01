/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 23:05:50 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/28 14:32:08 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*z;

	if (N < 1)
		return (NULL);
	z = new Zombie[N];
	for (int i=0;i < N;i++)
		z[i].set_name(name);
	return (z);
}

