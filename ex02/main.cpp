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

int         main(void)
{
    const Animal        *d = new Dog();
    const Animal        *c = new Cat();
    //Animal              a;

    std::cout << d->getType() << std::endl;
    d->makeSound();
    std::cout << c->getType() << std::endl;
    c->makeSound();

    delete d;
    delete c;
    std::cout << std::endl;

    //deep or not deep that is the question

    Dog     test;
    Dog &   test_ref = test;

    Dog     copy = Dog(test_ref);

    std::cout << std::endl;
    std::cout << test.getBrain() << std::endl;
    std::cout << copy.getBrain() << std::endl;
    std::cout << std::endl;
    
    //array
    int     i;
    i = 0;

    const Animal    *tab[10];

    while (i < 10)
    {
        if (i % 2)
            tab[i] = new Dog();
        else
            tab[i] = new Cat();
        i++;
    }
    
    std::cout << std::endl;
    i = 0;
    while (i < 10)
        delete tab[i++];

    return (0);
}