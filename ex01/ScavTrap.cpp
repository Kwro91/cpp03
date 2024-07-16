/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:45:16 by besalort          #+#    #+#             */
/*   Updated: 2024/07/16 15:36:18 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name) {
	this->Hit = 100;
	this->Energy = 50;
	this->AttackDmg = 20;
	std::cout << "\033[1;32m" << "ScavTrap " << this->Name << " is created\033[0m" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "\033[1;31m" << "ScavTrap " << this->Name << " is destroyed\033[0m" << std::endl;
}


ScavTrap::guardGate