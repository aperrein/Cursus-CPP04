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
    this->_brain = new Brain;
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(Dog const & copy)
{
    std::cout << "Dog copy constructor" << std::endl;
    this->_brain = new Brain(*(copy._brain));
    //this->_brain = copy._brain;
    this->type = copy.getType();
}

Dog &           Dog::operator=(Dog const & rhs)
{
    delete this->_brain;
    this->_brain = new Brain(*(rhs._brain));
    //this->_brain = rhs._brain;
    this->type = rhs.getType();
    return (*this);
}

void            Dog::makeSound(void) const
{
    std::cout << "Ouaf ouaf" << std::endl;
}

Brain*      Dog::getBrain(void) const
{
    return (_brain);
}