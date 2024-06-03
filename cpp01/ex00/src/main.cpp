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

int main()
{
	Zombie *zombie;

	zombie = newZombie("a");
	(*zombie).announce();
	randomChump("John");
	delete  zombie;
	return 0;
}