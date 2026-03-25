/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 00:31:51 by aaycan            #+#    #+#             */
/*   Updated: 2026/03/26 01:00:32 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0), _total(0)
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContact()
{
	int	i;
	std::string	fields[5];
	static const std::string	prompts[5] = {
		"First Name: ",
		"Last Name: ",
		"Nickname: ",
		"Phone Number: ",
		"Darkest Secret: "
	};
	std::cout << "\nAdding New Contact (Index: " << this->_index << ")" << std::endl;
	i = 0;
	while (i < 5)
	{
		while (true)
		{
			std::cout << prompts[i];
			if (!std::getline(std::cin, fields[i]))
				return ;
			if (!fields[i].empty())
				break ;
			std::cout << "Error: Field cannot be empty. Please try again." << std::endl;
		}
		i++;
	}
	this->_contacts[this->_index].setContact(fields[0], fields[1], fields[2], fields[3], fields[4]);
	this->_index = (this->_index + 1) % 8;
	if (this->_total < 8)
		this->_total++;
	std::cout << "Contact added successfully\n" << std::endl;
}
