#ifndef PHONEBOOK_CLASS_HPP
 #define PHONEBOKK_CLASS_HPP

# include <iostream>
# include <string>
# include "Contact.class.hpp"

class PhoneBook{

	public:
		PhoneBook();
		PhoneBook(const PhoneBook &copy);
		~PhoneBook();
		Contact contact[_MaxContact];

	private:
		const int	_MaxContact = 8;
		int			_CurrentContact;
};

#endif
