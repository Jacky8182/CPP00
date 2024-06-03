/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:12:16 by jaung             #+#    #+#             */
/*   Updated: 2024/06/03 18:12:17 by jaung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fstream>
#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::cout << "Error, the program needs at least 3 arguments" << std::endl;
		return (1);
	}
	std::fstream File(av[1]);
	std::ofstream NewFile;
}