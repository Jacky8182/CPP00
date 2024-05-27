#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "Constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Destructor called" << std::endl;
}
void PhoneBook::PrintPhoneBook(int LastContact)
{
	int	CurrentContact;

	CurrentContact = 0;
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "|  INDEX  |FIRSTNAME|LAST NAME|NICK NAME|" << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	while (CurrentContact < LastContact)
	{
		std::cout << "|" << CurrentContact << "        |" ;
		std::cout << this->contact[CurrentContact].getFirstName() << "         |    "; 
		std::cout << this->contact[CurrentContact].getLastName() << "     |  " ;
		std::cout << this->contact[CurrentContact].getNickName() << "       |" << std::endl;
		std::cout << "-----------------------------------------" << std::endl;
		++CurrentContact;
	}
}
