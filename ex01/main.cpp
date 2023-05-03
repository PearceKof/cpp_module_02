/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:38:35 by blaurent          #+#    #+#             */
/*   Updated: 2023/04/28 14:48:37 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
Fixed a;
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );
a = Fixed( 1234.4321f );
Fixed const f( 0.01f );
std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;
std::cout << "f is " << f << std::endl;
std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;
std::cout << "f is " << f.toInt() << " as integer" << std::endl;
std::cout << "a is " << a.toFloat() << " as float" << std::endl;
std::cout << "b is " << b.toFloat() << " as float" << std::endl;
std::cout << "c is " << c.toFloat() << " as float" << std::endl;
std::cout << "d is " << d.toFloat() << " as float" << std::endl;
std::cout << "f is " << f.toFloat() << " as float" << std::endl;
return 0;
}