/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:37:58 by besalort          #+#    #+#             */
/*   Updated: 2024/11/14 17:34:24 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main()
{
	ClapTrap Clap("OriginalClap");
	ScavTrap Scav("Scavenger");
	FragTrap Frag("TopFragger");
	Clap.attack("Le beau Jack");
	Scav.attack("Le beau Jack");
	Scav.guardGate();
	Frag.attack("Le beau Jack"); //1
	Frag.takeDamage(8);
	Frag.beRepaired(2); //2
	Frag.beRepaired(2); //3
	Frag.beRepaired(2); //4
	Frag.beRepaired(2); //5
	Frag.beRepaired(2); //6
	Frag.beRepaired(2); //7
	Frag.beRepaired(2); //8
	Frag.beRepaired(2); //9
	Frag.beRepaired(2); //10

	Frag.beRepaired(2); //11
	Frag.attack("Le beau Jack"); //12
	
	Frag.takeDamage(90);
	Frag.attack("test");
	Frag.beRepaired(100);
	// Frag.guardGate();
	// Frag.guardGate();
	Frag.highFivesGuys();
	Frag.takeDamage(9999);
	return 0;
}