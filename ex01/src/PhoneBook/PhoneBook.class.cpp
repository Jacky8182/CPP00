#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(): CurrentContact(0)
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
		std::cout << contact[CurrentContact].getFirstName();
		len = contact[CurrentContact].getFirstName().size();
		while (len < 10) {
			std::cout << " ";
			++len;
		}
		std::cout << "|";
		std::cout << contact[CurrentContact].getLastName();
		len = contact[CurrentContact].getLastName().size();
		while (len < 10) {
			std::cout << " ";
			++len;
		}
		std::cout << "|";
		std::cout << contact[CurrentContact].getNickName();
		len = contact[CurrentContact].getNickName().size();
		while (len < 10) {
			std::cout << " ";
			++len;
		}
		std::cout << "|" << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		++CurrentContact;
	}
}
int PhoneBook::GetCurrentContact() const
{
	return CurrentContact;
}

void PhoneBook::ResetIndex()
{
	CurrentContact = 0;
}