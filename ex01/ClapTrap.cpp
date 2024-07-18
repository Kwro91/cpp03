/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 18:25:22 by besalort          #+#    #+#             */
/*   Updated: 2024/07/18 13:25:29 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("Default"), Hit(10), Energy(10), AttackDmg(10) {
	std::cout << "\033[1;32m" << "Claptrap " << this->Name << " is created\033[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : Name(Name), Hit(10), Energy(10), AttackDmg(10){
	std::cout << "\033[1;32m" << "Claptrap " << this->Name << " is created\033[0m" << std::endl;	
}

ClapTrap::~ClapTrap() {
	std::cout << "\033[1;31m" << "Claptrap " << this->Name << " is destroyed\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap) {
	std::cout << "Copy constructor called" << std::endl;
	*this = clap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &clap) {
	std::cout << "Copy assignment operator called" << std::endl;
	Name = clap.Name;
	return (*this);
}

void	ClapTrap::attack(const std::string& target) {
	if (this->Hit == 0)
	{
		std::cout << "ClapTrap " << this->Name << " is destroyed and cannot attack" << std::endl;
		return ;
	}
	if (this->Energy >= 1)
	{
		this->Energy -= 1;
		std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDmg << " points of damage !" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->Name << " have no more Energy left to attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->Hit == 0)
	{
		std::cout << "ClapTrap " << this->Name << " is turned to dust" << std::endl;
		return ;
	}
	if (amount > this->Hit)
		this->Hit = 0;
	else
		this->Hit -= amount;
	if (this->Hit <= 0)
	{
		this->Hit = 0;
		std::cout << "ClapTrap " << this->Name << " take " << amount << " damage and is destroyed" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->Name << " take " << amount << " damage and get " << this->Hit << " HP left" << std::endl;
	}
	
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->Hit == 0)
	{
		std::cout << "ClapTrap " << this->Name << " is destroyed and cannot be repaired" << std::endl;
		return ;
	}
	if (this->Energy >= 1)
	{
		this->Energy -= 1;
		if (this->Hit + amount >= 10)
		{
			this->Hit = 10;
			std::cout << "ClapTrap " << this->Name << " repair itself and is fully recovered" << std::endl;
		}
		else
		{
			this->Hit += amount;
			std::cout << "ClapTrap " << this->Name << " repair itself and recover " << amount << " HP and is now " << this->Hit << std::endl;
		}
	}
	else
		std::cout << "ClapTrap " << this->Name << " have no more Energy left to repair" << std::endl;
}