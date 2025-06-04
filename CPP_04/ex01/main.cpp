#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#define ANIMALNUM 10

int main()
{
    Animal *animals[ANIMALNUM];

    for (int i = 0; i < ANIMALNUM/2; i++)
    {
        animals[i] = new Cat();
        std::cout << animals[i]->getType() << std::endl;
    }
    for (int i = ANIMALNUM/2; i < ANIMALNUM; i++)
    {
        animals[i] = new Dog();
        std::cout << animals[i]->getType() << std::endl;
    }
    Cat cat;
    {
        Cat ca1t = cat;
    }
    return 0;
} 