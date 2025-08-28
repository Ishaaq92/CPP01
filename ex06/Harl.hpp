/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:46:19 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/28 17:13:40 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class Harl
{
	public:
		Harl(void);
		~Harl(void);
		void	complain(std::string level);
		void	filter(std::string level);
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif
