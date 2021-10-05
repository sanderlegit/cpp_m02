/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                         e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 16:12:48 by averheij      #+#    #+#                 */
/*   Updated: 2021/10/05 16:35:44 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const val);
		Fixed(float const val);
		~Fixed(void);

		int						getRawBits(void) const;
		void					setRawBits(int const raw);
		float					toFloat(void) const;
		int						toInt(void) const;

		Fixed &					operator=(Fixed const & rhs);

		static Fixed &			min(Fixed & lhs, Fixed & rhs);
		static Fixed const &	min(Fixed const & lhs, Fixed const & rhs);
		static Fixed &			max(Fixed & lhs, Fixed & rhs);
		static Fixed const &	max(Fixed const & lhs, Fixed const & rhs);

		bool					operator<(Fixed const & rhs) const;
		bool					operator>(Fixed const & rhs) const;
		bool					operator>=(Fixed const & rhs) const;
		bool					operator<=(Fixed const & rhs) const;
		bool					operator==(Fixed const & rhs) const;
		bool					operator!=(Fixed const & rhs) const;

		Fixed 					operator+(Fixed const & rhs);
		Fixed 					operator-(Fixed const & rhs);
		Fixed 					operator*(Fixed const & rhs);
		Fixed 					operator/(Fixed const & rhs);
		
		Fixed 					operator++();//Prefix
		Fixed 					operator++(int);//Postix
		Fixed 					operator--();//Prefix
		Fixed 					operator--(int);//Postix
	private:
		int					_val;
		static const int	_fractionalBits = 8;
};

std::ostream &		operator<<(std::ostream & o, Fixed const & f);

#endif
