#ifndef WRONGWrongAnimal_HPP
#define WRONGWrongAnimal_HPP
#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& original);
    WrongAnimal& operator=(const WrongAnimal& original);
    std::string getType() const;
    void makeSound() const;
    virtual ~WrongAnimal();
};

#endif