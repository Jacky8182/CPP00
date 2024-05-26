#ifndef CONTACT_CLASS_HPP
 #define CONTACT_CLASS_HPP

# include "PhoneBook.class.hpp"

class Contact{

	private:
		std::string _Name;
		std::string _FirstName;
		std::String _NickName;
		std::string _PhoneNumber;
		std::string _DarkestSecret;

	public:
		Contact();
		~Contact();
		std::string getName() const;
		std::string getFirstName() const;
		std::string getNickName() const;
		std::string getPhoneNunber() const;
		std::string getDarkestSecret() const;

		void		setName(const std::string &Name);
		void		setFistName(const std::string &FirstName);
		void		setNickName(const std::string &SurName);
		void		setPhoneNumber(const std::string &PhoneNumber);
		void		setDarkestSecret(const std::string &DarkestSecret);

};

#endif
