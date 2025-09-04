/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:46:19 by ishaaq            #+#    #+#             */
/*   Updated: 2025/09/04 15:35:24 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class Harl
{
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

	protected:

	public:
		Harl(void);
		Harl(const Harl &harl);
		~Harl(void);
		Harl	&operator=(const Harl &rhs);
		void	complain(std::string level);
};

#endif
