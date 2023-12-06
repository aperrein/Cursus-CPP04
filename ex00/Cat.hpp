/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:48:20 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/18 09:48:22 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{

public:
        Cat();
        ~Cat();
        Cat(Cat const & copy);
        Cat &   operator=(Cat const & rhs);

        void        makeSound(void) const;

};

#endif
