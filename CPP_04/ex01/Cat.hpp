#ifndef CAT_HPP
#define CAT_HPP
#include "Brain.hpp"
#include "Animal.hpp"

class Cat : public Animal
{
private:
    Brain *brain;
public:
    Cat();
    Cat(const Cat& original);
    Cat& operator=(const Cat& original);
    std::string getType() const;
    void makeSound() const;
    virtual ~Cat();
};

#endif