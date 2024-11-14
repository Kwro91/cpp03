/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:31:16 by besalort          #+#    #+#             */
/*   Updated: 2024/11/14 17:41:25 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP

#define SCAVTRAP_HPP

class ScavTrap : public ClapTrap {
	private :
		bool guardingGate;

	public :
		ScavTrap();
		ScavTrap(std::string Name);
		~ScavTrap();
		ScavTrap(const ScavTrap &scav);
		ScavTrap & operator = (const ScavTrap &scav);

		void	attack(const std::string& target);
		void	beRepaired(unsigned int amount);
		void	takeDamage(unsigned int amount);
		void	guardGate();
	
};

#endif