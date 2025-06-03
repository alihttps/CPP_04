#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat& original);
    WrongCat& operator=(const WrongCat& original);
    std::string getType() const;
    void makeSound() const;
    virtual ~WrongCat();
};

#endif