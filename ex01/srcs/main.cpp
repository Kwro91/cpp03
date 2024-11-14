/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:37:58 by besalort          #+#    #+#             */
/*   Updated: 2024/11/14 17:36:15 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main()
{
	ScavTrap New("Scavenger");
	New.attack("Le beau Jack"); //1
	New.takeDamage(8);
	New.beRepaired(2); //2
	New.beRepaired(2); //3
	New.beRepaired(2); //4
	New.beRepaired(2); //5
	New.beRepaired(2); //6
	New.beRepaired(2); //7
	New.beRepaired(2); //8
	New.beRepaired(2); //9
	New.beRepaired(2); //10

	New.beRepaired(2); //11
	New.attack("Le beau Jack"); //12
	
	New.takeDamage(90);
	New.attack("test");
	New.beRepaired(100);
	New.guardGate();
	New.guardGate();
	New.takeDamage(9999);
	return 0;
}