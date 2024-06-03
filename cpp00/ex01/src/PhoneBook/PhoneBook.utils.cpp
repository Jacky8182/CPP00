/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:44:17 by jaung             #+#    #+#             */
/*   Updated: 2024/06/03 10:44:31 by jaung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.class.hpp"

int	SearchCommand(const std::string &answer, PhoneBook &repertory)
{
	if (answer.compare("ADD") == 0)
	{
		if (repertory.AddContact() == FAILURE)
			return (FAILURE);
	}
	else if (answer.compare("SEARCH") == 0)
	{
		if (repertory.SearchContact() == FAILURE)
			return (FAILURE);
	}
	else if (answer.compare("EXIT") == 0)
		return (FAILURE);
	else
		std::cout << "Command not found" << std::endl;
	return (SUCCESS);
}