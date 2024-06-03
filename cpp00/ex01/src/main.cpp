#include "PhoneBook.class.hpp"

int	main()
{
	PhoneBook	repertory;
	std::string answer;

	while (1)
	{
		while (repertory.GetCurrentContact() < MaxContact)
		{
			std::cout << "Enter a command: ";
			std::getline(std::cin, answer);
			if (std::cin.eof() == 1)
				return (1);
			if (SearchCommand(answer, repertory) == FAILURE)
				return (1);
		}
		repertory.ResetIndex();
	}
	return (0);
}
