/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:37:34 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/03 14:13:27 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXE_HPP
# define FIXE_HPP

# include <iostream>
# include <cmath>
class Fixed
{
private :
	int					value;
	static int const	fractionalBits  = 8;
public :
	Fixed();
	Fixed( const int nbr );
	Fixed( const float nbr );
	Fixed( const Fixed &obj );
	~Fixed();

	Fixed& operator=(const Fixed &rhs);
	bool operator>(const Fixed &rhs) const;
	bool operator<(const Fixed &rhs) const;
	bool operator>=(const Fixed &rhs) const;
	bool operator<=(const Fixed &rhs) const;
	bool operator==(const Fixed &rhs) const;
	bool operator!=(const Fixed &rhs) const;

	Fixed operator+(const Fixed &rhs) const;
	Fixed operator-(const Fixed &rhs) const;
	Fixed operator*(const Fixed &rhs) const;
	Fixed operator/(const Fixed &rhs) const;

	Fixed& operator++(void);
	Fixed operator++(int);
	Fixed& operator--(void);
	Fixed operator--(int);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	static Fixed& min(Fixed &f1, Fixed &f2);
	static const Fixed& min(const Fixed &f1, const Fixed &f2);
	static Fixed& max(Fixed &f1, Fixed &f2);
	static const Fixed& max(const Fixed &f1, const Fixed &f2);
};
std::ostream & operator<<( std::ostream & o, Fixed const & i );
#endif