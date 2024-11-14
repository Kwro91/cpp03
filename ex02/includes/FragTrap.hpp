/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:33:41 by besalort          #+#    #+#             */
/*   Updated: 2024/07/26 13:46:49 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP

#define FRAGTRAP_HPP

class FragTrap : public ClapTrap {
	private :

	public :
		FragTrap();
		FragTrap(std::string Name);
		~FragTrap();
		FragTrap(const FragTrap &Frag);
		FragTrap & operator = (const FragTrap &Frag);

		void	attack(const std::string& target);
		void	beRepaired(unsigned int amount);
		void	takeDamage(unsigned int amount);
		void	highFivesGuys(void);
	
};

#endif
