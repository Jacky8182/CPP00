/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:58:15 by jaung             #+#    #+#             */
/*   Updated: 2024/06/03 13:58:16 by jaung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie::Zombie() : name("John")
{
}
Zombie::~Zombie()
{
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::SetName(std::string &name)
{
	this->name = name;
}
Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *zombieHorde = new Zombie[N];

	for (int i = 0; i < N; ++i)
	{
		zombieHorde[i].SetName(name);
	}
	return (zombieHorde);
}