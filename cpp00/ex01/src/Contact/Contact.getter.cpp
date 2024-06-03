#include "PhoneBook.class.hpp"

std::string Contact::getFirstName() const
{
	return (_FirstName);
}

std::string Contact::getLastName() const
{
	return (_LastName);
}

std::string Contact::getNickName() const
{
	return (_NickName);
}

std::string Contact::getPhoneNumber() const
{
	return (_PhoneNumber);
}

std::string Contact::getDarkestSecret() const
{
	return (_DarkestSecret);
}
