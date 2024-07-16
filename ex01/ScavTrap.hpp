/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:31:16 by besalort          #+#    #+#             */
/*   Updated: 2024/07/16 14:49:18 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP

#define SCAVTRAP_HPP

class ScavTrap : public ClapTrap {
	private :

	public :
		ScavTrap(std::string Name);
		~ScavTrap();
		ScavTrap(const ScavTrap &scav);
		ScavTrap & operator = (const ScavTrap &scav);

		void guardGate();
	
};

#endif