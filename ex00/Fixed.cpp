/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 16:12:45 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/18 16:27:41 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) {
	std::cout << "constructor" << std::endl;
	_val = 0;
	return;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "copy constructor" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed(void) {
	std::cout << "destructor" << std::endl;
	return;
}

Fixed &		Fixed::operator=(Fixed const & rhs) {
	std::cout << "assignment" << std::endl;
	_val = rhs.getRawBits();
	return *this;
}

int			Fixed::getRawBits(void) const {
	std::cout << "getRawBits" << std::endl;
	return (_val);
}

void		Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits" << std::endl;
	_val = raw;
	return;
}
