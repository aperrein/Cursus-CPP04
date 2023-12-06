/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:43:22 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/18 13:43:24 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
        std::string     *ideas;

public:
        Brain();
        ~Brain();
        Brain(Brain const & copy);
        Brain & operator=(Brain const & rhs);

};

#endif
