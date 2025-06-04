#include "Cat.hpp"

Cat::Cat()
{
    this->brain = new Brain();
    type = "Cat";
}

Cat::Cat(const Cat& original) :  Animal(original)
{
    this->brain = new Brain(*original.brain);
    *this = original;
}

Cat& Cat::operator=(const Cat& original)
{

    if (this != &original)
    {
        if(this->brain)
        {
        delete this->brain;
        this->brain = new Brain(*original.brain);
        }
        this->type = original.type;
    }
    return *this;
}

void Cat::makeSound()
{
    std::cout << "meoww" << std::endl;
}

std::string Cat::getType() const
{
    return this->type;
}

Cat::~Cat()
{
    if (this->brain)
        delete this->brain;
}