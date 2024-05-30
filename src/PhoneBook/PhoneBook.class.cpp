#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}
void PhoneBook::PrintPhoneBook(int LastContact)
{
	int	CurrentContact;
	int	len;

	CurrentContact = 0;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "|  INDEX  |FIRSTNAME |LAST NAME |NICK NAME |" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	while (CurrentContact < LastContact) {
		std::cout << "|" << CurrentContact << "        |";
		std::cout << this->contact[CurrentContact].getFirstName();
		len = this->contact[CurrentContact].getFirstName().size();
		while (len < 10) {
			std::cout << " ";
			++len;
		}
		std::cout << "|";
		std::cout << this->contact[CurrentContact].getLastName();
		len = this->contact[CurrentContact].getLastName().size();
		while (len < 10) {
			std::cout << " ";
			++len;
		}
		std::cout << "|";
		std::cout << this->contact[CurrentContact].getNickName();
		len = this->contact[CurrentContact].getNickName().size();
		while (len < 10) {
			std::cout << " ";
			++len;
		}
		std::cout << "|" << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		++CurrentContact;
	}
}
