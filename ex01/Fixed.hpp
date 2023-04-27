#ifndef FIXE_H
# define FIXE_H

# include <iostream>
# include <cmath>

class Fixed
{
private :
	int			value;
	static int	const nbrOfFracBits = 8;
public :
	Fixed( void );
	Fixed( const int valueInt );
	Fixed( const float value );
	Fixed( const Fixed &obj );
	~Fixed( void );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

#endif