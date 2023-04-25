#ifndef FIXE_H
# define FIXE_H

# include <iostream>

class Fixed
{
private :
	int	value;
	static int const nbrOfBits = 8;
public :
	Fixed( void );
	Fixed( const Fixed &obj );
	~Fixed( void );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif