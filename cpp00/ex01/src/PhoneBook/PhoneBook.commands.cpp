/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.commands.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:53:40 by jaung             #+#    #+#             */
/*   Updated: 2024/06/03 10:53:41 by jaung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.class.hpp"

int	PhoneBook::AddContact()
{
	if (contact[CurrentContact].AddContact() == FAILURE)
		return (FAILURE);
	else
		++CurrentContact;
	return (SUCCESS);
}
int	PhoneBook::SearchContact()
{
	std::string answer;
	int	to_int;

	if (contact[0].getFirstName().empty() == true)
		std::cout << "Phonebook is empty" << std::endl;
	else
	{
		PrintPhoneBook(MaxContact);
		std::cout << "Enter the contact's index you're looking for: ";
		std::getline(std::cin, answer);
		if (std::cin.eof() == 1)
			return (FAILURE);
		std::cout << std::endl;
		for (i = answer.begin(); i != answer.end(); i++)
		{
			if (isdigit(*i) == 0)
			{
				std::cout << "Error, could not find contact" << std::endl;
				return (SUCCESS);
			}
		}
		std::istringstream(answer) >> to_int;
		if (to_int < 0 || to_int > 7)
			std::cout << "Error, index does not exist" << std::endl;
		else
			contact[to_int].PrintInfo(to_int);
	}
	return (SUCCESS);
}
