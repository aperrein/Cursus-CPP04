/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:49:40 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/18 09:49:42 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("gne")
{
    std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & copy)
{
    std::cout << "WrongAnimal constructor by copy" << std::endl;
    *this = copy;
}

WrongAnimal &            WrongAnimal::operator=(WrongAnimal const & rhs)
{
    this->type = rhs.getType();
    return (*this);
}

void                WrongAnimal::makeSound(void) const
{
    std::cout << "grr grr !" << std::endl;
}

std::string         WrongAnimal::getType(void) const
{
    return(this->type);
}
