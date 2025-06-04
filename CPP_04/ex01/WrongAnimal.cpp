#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("default")
{
}

WrongAnimal::WrongAnimal(const WrongAnimal& original)
{
    *this = original;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& original)
{
    if (this != &original)
        this->type = original.type;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "wrong chno" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
}