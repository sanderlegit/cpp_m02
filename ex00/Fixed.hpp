/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 16:12:48 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/18 16:39:19 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const val);
		~Fixed(void);

		Fixed &				operator=(Fixed const & rhs);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
	private:
		int					_val;
		static const int	_fractionalBits = 8;
};

#endif
