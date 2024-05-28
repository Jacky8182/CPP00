#include "PhoneBook.class.hpp"

Contact::Contact() : _FirstName(""), _LastName(""), _NickName(""),
	_PhoneNumber(""), _DarkestSecret("")
{

}

Contact::~Contact()
{

}

void Contact::ResetContactInfo()
{
	std::string Empty = "";
	this->setFirstName(Empty);
	this->setLastName(Empty);
	this->setNickName(Empty);
	this->setPhoneNumber(Empty);
	this->setDarkestSecret(Empty);
}
void Contact::PrintInfo(const int CurrentContact) const
{
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "|" << CurrentContact << "        |";
	std::cout << this->getFirstName() << "         |    ";
	std::cout << this->getLastName() << "     |  ";
	std::cout << this->getNickName() << "       |" << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
}

int Contact::AddContact()
{
	std::string Info;
	if (AddFirstName(Info) == SUCCESS)
	{
		this->setFirstName(Info);
		if (AddLastName(Info) == SUCCESS)
		{
			this->setLastName(Info);
			if (AddNickName(Info) == SUCCESS)
			{
				this->setNickName(Info);
				if (AddPhoneNumber(Info) == SUCCESS)
				{
					this->setPhoneNumber(Info);
					if (AddDarkestSecret(Info) == SUCCESS)
					{
						this->setDarkestSecret(Info);
						return (SUCCESS);
					}
				}
			}
		}
	}
	return (FAILURE);
}
