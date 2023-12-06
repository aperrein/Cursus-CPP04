/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:48:43 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/18 09:48:44 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
public:

        Dog();
        ~Dog();
        Dog(Dog const & copy);
        Dog &   operator=(Dog const & rhs);

        void        makeSound(void) const;

};

#endif
