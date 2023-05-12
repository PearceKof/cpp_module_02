/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:22:15 by blaurent          #+#    #+#             */
/*   Updated: 2023/05/03 13:22:15 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << " test pre-incrementation " << ++a << std::endl;
	std::cout << a++ << " test post-incrementation " << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "the max between " << a << " and " << b << " : " << Fixed::max( a, b ) << std::endl;
	std::cout << "the min between " << a << " and " << b << " : " << Fixed::min( a, b ) << std::endl;
	Fixed c(-21);
	Fixed d(2);
	std::cout << c << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << c << " / " << d << " = " << c / d << std::endl;
	std::cout << c << " * " << d << " = " << c * d << std::endl;
	std::cout << c << " - " << d << " = " << c - d << std::endl;
	std::cout << c << " + " << d << " = " << c + d << std::endl;
	if (c < d)
	{
		std::cout << c << " est plus petit que " << d << std::endl;
	}
	if (c > d)
	{
		std::cout << c << " est plus grand que " << d << std::endl;
	}
	if (c == -21)
	{
		std::cout << c << " = -21" << std::endl;
	}
	if (d >= -2)
	{
		std::cout << d << " est plus grand ou egal -2" << std::endl;
	}
	if (c <= -2)
	{
		std::cout << c << " est plus petit ou egal -2" << std::endl;
	}
	return 0;
}