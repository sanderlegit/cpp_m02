/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                         e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 16:12:45 by averheij      #+#    #+#                 */
/*   Updated: 2021/11/17 13:22:45 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

Fixed::Fixed(int const val) {
	std::cout << "int constructor " << std::endl;
	_val = val << _fractionalBits;
	return;
}

Fixed::Fixed(float const val) {
	std::cout << "float constructor " << std::endl;
	_val=(int)(roundf(val * floatFactor()));
	return;
}

Fixed::~Fixed(void) {
	std::cout << "destructor" << std::endl;
	return;
}

int			Fixed::getRawBits(void) const {
	return (_val);
}

void		Fixed::setRawBits(int const raw) {
	_val = raw;
	return;
}

float		Fixed::toFloat(void) const {
	return (((float)(_val)) / floatFactor());
}

int			Fixed::toInt(void) const {
	return (_val >> _fractionalBits);
}

Fixed &		Fixed::operator=(Fixed const & rhs) {
	std::cout << "assignment" << std::endl;
	_val = rhs.getRawBits();
	return *this;
}

std::ostream &		operator<<(std::ostream & o, Fixed const & f) {
	o << f.toFloat();
	return o;
}

int		Fixed::floatFactor() const {
	int	pow = 2;
	int	res = pow;
	for (int i = 1; i < _fractionalBits; i++)
		res *= pow;
	return res;
}
