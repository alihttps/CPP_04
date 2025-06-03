#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& original) :  WrongAnimal(original)
{
    *this = original;
}

WrongCat& WrongCat::operator=(const WrongCat& original)

{
    this->type = original.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "wrong meoww" << std::endl;
}

std::string WrongCat::getType() const
{
    return this->type;
}

WrongCat::~WrongCat()
{
}