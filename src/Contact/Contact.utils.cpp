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
#include <limits>

int	Contact::AddFirstName(std::string &Info)
{
	while (1) 
	{
		std::cout << "Enter a First name: ";
		getline(std::cin, Info);
		if (std::cin.eof() == 1)
			return (FAILURE);
		if (Info.size() == 0) 
			std::cout << "Error, field cannot be empty" << std::endl;
		else 
		{
			for (i = Info.begin(); i != Info.end(); i++)
			{
				if (isalpha(*i) == 0)
				{
					std::cout << "Error, your first name contains invalid characters" << std::endl;
					break ;
				}
			}
		}
		if (i == Info.end())
			break ;
	}
	return (SUCCESS);
}

int	Contact::AddLastName(std::string &Info)
{
	while (1)
	{
		std::cout << "Enter a Last name: ";
		getline(std::cin, Info);
		if (std::cin.eof() == 1)
			return (FAILURE);
		if (Info.size() == 0)
			std::cout << "Error, field cannot be empty" << std::endl;
		else
		{
			for (i = Info.begin(); i != Info.end(); i++)
			{
				if (isalpha(*i) == 0)
				{
					std::cout << "Error, your last name contains invalid characters" << std::endl;
					break ;
				}
			}
			if (i == Info.end())
				break ;
		}
	}
	return (SUCCESS);
}

int	Contact::AddNickName(std::string &Info)
{
	while (1)
	{
		std::cout << "Enter a Nickname: ";
		getline(std::cin, Info);
		if (std::cin.eof() == 1)
			return (FAILURE);
		if (Info.size() == 0)
			std::cout << "Error, field cannot be empty" << std::endl;
		else 
		{
			for (i = Info.begin(); i != Info.end(); i++)
			{
				if (isalpha(*i) == 0)
				{
					std::cout << "Error, your nick name contains invalid numeric characters" << std::endl;
					break ;
				}
			}
			if (i == Info.end())
				break ;
		}
	}
	return (SUCCESS);
}

int	Contact::AddPhoneNumber(std::string &Info)
{
	while (1)
	{
		std::cout << "Enter a Phone number: ";
		getline(std::cin, Info);
		if (std::cin.eof() == 1)
			return (FAILURE);
		if (Info.size() != 10)
			std::cout << "Error, phone number must contains 10 numbers" << std::endl;
		else
		{
			for (i = Info.begin(); i != Info.end(); i++)
			{
				if (isdigit(*i) == 0)
				{
					std::cout << "Error, your phone number invalid characters" << std::endl;
					break ;
				}
			}
			if (i == Info.end())
				break ;
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
		if (std::cin.eof() == 1)
			return (FAILURE);
		if (Info.size() == 0)
			std::cout << "Error, field cannot be empty" << std::endl;
		else
		{	
			for (i = Info.begin(); i != Info.end(); i++)
			{
				if (isalnum(*i) == 0 && *i != ' ')
				{
					std::cout << "Error, your darkest secret contains invalid characters" << std::endl;
					break ;
				}
			}
			if (i == Info.end())
				break ;
		}
	}
	return (SUCCESS);
}
