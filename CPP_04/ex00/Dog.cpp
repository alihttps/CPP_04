#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
}

Dog::Dog(const Dog& original) :  Animal(original)
{
    *this = original;
}

Dog& Dog::operator=(const Dog& original)
{
    this->type = original.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "woof" << std::endl;
}

std::string Dog::getType() const
{
    return this->type;
}

Dog::~Dog()
{
}