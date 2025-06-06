#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog& original);
    Dog& operator=(const Dog& original);
    std::string getType() const;
    void makeSound() const;
    virtual ~Dog();
};

#endif