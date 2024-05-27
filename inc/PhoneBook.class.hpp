#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"
# include <iostream>
# include <string>
# include <cstdlib>

const int	MaxContact = 8;
const int	SUCCESS = 1;
const int	FAILURE = 0;

class PhoneBook
{
  public:
	PhoneBook();
	~PhoneBook();
	Contact contact[MaxContact];
	void	PrintPhoneBook(int LastContact);

  private:
};

#endif
