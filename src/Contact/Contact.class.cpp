#include "PhoneBook.class.hpp"

Contact::Contact() : _FirstName("John"), _LastName("Doe"), _NickName("Killer"),
	_PhoneNumber("0631458260"), _DarkestSecret("Is dumb")
{
	std::cout << "Constructor called" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Destructor called" << std::endl;
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
