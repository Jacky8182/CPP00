#include "PhoneBook.class.hpp"

void Contact::setFirstName(const std::string &FirstName)
{
	this->_FirstName = FirstName;
}

void Contact::setLastName(const std::string &LastName)
{
	this->_LastName = LastName;
}

void Contact::setNickName(const std::string &NickName)
{
	this->_NickName = NickName;
}

void Contact::setPhoneNumber(const std::string &PhoneNumber)
{
	this->_PhoneNumber = PhoneNumber;
}

void Contact::setDarkestSecret(const std::string &DarkestSecret)
{
	this->_DarkestSecret = DarkestSecret;
}
