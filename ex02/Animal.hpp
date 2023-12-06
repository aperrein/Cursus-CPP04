/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:48:03 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/18 09:48:05 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{

protected:

    std::string     type;

public:

    Animal();
    virtual ~Animal();
    Animal(Animal const & copy);
    Animal &    operator=(Animal const & rhs);

    virtual void        makeSound(void) const = 0;
    std::string         getType(void) const;

};

#endif
