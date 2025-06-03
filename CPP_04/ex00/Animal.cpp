#include "Animal.hpp"

Animal::Animal() : type("default")
{
}

Animal::Animal(const Animal& original)
{
    *this = original;
}

Animal& Animal::operator=(const Animal& original)
{
    this->type = original.type;
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "chno" << std::endl;
}

Animal::~Animal()
{
}