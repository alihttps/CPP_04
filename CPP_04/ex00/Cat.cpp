#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
}

Cat::Cat(const Cat& original) :  Animal(original)
{
    *this = original;
}

Cat& Cat::operator=(const Cat& original)

{
    this->type = original.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "meoww" << std::endl;
}

std::string Cat::getType() const
{
    return this->type;
}

Cat::~Cat()
{
}