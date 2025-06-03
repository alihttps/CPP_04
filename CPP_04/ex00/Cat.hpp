#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat& original);
    Cat& operator=(const Cat& original);
    std::string getType() const;
    void makeSound() const;
    virtual ~Cat();
};

#endif