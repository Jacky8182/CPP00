/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.utils.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 10:44:30 by jaung             #+#    #+#             */
/*   Updated: 2024/05/27 10:44:31 by jaung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.class.hpp"

int	Contact::AddFirstName(std::string &Info)
{
	std::cout << "Enter a First name: ";
	getline(std::cin, Info);
	for (this->i = Info.begin(); this->i != Info.end(); i++)
	{
		if (isalpha(*this->i) == 0)
		{
			std::cout << "Error, " << Info << " contains non alphabetics characters" << std::endl;
			return (FAILURE);
		}
	}
	return (SUCCESS);
}

int	Contact::AddLastName(std::string &Info)
{
	std::cout << "Enter a Last name: ";
	getline(std::cin, Info);
	for (this->i = Info.begin(); this->i != Info.end(); (*this).i++)
	{
		if (isalpha(*this->i) == 0)
		{
			std::cout << "Error, " << Info << " contains non alphabetics characters" << std::endl;
			return (FAILURE);
		}
	}
	return (SUCCESS);
}

int	Contact::AddNickName(std::string &Info)
{
	std::cout << "Enter a Nickname: ";
	getline(std::cin, Info);
	for (this->i = Info.begin(); this->i != Info.end(); (*this).i++)
	{
		if (isalpha(*this->i) == 0)
		{
			std::cout << "Error, " << Info << " contains non alphabetics characters" << std::endl;
			return (FAILURE);
		}
	}
	return (SUCCESS);
}

int	Contact::AddPhoneNumber(std::string &Info)
{
	std::cout << "Enter a Phone number: ";
	getline(std::cin, Info);
	if (Info.size() != 10)
	{
		std::cout << "Error, phone number must contains 10 numbers" << std::endl;
		return (FAILURE);
	}
	for (this->i = Info.begin(); this->i != Info.end(); (*this).i++)
	{
		if (isdigit(*this->i) == 0)
		{
			std::cout << "Error, " << Info << " contains non digits characters" << std::endl;
			return (FAILURE);
		}
	}
	return (SUCCESS);
}

int	Contact::AddDarkestSecret(std::string &Info)
{
	while (1)
	{
		std::cout << "Enter your darkest secret: ";
		getline(std::cin, Info);
		if (std::cin.eof() == 1) {
			std::cin.clear();
			std::cin.ignore();
			continue ;
		}
		if (Info.size() == 0)
		{
			std::cout << "Error, field cannot be empty" << std::endl;
		}
		else
		{	
			for (this->i = Info.begin(); this->i != Info.end(); (*this).i++)
			{
				if (isalnum(*this->i) == 0 && *i != ' ')
				{
					if (isprint(*this->i) == 0)
					{
						std::cout << "Error, your darkest secret contains non printable and non alpha numeric characters" << std::endl;
					}
					else
					{
						std::cout << "Error, " << Info << " contains non alpha numeric characters" << std::endl;
					}
					break ;
				}
			}
			if (this->i == Info.end())
				break ;
		}
	}
	return (SUCCESS);
}