#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>

class Contact
{
  private:
	std::string _FirstName;
	std::string _LastName;
	std::string _NickName;
	std::string _PhoneNumber;
	std::string _DarkestSecret;

  public:
	Contact();
	~Contact();

	std::string::iterator i;

	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;

	void	setFirstName(const std::string &FirstName);
	void 	setLastName(const std::string &LastName);
	void 	setNickName(const std::string &SurName);
	void 	setPhoneNumber(const std::string &PhoneNumber);
	void 	setDarkestSecret(const std::string &DarkestSecret);

	void 	ResetContactInfo();
	void	PrintInfo(const int CurrentContact) const;

	int 	AddContact();
	int 	AddFirstName(std::string &Info);
	int 	AddLastName(std::string &Info);
	int 	AddNickName(std::string &Info);
	int 	AddPhoneNumber(std::string &Info);
	int 	AddDarkestSecret(std::string &Info);
};

#endif