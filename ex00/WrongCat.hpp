/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:49:12 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/18 09:49:13 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:
        WrongCat();
        ~WrongCat();
        WrongCat(WrongCat const & copy);
        WrongCat &   operator=(WrongCat const & rhs);

        void        makeSound(void) const;

};

#endif
