/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:37:31 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/03 14:16:41 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &obj ) : value(obj.value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed( const int nbr ) : value( nbr << this->fractionalBits )
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float nbr ) : value( roundf(nbr * (1 << this->fractionalBits)) )
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed &rhs )
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->value = rhs.getRawBits();
	return(*this);
}

 std::ostream & operator<<( std::ostream & output, Fixed const & rhs )
{
	output << rhs.toFloat();
	return (output);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void	Fixed::setRawBits( int const raw )
{
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->getRawBits()) / (1 << fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (this->value >> fractionalBits);
}