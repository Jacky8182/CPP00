#include "PhoneBook.class.hpp"

int	main(void)
{
	PhoneBook	repertory;
	std::string::iterator i;
	int			CurrentContact;
	int			to_int;

	std::string answer;
	CurrentContact = 0;
	while (1) {
		while (CurrentContact < MaxContact) {
			std::cout << "Enter a command: ";
			std::getline(std::cin, answer);
			if (std::cin.eof() == 1) {
				return (1);
			}
			if (answer.compare("ADD") == 0) {
				if (repertory.contact[CurrentContact].AddContact() == FAILURE) {
					return (1);
				}
				else
					++CurrentContact;
			}
			else if (answer.compare("SEARCH") == 0) {
				if (CurrentContact == 0) {
					std::cout << "Phonebook is empty" << std::endl;
				}
				else {
					repertory.PrintPhoneBook(MaxContact);
					std::cout << "Enter the contact's index you're looking for: ";
					std::getline(std::cin, answer);
					if (std::cin.eof() == 1) {
						return (1);
					}
					std::cout << std::endl;
					for (i = answer.begin(); i != answer.end(); ++i) {
						if (isdigit(*i) == 0) {
							std::cout << "Error, could not find contact" << std::endl;
							break;
						}
					}
					if (i == answer.end()) {
						std::istringstream(answer) >> to_int;
						if (to_int < 0 || to_int > 7) {
							std::cout << "Error, index does not exist" << std::endl;
						}
						else {
							repertory.contact[to_int].PrintInfo(to_int);
						}
					}
				}
			}
			else if (answer.compare("EXIT") == 0) {
				return (0);
			}
			else {
				std:: cout << "Command not found" << std::endl;
			}
		}
		CurrentContact = 0;
	}
	return (0);
}
