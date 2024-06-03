/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:58:02 by jaung             #+#    #+#             */
/*   Updated: 2024/06/03 13:58:03 by jaung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
  public:
	Zombie();
	~Zombie();
	void announce();
	void SetName(std::string &name);

  private:
	std::string name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif