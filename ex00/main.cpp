/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:47:36 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/18 09:47:38 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int         main(void)
{
    const Animal       *test = new Animal();
    const Animal        *j = new Dog();
    const Animal        *i = new Cat();

    std::cout << test->getType() << std::endl;
    test->makeSound();
    std::cout << i->getType() << std::endl;
    i->makeSound();
    std::cout << j->getType() << std::endl;
    j->makeSound();

    delete test;
    delete i;
    delete j;

    const WrongAnimal       *w = new WrongCat();

    std::cout << w->getType() << std::endl;
    w->makeSound();

    delete w;

    return (0);
}
