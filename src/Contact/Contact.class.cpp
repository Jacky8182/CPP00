#include "PhoneBook.class.hpp"

Contact::Contact() : _FirstName(""), _LastName(""), _NickName(""),
	_PhoneNumber(""), _DarkestSecret("")
{
}

Contact::~Contact()
{
}

void Contact::PrintInfo(const int CurrentContact) const
{
	int len;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "|  INDEX  |FIRSTNAME |LAST NAME |NICK NAME |" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "|" << CurrentContact << "        |";
	std::cout << this->getFirstName();
	len = this->_FirstName.size();
	while (len < 10) {
		std::cout << " ";
		++len;
	}
	std::cout << "|";
	len = this->_LastName.size();
	std::cout << this->getLastName();
	while (len < 10) {
		std::cout << " ";
		++len;
	}
	std::cout << "|";
	len = this->_NickName.size();
	std::cout << this->getNickName();
	while (len < 10) {
		std::cout << " ";
		++len;
	}
	std::cout << "|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}

int Contact::AddContact()
{
	std::string Info;
	if (AddFirstName(Info) == SUCCESS) {
		this->setFirstName(Info);
		if (AddLastName(Info) == SUCCESS) {
			this->setLastName(Info);
			if (AddNickName(Info) == SUCCESS) {
				this->setNickName(Info);
				if (AddPhoneNumber(Info) == SUCCESS) {
					this->setPhoneNumber(Info);
					if (AddDarkestSecret(Info) == SUCCESS) {
						this->setDarkestSecret(Info);
						return (SUCCESS);
					}
				}
			}
		}
	}
	return (FAILURE);
}
