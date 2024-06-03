/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:21:21 by jaung             #+#    #+#             */
/*   Updated: 2024/06/03 16:21:22 by jaung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
  public:
	Weapon(std::string weapon);
	~Weapon();
	std::string getWeapon();
	void setType(const std::string weapon);

  private:
	std::string _weapon;
};

#endif
