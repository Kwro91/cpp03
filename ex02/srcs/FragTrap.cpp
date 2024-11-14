/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:33:43 by besalort          #+#    #+#             */
/*   Updated: 2024/11/14 17:34:19 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->Hit = 100;
	this->Energy = 100;
	this->AttackDmg = 30;
	std::cout << "\033[1;32m" << "FragTrap " << this->Name << " is created\033[0m" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name) {
	this->Hit = 100;
	this->Energy = 100;
	this->AttackDmg = 30;
	std::cout << "\033[1;32m" << "FragTrap " << this->Name << " is created\033[0m" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "\033[1;31m" << "FragTrap " << this->Name << " is destroyed\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap &Frag) : ClapTrap(Frag) {
	std::cout << "FragTrap copy Constructor called" << std::endl;
}

void	FragTrap::attack(const std::string& target) {
	if (this->Hit == 0)
	{
		std::cout << "FragTrap " << this->Name << " is destroyed and cannot attack" << std::endl;
		return ;
	}
	if (this->Energy >= 1)
	{
		this->Energy -= 1;
		std::cout << "FragTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDmg << " points of damage !" << std::endl;
	}
	else
		std::cout << "FragTrap " << this->Name << " have no more Energy left to attack" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount) {
	if (this->Hit == 0)
	{
		std::cout << "FragTrap " << this->Name << " is destroyed and cannot be repaired" << std::endl;
		return ;
	}
	if (this->Energy >= 1)
	{
		this->Energy -= 1;
		if (this->Hit + amount >= 100)
		{
			this->Hit = 100;
			std::cout << "FragTrap " << this->Name << " repair itself and is fully recovered" << std::endl;
		}
		else
		{
			this->Hit += amount;
			std::cout << "FragTrap " << this->Name << " repair itself and recover " << amount << " HP and is now " << this->Hit << std::endl;
		}
	}
	else
		std::cout << "FragTrap " << this->Name << " have no more Energy left to repair" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
	if (this->Hit == 0)
	{
		std::cout << "FragTrap " << this->Name << " is turned to dust" << std::endl;
		return ;
	}
	if (amount > this->Hit)
		this->Hit = 0;
	else
		this->Hit -= amount;
	if (this->Hit <= 0)
	{
		this->Hit = 0;
		std::cout << "FragTrap " << this->Name << " take " << amount << " damage and is destroyed" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << this->Name << " take " << amount << " damage and get " << this->Hit << " HP left" << std::endl;
	}
}

void	FragTrap::highFivesGuys() {
		std::string str;
		std::cout << "FragTrap want to High Five with you, are you doing it ? : ";
		getline(std::cin, str);
		std::cout << std::endl;
		if (str == "YES" || str == "Yes" || str == "NO" || str == "No")
		{
			if (str == "YES" || str == "Yes")
			{
				this->Hit = 10000;
				std::cout << "You High Five with FragTrap, his HP are set up to 10000 !" << std::endl;
			}
			else
			{
				std::cout << "FragTrap is sad." << std::endl;
			}
			return ;
		}
		std::cout << "You did not answer right. (type: YES/Yes/NO/No). FragTrap is sad." << std::endl;
			
		
}
