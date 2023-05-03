/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:37:34 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/28 13:51:25 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXE_HPP
# define FIXE_HPP

# include <iostream>

class Fixed
{
private :
	int					value;
	static int const	fractionalBits  = 8;
public :
	Fixed();
	Fixed( const Fixed &obj );
	~Fixed();
	Fixed& operator=(const Fixed &obj);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

};

#endif