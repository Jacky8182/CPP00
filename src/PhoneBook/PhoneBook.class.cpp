#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "Constructor called" << std::endl;
}

PhoneBook::PhoneBook(const PhoneBook &copy)
{
	std::cout << "Copy called" << std::endl;
}

~PhoneBook::PhoneBook()
{
	std::cout << "Destructor called" << std::endl;
}
