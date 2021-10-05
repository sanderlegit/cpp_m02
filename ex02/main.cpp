/* ************************************************************************** */ /*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                          e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 16:47:25 by averheij      #+#    #+#                 */
/*   Updated: 2021/10/05 16:11:52 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

void	print_bool(bool a, bool b) {
	if (a) 
		std::cout << "\ttrue";
	else
		std::cout << "\tfalse";

	if (a == b) 
		std::cout << "\tcorrect" << std::endl;
	else
		std::cout << "\tincorrect" << std::endl;
}

void	print_fixed(Fixed a, float b) {
	std::cout << "\t" << a;
	std::cout << "\t" << b;
	if (a == b) 
		std::cout << "\tcorrect" << std::endl;
	else
		std::cout << "\tincorrect" << std::endl;
}

int		main(void) {
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		Fixed a(1);
		Fixed b(2);

		std::cout << "1 > 2";
		print_bool(a > b, 1 > 2);
		std::cout << "1 < 2";
		print_bool(a < b, 1 < 2);
		std::cout << "1 >= 2";
		print_bool(a >= b, 1 >= 2);
		std::cout << "1 <= 2";
		print_bool(a <= b, 1 <= 2);
		std::cout << "1 == 2";
		print_bool(a == b, 1 == 2);
		std::cout << "1 != 2";
		print_bool(a != b, 1 != 2);

		a = Fixed(2);
		std::cout << "2 > 2";
		print_bool(a > b, 2 > 2);
		std::cout << "2 < 2";
		print_bool(a < b, 2 < 2);
		std::cout << "2 >= 2";
		print_bool(a >= b, 2 >= 2);
		std::cout << "2 <= 2";
		print_bool(a <= b, 2 <= 2);
		std::cout << "2 == 2";
		print_bool(a == b, 2 == 2);
		std::cout << "2 != 2";
		print_bool(a != b, 2 != 2);
	}
	{
		std::cout << "0.251 * 0.11";
		print_fixed(Fixed(0.251f) * Fixed(0.11f), 0.251 * 0.11);
		std::cout << "120 * 29";
		print_fixed(Fixed(120 )* Fixed(29),120 * 29);

		std::cout << "0.251 + 0.11";
		print_fixed(Fixed(0.251f) + Fixed(0.11f), 0.251 + 0.11);
		std::cout << "120 + 29";
		print_fixed(Fixed(120 )+ Fixed(29),120 + 29);

		std::cout << "0.251 - 0.11";
		print_fixed(Fixed(0.251f) - Fixed(0.11f), 0.251 - 0.11);
		std::cout << "120 - 29";
		print_fixed(Fixed(120 )- Fixed(29),120 - 29);

		std::cout << "0.25 / 0.5";
		print_fixed(Fixed(0.25f) / Fixed(0.5f), 0.25 / 0.5);
		std::cout << "120 / 29";
		print_fixed(Fixed(120 )/ Fixed(29),120.0f / 29.0f);
	}
	{
		Fixed a(0.1111f);

		std::cout << a << std::endl;
		std::cout << "a++" << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << "++a" << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;

		std::cout << "a--" << std::endl;
		std::cout << a-- << std::endl;
		std::cout << a << std::endl;

		std::cout << "--a" << std::endl;
		std::cout << --a << std::endl;
		std::cout << a << std::endl;
	}
	{
		Fixed a(1);
		Fixed b(2);

		std::cout << "a " << a.toFloat() << std::endl;
		std::cout << "b " << b.toFloat() << std::endl;
		Fixed &ret = Fixed::max(a, b);
		std::cout << "Fixed ret = Fixed::max(a, b)" << std::endl;
		std::cout << "ret " << ret.toFloat() << std::endl;
		std::cout << "ret " << &ret << std::endl;
		std::cout << "b   " << &b << std::endl;
		Fixed &ret2 = Fixed::min(a, b);
		std::cout << "Fixed ret = Fixed::min(a, b)" << std::endl;
		std::cout << "ret " << ret2.toFloat() << std::endl;
		std::cout << "ret " << &ret2 << std::endl;
		std::cout << "a   " << &a << std::endl;
	}
	return 0;
}
