/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 22:17:06 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/28 14:21:54 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
	 	Zombie(void);
	 	~Zombie(void);
		void	announce(void);
		void	set_name(std::string name);
	private:
		std::string	name_;
};

#endif
