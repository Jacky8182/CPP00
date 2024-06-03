/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:25:04 by jaung             #+#    #+#             */
/*   Updated: 2024/06/03 16:25:05 by jaung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <Weapon.hpp>

Weapon::Weapon(std::string weapon) : _weapon(weapon)
{
}

Weapon::~Weapon()
{
}

std::string Weapon::getWeapon()
{
	return (_weapon);
}

void Weapon::setType(const std::string weapon)
{
	_weapon = weapon;
}
