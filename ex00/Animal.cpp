/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:48:10 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/18 09:48:11 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("gne")
{
    std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(Animal const & copy)
{
    std::cout << "Animal constructor by copy" << std::endl;
    *this = copy;
}

Animal &            Animal::operator=(Animal const & rhs)
{
    this->type = rhs.getType();
    return (*this);
}

void                Animal::makeSound(void) const
{
    std::cout << "grr grr !" << std::endl;
}

std::string         Animal::getType(void) const
{
    return(this->type);
}