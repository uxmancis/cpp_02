/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 10:23:07 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/16 11:04:52 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

/*Default Constructor*/
Fixed::Fixed(void): _number_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

/*Destructor*/
Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

/*Copy Constructor*/
Fixed::Fixed(Fixed const & copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

/*Copy assignment operator*/
Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_number_value = copy.getRawBits();
    return(*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_number_value);
}

void Fixed::setRawBits (int const raw)
{
    this->_number_value = raw;
}