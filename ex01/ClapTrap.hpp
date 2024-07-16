/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 16:24:22 by besalort          #+#    #+#             */
/*   Updated: 2024/07/16 15:07:20 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap {
	protected :
		std::string	Name;
		int 		Hit;
		int			Energy;
		int			AttackDmg;
	public :
		ClapTrap(std::string Name);
		~ClapTrap();
		ClapTrap(const ClapTrap &clap);
		ClapTrap & operator = (const ClapTrap &clap);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	
};

#endif