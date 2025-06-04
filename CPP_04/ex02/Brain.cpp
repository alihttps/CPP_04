#include "Brain.hpp"

Brain::Brain()
{

}

Brain::Brain(const Brain& original)
{
    *this = original;
}

Brain& Brain::operator=(const Brain& original)
{
   for (int i = 0; i < 100; i++)
   {
    this->ideas[i] = original.ideas[i];
   }
   
   return *this; 
}

Brain::~Brain()
{

}
