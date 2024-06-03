/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:29:13 by jaung             #+#    #+#             */
/*   Updated: 2024/06/03 16:29:14 by jaung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA
{
  public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack();
	void setWeapon(Weapon &weapon);

  private:
	std::string _name;
	Weapon &_weapon;
};

#endif
