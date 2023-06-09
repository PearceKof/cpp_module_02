/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:37:34 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/28 14:50:12 by blaurent         ###   ########.fr       */
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
	Fixed& operator=(const Fixed &obj);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

};
std::ostream & operator<<( std::ostream & o, Fixed const & i );
#endif