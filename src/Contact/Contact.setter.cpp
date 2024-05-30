#include "PhoneBook.class.hpp"

void Contact::setFirstName(const std::string &FirstName)
{
	if (FirstName.size() > 10) {
		this->_FirstName = FirstName.substr(0, 9);
		this->_FirstName += '.';
	}
	else
		this->_FirstName = FirstName;
}

void Contact::setLastName(const std::string &LastName)
{
	if (LastName.size() > 10) {
		this->_LastName = LastName.substr(0, 9);
		this->_LastName += '.';
	}
	else
		this->_LastName = LastName;
}

void Contact::setNickName(const std::string &NickName)
{
	if (NickName.size() > 10) {
		this->_NickName = NickName.substr(0, 9);
		this->_NickName += '.';
	}
	else
		this->_NickName = NickName;
}

void Contact::setPhoneNumber(const std::string &PhoneNumber)
{
	this->_PhoneNumber = PhoneNumber;
}

void Contact::setDarkestSecret(const std::string &DarkestSecret)
{
	if (DarkestSecret.size() > 10) {
		this->_DarkestSecret = DarkestSecret.substr(0, 9);
		this->_DarkestSecret += '.';
	}
	else
		this->_DarkestSecret = DarkestSecret;
}
