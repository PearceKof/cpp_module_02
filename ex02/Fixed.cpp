/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:37:31 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/12 15:16:40 by blaurent         ###   ########.fr       */
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

std::ostream & operator<<( std::ostream & output, Fixed const & obj )
{
	output << obj.toFloat();
	return (output);
}

int	Fixed::getRawBits( void ) const
{
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

Fixed& Fixed::operator=(const Fixed &rhs)
{
	this->value = rhs.getRawBits();
	return(*this);
}

bool Fixed::operator>(const Fixed &rhs) const
{
	return(this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return(this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return(this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return(this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return(this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return(this->getRawBits() != rhs.getRawBits());
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
	return(Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	return(Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	return(Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	return(Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed& Fixed::operator++(void)
{
	++this->value;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp(*this);
	tmp.value = this->value++;
	return(tmp);
}

Fixed& Fixed::operator--(void)
{
	--this->value;
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp(*this);
	tmp.value = this->value--;
	return(tmp);
}

Fixed& Fixed::min(Fixed &f1, Fixed &f2)
{
	if(f1.getRawBits() < f2.getRawBits())
		return(f1);
	return(f2);
}

const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if(f1.getRawBits() < f2.getRawBits())
		return(f1);
	return(f2);
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2)
{
	if(f1.getRawBits() > f2.getRawBits())
		return(f1);
	return(f2);
}

const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if(f1.getRawBits() > f2.getRawBits())
		return(f1);
	return(f2);
}