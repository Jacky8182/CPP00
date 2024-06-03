/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:14:36 by jaung             #+#    #+#             */
/*   Updated: 2024/06/03 13:14:37 by jaung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ACCOUNT_H__
# define __ACCOUNT_H__

class Account
{
  public:
	typedef Account t;

	static int getNbAccounts(void)
	{
		return _nbAccounts;
	}
	static int getTotalAmount(void)
	{
		return _totalAmount;
	}
	static int getNbDeposits(void)
	{
		return _totalNbDeposits;
	}
	static int getNbWithdrawals(void)
	{
		return _totalNbWithdrawals;
	}
	static void displayAccountsInfos(void);

	Account(int initial_deposit);
	~Account(void);

	void makeDeposit(int deposit);
	bool makeWithdrawal(int withdrawal);
	int checkAmount(void) const;
	void displayStatus(void) const;

  private:
	static int _nbAccounts;
	static int _totalAmount;
	static int _totalNbDeposits;
	static int _totalNbWithdrawals;

	static void _displayTimestamp(void);

	int _accountIndex;
	int _amount;
	int _nbDeposits;
	int _nbWithdrawals;

	Account(void);
};

#endif