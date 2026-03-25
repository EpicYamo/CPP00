/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 00:31:51 by aaycan            #+#    #+#             */
/*   Updated: 2026/03/26 02:46:43 by aaycan           ###   ########.fr       */
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

std::string	PhoneBook::_truncateString(std::string str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::searchContact() const
{
	int	i;

	if (this->_total == 0) {
		std::cout << "Phonebook is empty" << std::endl;
		return;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	i = 0;
	while (i < this->_total)
	{
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << _truncateString(this->_contacts[i].getFirstName());
		std::cout << "|" << std::setw(10) << _truncateString(this->_contacts[i].getLastName());
		std::cout << "|" << std::setw(10) << _truncateString(this->_contacts[i].getNickname());
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
	this->displaySpecificContact();
}

void	PhoneBook::displaySpecificContact() const
{
	std::string input;
	std::cout << "Enter index to display details: ";
	if (!(std::getline(std::cin, input)) || input.empty())
		return;
	if ((input.length() == 1) && (input[0] >= '0') && (input[0] < '0' + this->_total))
	{
		int idx = input[0] - '0';
		this->_contacts[idx].displayContact();
	}
	else
		std::cout << "Invalid index" << std::endl;
}
