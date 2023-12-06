/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:49:17 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/18 09:49:19 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const & copy)
{
    std::cout << "WrongCat constructor copy" << std::endl;
    *this = copy;
}

WrongCat &         WrongCat::operator=(WrongCat const & rhs)
{
    this->type = rhs.getType();
    return (*this);
}

void            WrongCat::makeSound(void) const
{
    std::cout << "Miaou miaou" << std::endl;
}
