/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                         e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 16:12:48 by averheij      #+#    #+#                 */
/*   Updated: 2021/11/17 13:22:16 by dries               **ee8ee**            */
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

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;

		Fixed &				operator=(Fixed const & rhs);
	private:
		int					floatFactor() const;
		int					_val;
		static const int	_fractionalBits = 8;
};

std::ostream &		operator<<(std::ostream & o, Fixed const & f);

#endif
