#include "PhoneBook.class.hpp"

int	main(void)
{
	PhoneBook	repertory;
	int			CurrentContact;

	std::string answer;
	CurrentContact = 0;
	while (1)
	{
		while (CurrentContact < MaxContact)
		{
			std::cout << "Enter a command: ";
			std::getline(std::cin, answer);
			if (answer.compare("ADD") == 0)
			{
				if (repertory.contact[CurrentContact].AddContact() == FAILURE)
				{
					repertory.contact[CurrentContact].ResetContactInfo();
				}
				else
					++CurrentContact;
			}
			else if (answer.compare("SEARCH") == 0)
			{
				// if (CurrentContact == 0)
				// {
				// 	std::cout << "Phonebook is empty" << std::endl;
				// }
				repertory.PrintPhoneBook(MaxContact);
			}
			else if (answer.compare("EXIT") == 0)
			{
				return (0);
			}
		}
		CurrentContact = 0;
	}
	return (0);
}
