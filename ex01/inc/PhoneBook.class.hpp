#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"
# include <iostream>
# include <sstream>
# include <string>

const	int	MaxContact = 8;
const	int	SUCCESS = 1;
const	int	FAILURE = 0;

class PhoneBook
{
  public:
	PhoneBook();
	~PhoneBook();
	Contact contact[MaxContact];
	void PrintPhoneBook(int LastContact);
	void ResetIndex();
	int	SearchContact();
	int	AddContact();
	int	GetCurrentContact() const;
	std::string::iterator i;

  private:
	int	CurrentContact;
};

int			SearchCommand(const std::string &answer, PhoneBook &repertory);
#endif
