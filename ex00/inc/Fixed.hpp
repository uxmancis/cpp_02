/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 10:23:21 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/16 12:06:56 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#define GREEN "\033[0;92m"
#define RED "\033[0;31m"
#define AQUAMARINE "\033[0;96m"
#define RESET_COLOR "\033[0m"

#include <stdio.h>

/*C++ Standard Library is recommended in subject: https://en.cppreference.com/w/cpp/header*/
//#include <string> //std::string
#include <iostream> //std::cout, std::endl

/* Fixed Class definition 
*
*   private: only the class' methods can access it directly
*   public: so that it can be called from outside the class
*/
class Fixed
{
    private:
        int _number_value; //when private, underscore '_' is widely used.
        static const int    nb_of_fract_bits;//value: always 8
    
    public:
        Fixed(void); //Default Constructor: initializes _number_value = 0
        ~Fixed(void); //Destructor
        Fixed(Fixed const &copy); //Copy Constructor
        Fixed &operator=(Fixed const &copy);//Copy Assignment Operator Overload
        int getRawBits (void) const; //Member function: returns raw value of the fixed-point value
        void setRawBits (int const raw); //Member function: sets raw value of the fixed-point number
};

#endif

/* About OCCF (Orthodox Canonical Class Form):
*
*   4 essential functions must be provided by a class to ensure
*   proper management of resources, especially when dealing with dynamic
*   memory or other resources that require explicit management (file
*   handless, network connections, ...).
*
*   OCCF is a design approach ensuring that objects of a class behave
*   correctly when copied, assigned, or destroyed. It's crucial in
*   C++ to avoid issues like double-free errors, memory leaks, dangling pointers, ...
*   By following these principles, classes in C++ can be made safer, 
*   more efficient and easier to maintain.
*
*   'The rule of 4':
*
*       1) Default Constructor: it's a constructor function that allows the creation
*                               of an object without providing any arguments.
*
*       1) Destructor: it's a function that cleans up an object of the class. It's
*                      responsible for releasing any resources the object may have
*                      acquired during its lifetime.
*       2) Copy Constructor: it's a constructor function that creates a new object as a
*                            copy of an existing object.
*       3) Copy Assignment Operator: it's a function that assignsthe state of one
*                                    object to another already existing object. Like the
*                                    copy constructor, it needs to handle deep copying
*                                    (e.g., copying dynamic memory).

*/
