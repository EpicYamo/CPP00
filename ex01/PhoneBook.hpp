/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 23:13:26 by aaycan            #+#    #+#             */
/*   Updated: 2026/03/26 00:59:14 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>
# include <iomanip>

class PhoneBook
{
	private:
		Contact _contacts[8];
		int     _index;
		int     _total;

	public:
		PhoneBook();
		~PhoneBook();
		void	addContact();
		void	searchContact() const;
		void	truncateString(std::string str) const;
};

#endif
