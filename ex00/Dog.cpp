/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:48:49 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/18 09:48:51 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(Dog const & copy)
{
    std::cout << "Dog copy constructor" << std::endl;
    *this = copy;
}

Dog &           Dog::operator=(Dog const & rhs)
{
    this->type = rhs.getType();
    return (*this);
}

void            Dog::makeSound(void) const
{
    std::cout << "Ouaf ouaf" << std::endl;
}