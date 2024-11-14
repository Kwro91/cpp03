/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 16:24:22 by besalort          #+#    #+#             */
/*   Updated: 2024/11/14 17:45:37 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define WHITE "\033[0m"
#define RED "\033[1;31m"
#define BLUE "\033[1;34m"
#define GREEN "\033[1;32m"

class ClapTrap {
	protected :
		std::string		Name;
		unsigned int	Hit;
		unsigned int	Energy;
		unsigned int	AttackDmg;
	public :
		ClapTrap();
		ClapTrap(std::string Name);
		~ClapTrap();
		ClapTrap(const ClapTrap &clap);
		ClapTrap & operator = (const ClapTrap &clap);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	
};

#endif