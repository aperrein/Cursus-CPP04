/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:43:16 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/18 13:43:17 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor" << std::endl;
    this->ideas = new std::string[100];
}

Brain::~Brain()
{
    std::cout << "Brain destructor" << std::endl;
    delete [] this->ideas;
}

Brain::Brain(Brain const & copy)
{
    std::cout << "Brain constructor by copy" << std::endl;
    this->ideas = new std::string[100];
    int i =0;
    while (i < 100)
    {
        this->ideas[i] = copy.ideas[i];
        i++;
    }
}

Brain &            Brain::operator=(Brain const & rhs)
{
    this->ideas = rhs.ideas;
    return (*this);
}
