/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:43:31 by fsuomins          #+#    #+#             */
/*   Updated: 2023/11/19 15:58:42 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void Contact::setContact(void)
{
    std::cout << "Please, enter the first name: ";
    std::getline(std::cin, this->_firstName);
    std::cout << "Please, enter the last name: ";
    std::getline(std::cin, this->_lastName);
    std::cout << "Please, enter the _nickname: ";
    std::getline(std::cin, this->_nickname);
    std::cout << "Please, enter the phone number: ";
    std::getline(std::cin, this->_phoneNumber);
    std::cout << "Please, enter the darkest secret: ";
    std::getline(std::cin, this->_darkestSecret);
}

void Contact::printContact(void)
{
    std::cout << std::setw(10) << this->_firstName.substr(0, 10) << "|";
    std::cout << std::setw(10) << this->_lastName.substr(0, 10) << "|";
    std::cout << std::setw(10) << this->_nickname.substr(0, 10) << std::endl;
}
