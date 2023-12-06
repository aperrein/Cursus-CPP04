/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:48:27 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/18 09:48:29 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor" << std::endl;
    this->type = "Cat";
    this->_brain = new Brain;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(Cat const & copy)
{
    std::cout << "Cat constructor copy" << std::endl;
    this->_brain = new Brain(*(copy._brain));
    this->type = copy.getType();
}

Cat &         Cat::operator=(Cat const & rhs)
{
    delete this->_brain;
    this->_brain = new Brain(*(rhs._brain));
    this->type = rhs.getType();
    return (*this);
}

void            Cat::makeSound(void) const
{
    std::cout << "Miaou miaou" << std::endl;
}