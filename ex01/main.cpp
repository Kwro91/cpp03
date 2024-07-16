/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:37:58 by besalort          #+#    #+#             */
/*   Updated: 2024/07/16 14:39:27 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap New("OriginalClap");
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
	
	New.takeDamage(18);
	New.attack("test");
	New.beRepaired(100);
	New.takeDamage(69);
	return 0;
}