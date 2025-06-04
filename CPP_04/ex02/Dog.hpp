#ifndef DOG_HPP
#define DOG_HPP
#include "Brain.hpp"
#include "Animal.hpp"

class Dog : public Animal
{
private:
    Brain *brain;
public:
    Dog();
    Dog(const Dog& original);
    Dog& operator=(const Dog& original);
    std::string getType() const;
    void makeSound();
    virtual ~Dog();
};

#endif