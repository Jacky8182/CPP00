#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"
# include <iostream>
# include <string>

const int	MaxContact = 8;

class PhoneBook
{
  public:
	PhoneBook();
	PhoneBook(const PhoneBook &copy);
	~PhoneBook();
	Contact contact[MaxContact];

  private:
	int _CurrentContact;
};

#endif
