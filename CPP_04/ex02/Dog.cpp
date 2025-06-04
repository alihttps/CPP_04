#include "Dog.hpp"

Dog::Dog()
{
    this->brain = new Brain();
    type = "Dog";
}

Dog::Dog(const Dog& original) :  Animal(original)
{
    this->brain = new Brain(*original.brain);
    *this = original;
}

Dog& Dog::operator=(const Dog& original)
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

void Dog::makeSound()
{
    std::cout << "woof" << std::endl;
}

std::string Dog::getType() const
{
    return this->type;
}

Dog::~Dog()
{
    if (this->brain)
        delete this->brain;
}