#include "PhoneBook.class.hpp"

std::string Contact::getFirstName() const
{
	return (this->_FirstName);
}

std::string Contact::getLastName() const
{
	return (this->_LastName);
}

std::string Contact::getNickName() const
{
	return (this->_NickName);
}

std::string Contact::getPhoneNumber() const
{
	return (this->_PhoneNumber);
}

std::string Contact::getDarkestSecret() const
{
	return (this->_DarkestSecret);
}
