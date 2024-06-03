/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:58:31 by jaung             #+#    #+#             */
/*   Updated: 2024/06/03 13:58:32 by jaung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie;

	zombie = zombieHorde(5, "John");
	for (int i = 0; i < 5; ++i)
	{
		zombie[i].announce();
	}
	delete[] zombie;
	return (0);
}