/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:49:34 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/18 09:49:36 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{

protected:

    std::string     type;

public:

    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(WrongAnimal const & copy);
    WrongAnimal &    operator=(WrongAnimal const & rhs);

    void                makeSound(void) const;
    std::string         getType(void) const;

};

#endif
