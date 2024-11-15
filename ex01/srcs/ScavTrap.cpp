/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:45:16 by besalort          #+#    #+#             */
/*   Updated: 2024/11/14 17:46:18 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	this->Hit = 100;
	this->Energy = 50;
	this->AttackDmg = 20;
	this->guardingGate = false;
	std::cout << GREEN << "ScavTrap " << this->Name << " is created" << WHITE << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name) {
	this->Hit = 100;
	this->Energy = 50;
	this->AttackDmg = 20;
	this->guardingGate = false;
	std::cout << GREEN << "ScavTrap " << this->Name << " is created" << WHITE << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << RED << "ScavTrap " << this->Name << " is destroyed" << WHITE << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav) : ClapTrap(scav) {
	this->guardingGate = scav.guardingGate;
	std::cout << "ScavTrap copy Constructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (this->Hit == 0)
	{
		std::cout << "ScavTrap " << this->Name << " is destroyed and cannot attack" << std::endl;
		return ;
	}
	if (this->Energy >= 1)
	{
		this->Energy -= 1;
		std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDmg << " points of damage !" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->Name << " have no more Energy left to attack" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	if (this->Hit == 0)
	{
		std::cout << "ScavTrap " << this->Name << " is destroyed and cannot be repaired" << std::endl;
		return ;
	}
	if (this->Energy >= 1)
	{
		this->Energy -= 1;
		if (this->Hit + amount >= 100)
		{
			this->Hit = 100;
			std::cout << "ScavTrap " << this->Name << " repair itself and is fully recovered" << std::endl;
		}
		else
		{
			this->Hit += amount;
			std::cout << "ScavTrap " << this->Name << " repair itself and recover " << amount << " HP and is now " << this->Hit << std::endl;
		}
	}
	else
		std::cout << "ScavTrap " << this->Name << " have no more Energy left to repair" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	if (this->Hit == 0)
	{
		std::cout << "ScavTrap " << this->Name << " is turned to dust" << std::endl;
		return ;
	}
	if (amount > this->Hit)
		this->Hit = 0;
	else
		this->Hit -= amount;
	if (this->Hit <= 0)
	{
		this->Hit = 0;
		std::cout << "ScavTrap " << this->Name << " take " << amount << " damage and is destroyed" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->Name << " take " << amount << " damage and get " << this->Hit << " HP left" << std::endl;
	}
	
}

void	ScavTrap::guardGate() {
	if (this->guardingGate == false)
	{
		this->guardingGate = true;
		std::cout << "ScavTrap " << this->Name << " is guarding the gate" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->Name << " is already guarding the gate" << std::endl;
}