/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 23:32:56 by aaycan            #+#    #+#             */
/*   Updated: 2026/03/26 00:38:41 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() 
    : _firstName(""), 
      _lastName(""), 
      _nickName(""), 
      _phoneNumber(""), 
      _darkestSecret("")
{
}

void	Contact::setContact(std::string first_name, std::string last_name, std::string nick_name,
		std::string phone_number, std::string darkest_secret)
{
	_firstName = first_name;
	_lastName = last_name;
	_nickName = nick_name;
	_phoneNumber = phone_number;
	_darkestSecret = darkest_secret;
}

Contact::~Contact()
{
}

std::string	Contact::getFirstName() const
{
	return (_firstName);
}

std::string	Contact::getLastName() const
{
	return (_lastName);
}

std::string	Contact::getNickname() const
{
	return (_nickName);
}

std::string	Contact::getPhoneNumber() const
{
	return (_phoneNumber);
}

std::string	Contact::getDarkestSecret() const
{
	return (_darkestSecret);
}

void	Contact::displayContact() const
{
    std::cout << "First Name     : " << this->_firstName << std::endl;
    std::cout << "Last Name      : " << this->_lastName << std::endl;
    std::cout << "Nickname       : " << this->_nickName << std::endl;
    std::cout << "Phone Number   : " << this->_phoneNumber << std::endl;
    std::cout << "Darkest Secret : " << this->_darkestSecret << std::endl;
}
